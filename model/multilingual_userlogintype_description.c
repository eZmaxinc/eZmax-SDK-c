#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_userlogintype_description.h"



static multilingual_userlogintype_description_t *multilingual_userlogintype_description_create_internal(
    char *s_userlogintype_description1,
    char *s_userlogintype_description2
    ) {
    multilingual_userlogintype_description_t *multilingual_userlogintype_description_local_var = malloc(sizeof(multilingual_userlogintype_description_t));
    if (!multilingual_userlogintype_description_local_var) {
        return NULL;
    }
    multilingual_userlogintype_description_local_var->s_userlogintype_description1 = s_userlogintype_description1;
    multilingual_userlogintype_description_local_var->s_userlogintype_description2 = s_userlogintype_description2;

    multilingual_userlogintype_description_local_var->_library_owned = 1;
    return multilingual_userlogintype_description_local_var;
}

__attribute__((deprecated)) multilingual_userlogintype_description_t *multilingual_userlogintype_description_create(
    char *s_userlogintype_description1,
    char *s_userlogintype_description2
    ) {
    return multilingual_userlogintype_description_create_internal (
        s_userlogintype_description1,
        s_userlogintype_description2
        );
}

void multilingual_userlogintype_description_free(multilingual_userlogintype_description_t *multilingual_userlogintype_description) {
    if(NULL == multilingual_userlogintype_description){
        return ;
    }
    if(multilingual_userlogintype_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_userlogintype_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_userlogintype_description->s_userlogintype_description1) {
        free(multilingual_userlogintype_description->s_userlogintype_description1);
        multilingual_userlogintype_description->s_userlogintype_description1 = NULL;
    }
    if (multilingual_userlogintype_description->s_userlogintype_description2) {
        free(multilingual_userlogintype_description->s_userlogintype_description2);
        multilingual_userlogintype_description->s_userlogintype_description2 = NULL;
    }
    free(multilingual_userlogintype_description);
}

cJSON *multilingual_userlogintype_description_convertToJSON(multilingual_userlogintype_description_t *multilingual_userlogintype_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_userlogintype_description->s_userlogintype_description1
    if(multilingual_userlogintype_description->s_userlogintype_description1) {
    if(cJSON_AddStringToObject(item, "sUserlogintypeDescription1", multilingual_userlogintype_description->s_userlogintype_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_userlogintype_description->s_userlogintype_description2
    if(multilingual_userlogintype_description->s_userlogintype_description2) {
    if(cJSON_AddStringToObject(item, "sUserlogintypeDescription2", multilingual_userlogintype_description->s_userlogintype_description2) == NULL) {
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

multilingual_userlogintype_description_t *multilingual_userlogintype_description_parseFromJSON(cJSON *multilingual_userlogintype_descriptionJSON){

    multilingual_userlogintype_description_t *multilingual_userlogintype_description_local_var = NULL;

    // multilingual_userlogintype_description->s_userlogintype_description1
    cJSON *s_userlogintype_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_userlogintype_descriptionJSON, "sUserlogintypeDescription1");
    if (cJSON_IsNull(s_userlogintype_description1)) {
        s_userlogintype_description1 = NULL;
    }
    if (s_userlogintype_description1) { 
    if(!cJSON_IsString(s_userlogintype_description1) && !cJSON_IsNull(s_userlogintype_description1))
    {
    goto end; //String
    }
    }

    // multilingual_userlogintype_description->s_userlogintype_description2
    cJSON *s_userlogintype_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_userlogintype_descriptionJSON, "sUserlogintypeDescription2");
    if (cJSON_IsNull(s_userlogintype_description2)) {
        s_userlogintype_description2 = NULL;
    }
    if (s_userlogintype_description2) { 
    if(!cJSON_IsString(s_userlogintype_description2) && !cJSON_IsNull(s_userlogintype_description2))
    {
    goto end; //String
    }
    }


    multilingual_userlogintype_description_local_var = multilingual_userlogintype_description_create_internal (
        s_userlogintype_description1 && !cJSON_IsNull(s_userlogintype_description1) ? strdup(s_userlogintype_description1->valuestring) : NULL,
        s_userlogintype_description2 && !cJSON_IsNull(s_userlogintype_description2) ? strdup(s_userlogintype_description2->valuestring) : NULL
        );

    return multilingual_userlogintype_description_local_var;
end:
    return NULL;

}
