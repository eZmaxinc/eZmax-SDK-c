#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezsignsignergroup_description.h"



multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description_create(
    char *s_ezsignsignergroup_description1,
    char *s_ezsignsignergroup_description2
    ) {
    multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description_local_var = malloc(sizeof(multilingual_ezsignsignergroup_description_t));
    if (!multilingual_ezsignsignergroup_description_local_var) {
        return NULL;
    }
    multilingual_ezsignsignergroup_description_local_var->s_ezsignsignergroup_description1 = s_ezsignsignergroup_description1;
    multilingual_ezsignsignergroup_description_local_var->s_ezsignsignergroup_description2 = s_ezsignsignergroup_description2;

    return multilingual_ezsignsignergroup_description_local_var;
}


void multilingual_ezsignsignergroup_description_free(multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description) {
    if(NULL == multilingual_ezsignsignergroup_description){
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description1) {
        free(multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description1);
        multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description1 = NULL;
    }
    if (multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description2) {
        free(multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description2);
        multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description2 = NULL;
    }
    free(multilingual_ezsignsignergroup_description);
}

cJSON *multilingual_ezsignsignergroup_description_convertToJSON(multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description1
    if(multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description1) {
    if(cJSON_AddStringToObject(item, "sEzsignsignergroupDescription1", multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description2
    if(multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description2) {
    if(cJSON_AddStringToObject(item, "sEzsignsignergroupDescription2", multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description2) == NULL) {
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

multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description_parseFromJSON(cJSON *multilingual_ezsignsignergroup_descriptionJSON){

    multilingual_ezsignsignergroup_description_t *multilingual_ezsignsignergroup_description_local_var = NULL;

    // multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description1
    cJSON *s_ezsignsignergroup_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezsignsignergroup_descriptionJSON, "sEzsignsignergroupDescription1");
    if (s_ezsignsignergroup_description1) { 
    if(!cJSON_IsString(s_ezsignsignergroup_description1) && !cJSON_IsNull(s_ezsignsignergroup_description1))
    {
    goto end; //String
    }
    }

    // multilingual_ezsignsignergroup_description->s_ezsignsignergroup_description2
    cJSON *s_ezsignsignergroup_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezsignsignergroup_descriptionJSON, "sEzsignsignergroupDescription2");
    if (s_ezsignsignergroup_description2) { 
    if(!cJSON_IsString(s_ezsignsignergroup_description2) && !cJSON_IsNull(s_ezsignsignergroup_description2))
    {
    goto end; //String
    }
    }


    multilingual_ezsignsignergroup_description_local_var = multilingual_ezsignsignergroup_description_create (
        s_ezsignsignergroup_description1 && !cJSON_IsNull(s_ezsignsignergroup_description1) ? strdup(s_ezsignsignergroup_description1->valuestring) : NULL,
        s_ezsignsignergroup_description2 && !cJSON_IsNull(s_ezsignsignergroup_description2) ? strdup(s_ezsignsignergroup_description2->valuestring) : NULL
        );

    return multilingual_ezsignsignergroup_description_local_var;
end:
    return NULL;

}
