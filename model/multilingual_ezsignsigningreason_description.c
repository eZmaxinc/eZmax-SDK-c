#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_ezsignsigningreason_description.h"



static multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description_create_internal(
    char *s_ezsignsigningreason_description1,
    char *s_ezsignsigningreason_description2
    ) {
    multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description_local_var = malloc(sizeof(multilingual_ezsignsigningreason_description_t));
    if (!multilingual_ezsignsigningreason_description_local_var) {
        return NULL;
    }
    multilingual_ezsignsigningreason_description_local_var->s_ezsignsigningreason_description1 = s_ezsignsigningreason_description1;
    multilingual_ezsignsigningreason_description_local_var->s_ezsignsigningreason_description2 = s_ezsignsigningreason_description2;

    multilingual_ezsignsigningreason_description_local_var->_library_owned = 1;
    return multilingual_ezsignsigningreason_description_local_var;
}

__attribute__((deprecated)) multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description_create(
    char *s_ezsignsigningreason_description1,
    char *s_ezsignsigningreason_description2
    ) {
    return multilingual_ezsignsigningreason_description_create_internal (
        s_ezsignsigningreason_description1,
        s_ezsignsigningreason_description2
        );
}

void multilingual_ezsignsigningreason_description_free(multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description) {
    if(NULL == multilingual_ezsignsigningreason_description){
        return ;
    }
    if(multilingual_ezsignsigningreason_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_ezsignsigningreason_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description1) {
        free(multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description1);
        multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description1 = NULL;
    }
    if (multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description2) {
        free(multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description2);
        multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description2 = NULL;
    }
    free(multilingual_ezsignsigningreason_description);
}

cJSON *multilingual_ezsignsigningreason_description_convertToJSON(multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description1
    if(multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description1) {
    if(cJSON_AddStringToObject(item, "sEzsignsigningreasonDescription1", multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description2
    if(multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description2) {
    if(cJSON_AddStringToObject(item, "sEzsignsigningreasonDescription2", multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description2) == NULL) {
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

multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description_parseFromJSON(cJSON *multilingual_ezsignsigningreason_descriptionJSON){

    multilingual_ezsignsigningreason_description_t *multilingual_ezsignsigningreason_description_local_var = NULL;

    // multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description1
    cJSON *s_ezsignsigningreason_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_ezsignsigningreason_descriptionJSON, "sEzsignsigningreasonDescription1");
    if (cJSON_IsNull(s_ezsignsigningreason_description1)) {
        s_ezsignsigningreason_description1 = NULL;
    }
    if (s_ezsignsigningreason_description1) { 
    if(!cJSON_IsString(s_ezsignsigningreason_description1) && !cJSON_IsNull(s_ezsignsigningreason_description1))
    {
    goto end; //String
    }
    }

    // multilingual_ezsignsigningreason_description->s_ezsignsigningreason_description2
    cJSON *s_ezsignsigningreason_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_ezsignsigningreason_descriptionJSON, "sEzsignsigningreasonDescription2");
    if (cJSON_IsNull(s_ezsignsigningreason_description2)) {
        s_ezsignsigningreason_description2 = NULL;
    }
    if (s_ezsignsigningreason_description2) { 
    if(!cJSON_IsString(s_ezsignsigningreason_description2) && !cJSON_IsNull(s_ezsignsigningreason_description2))
    {
    goto end; //String
    }
    }


    multilingual_ezsignsigningreason_description_local_var = multilingual_ezsignsigningreason_description_create_internal (
        s_ezsignsigningreason_description1 && !cJSON_IsNull(s_ezsignsigningreason_description1) ? strdup(s_ezsignsigningreason_description1->valuestring) : NULL,
        s_ezsignsigningreason_description2 && !cJSON_IsNull(s_ezsignsigningreason_description2) ? strdup(s_ezsignsigningreason_description2->valuestring) : NULL
        );

    return multilingual_ezsignsigningreason_description_local_var;
end:
    return NULL;

}
