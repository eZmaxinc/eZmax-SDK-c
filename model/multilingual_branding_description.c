#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_branding_description.h"



multilingual_branding_description_t *multilingual_branding_description_create(
    char *s_branding_description1,
    char *s_branding_description2
    ) {
    multilingual_branding_description_t *multilingual_branding_description_local_var = malloc(sizeof(multilingual_branding_description_t));
    if (!multilingual_branding_description_local_var) {
        return NULL;
    }
    multilingual_branding_description_local_var->s_branding_description1 = s_branding_description1;
    multilingual_branding_description_local_var->s_branding_description2 = s_branding_description2;

    return multilingual_branding_description_local_var;
}


void multilingual_branding_description_free(multilingual_branding_description_t *multilingual_branding_description) {
    if(NULL == multilingual_branding_description){
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_branding_description->s_branding_description1) {
        free(multilingual_branding_description->s_branding_description1);
        multilingual_branding_description->s_branding_description1 = NULL;
    }
    if (multilingual_branding_description->s_branding_description2) {
        free(multilingual_branding_description->s_branding_description2);
        multilingual_branding_description->s_branding_description2 = NULL;
    }
    free(multilingual_branding_description);
}

cJSON *multilingual_branding_description_convertToJSON(multilingual_branding_description_t *multilingual_branding_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_branding_description->s_branding_description1
    if(multilingual_branding_description->s_branding_description1) {
    if(cJSON_AddStringToObject(item, "sBrandingDescription1", multilingual_branding_description->s_branding_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_branding_description->s_branding_description2
    if(multilingual_branding_description->s_branding_description2) {
    if(cJSON_AddStringToObject(item, "sBrandingDescription2", multilingual_branding_description->s_branding_description2) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

multilingual_branding_description_t *multilingual_branding_description_parseFromJSON(cJSON *multilingual_branding_descriptionJSON){

    multilingual_branding_description_t *multilingual_branding_description_local_var = NULL;

    // multilingual_branding_description->s_branding_description1
    cJSON *s_branding_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_branding_descriptionJSON, "sBrandingDescription1");
    if (s_branding_description1) { 
    if(!cJSON_IsString(s_branding_description1) && !cJSON_IsNull(s_branding_description1))
    {
    goto end; //String
    }
    }

    // multilingual_branding_description->s_branding_description2
    cJSON *s_branding_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_branding_descriptionJSON, "sBrandingDescription2");
    if (s_branding_description2) { 
    if(!cJSON_IsString(s_branding_description2) && !cJSON_IsNull(s_branding_description2))
    {
    goto end; //String
    }
    }


    multilingual_branding_description_local_var = multilingual_branding_description_create (
        s_branding_description1 && !cJSON_IsNull(s_branding_description1) ? strdup(s_branding_description1->valuestring) : NULL,
        s_branding_description2 && !cJSON_IsNull(s_branding_description2) ? strdup(s_branding_description2->valuestring) : NULL
        );

    return multilingual_branding_description_local_var;
end:
    return NULL;

}
