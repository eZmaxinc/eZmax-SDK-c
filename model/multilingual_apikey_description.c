#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_apikey_description.h"



multilingual_apikey_description_t *multilingual_apikey_description_create(
    char *s_apikey_description1,
    char *s_apikey_description2
    ) {
    multilingual_apikey_description_t *multilingual_apikey_description_local_var = malloc(sizeof(multilingual_apikey_description_t));
    if (!multilingual_apikey_description_local_var) {
        return NULL;
    }
    multilingual_apikey_description_local_var->s_apikey_description1 = s_apikey_description1;
    multilingual_apikey_description_local_var->s_apikey_description2 = s_apikey_description2;

    return multilingual_apikey_description_local_var;
}


void multilingual_apikey_description_free(multilingual_apikey_description_t *multilingual_apikey_description) {
    if(NULL == multilingual_apikey_description){
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_apikey_description->s_apikey_description1) {
        free(multilingual_apikey_description->s_apikey_description1);
        multilingual_apikey_description->s_apikey_description1 = NULL;
    }
    if (multilingual_apikey_description->s_apikey_description2) {
        free(multilingual_apikey_description->s_apikey_description2);
        multilingual_apikey_description->s_apikey_description2 = NULL;
    }
    free(multilingual_apikey_description);
}

cJSON *multilingual_apikey_description_convertToJSON(multilingual_apikey_description_t *multilingual_apikey_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_apikey_description->s_apikey_description1
    if(multilingual_apikey_description->s_apikey_description1) {
    if(cJSON_AddStringToObject(item, "sApikeyDescription1", multilingual_apikey_description->s_apikey_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_apikey_description->s_apikey_description2
    if(multilingual_apikey_description->s_apikey_description2) {
    if(cJSON_AddStringToObject(item, "sApikeyDescription2", multilingual_apikey_description->s_apikey_description2) == NULL) {
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

multilingual_apikey_description_t *multilingual_apikey_description_parseFromJSON(cJSON *multilingual_apikey_descriptionJSON){

    multilingual_apikey_description_t *multilingual_apikey_description_local_var = NULL;

    // multilingual_apikey_description->s_apikey_description1
    cJSON *s_apikey_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_apikey_descriptionJSON, "sApikeyDescription1");
    if (s_apikey_description1) { 
    if(!cJSON_IsString(s_apikey_description1) && !cJSON_IsNull(s_apikey_description1))
    {
    goto end; //String
    }
    }

    // multilingual_apikey_description->s_apikey_description2
    cJSON *s_apikey_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_apikey_descriptionJSON, "sApikeyDescription2");
    if (s_apikey_description2) { 
    if(!cJSON_IsString(s_apikey_description2) && !cJSON_IsNull(s_apikey_description2))
    {
    goto end; //String
    }
    }


    multilingual_apikey_description_local_var = multilingual_apikey_description_create (
        s_apikey_description1 && !cJSON_IsNull(s_apikey_description1) ? strdup(s_apikey_description1->valuestring) : NULL,
        s_apikey_description2 && !cJSON_IsNull(s_apikey_description2) ? strdup(s_apikey_description2->valuestring) : NULL
        );

    return multilingual_apikey_description_local_var;
end:
    return NULL;

}
