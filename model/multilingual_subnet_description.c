#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_subnet_description.h"



static multilingual_subnet_description_t *multilingual_subnet_description_create_internal(
    char *s_subnet_description1,
    char *s_subnet_description2
    ) {
    multilingual_subnet_description_t *multilingual_subnet_description_local_var = malloc(sizeof(multilingual_subnet_description_t));
    if (!multilingual_subnet_description_local_var) {
        return NULL;
    }
    multilingual_subnet_description_local_var->s_subnet_description1 = s_subnet_description1;
    multilingual_subnet_description_local_var->s_subnet_description2 = s_subnet_description2;

    multilingual_subnet_description_local_var->_library_owned = 1;
    return multilingual_subnet_description_local_var;
}

__attribute__((deprecated)) multilingual_subnet_description_t *multilingual_subnet_description_create(
    char *s_subnet_description1,
    char *s_subnet_description2
    ) {
    return multilingual_subnet_description_create_internal (
        s_subnet_description1,
        s_subnet_description2
        );
}

void multilingual_subnet_description_free(multilingual_subnet_description_t *multilingual_subnet_description) {
    if(NULL == multilingual_subnet_description){
        return ;
    }
    if(multilingual_subnet_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_subnet_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_subnet_description->s_subnet_description1) {
        free(multilingual_subnet_description->s_subnet_description1);
        multilingual_subnet_description->s_subnet_description1 = NULL;
    }
    if (multilingual_subnet_description->s_subnet_description2) {
        free(multilingual_subnet_description->s_subnet_description2);
        multilingual_subnet_description->s_subnet_description2 = NULL;
    }
    free(multilingual_subnet_description);
}

cJSON *multilingual_subnet_description_convertToJSON(multilingual_subnet_description_t *multilingual_subnet_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_subnet_description->s_subnet_description1
    if(multilingual_subnet_description->s_subnet_description1) {
    if(cJSON_AddStringToObject(item, "sSubnetDescription1", multilingual_subnet_description->s_subnet_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_subnet_description->s_subnet_description2
    if(multilingual_subnet_description->s_subnet_description2) {
    if(cJSON_AddStringToObject(item, "sSubnetDescription2", multilingual_subnet_description->s_subnet_description2) == NULL) {
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

multilingual_subnet_description_t *multilingual_subnet_description_parseFromJSON(cJSON *multilingual_subnet_descriptionJSON){

    multilingual_subnet_description_t *multilingual_subnet_description_local_var = NULL;

    // multilingual_subnet_description->s_subnet_description1
    cJSON *s_subnet_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_subnet_descriptionJSON, "sSubnetDescription1");
    if (cJSON_IsNull(s_subnet_description1)) {
        s_subnet_description1 = NULL;
    }
    if (s_subnet_description1) { 
    if(!cJSON_IsString(s_subnet_description1) && !cJSON_IsNull(s_subnet_description1))
    {
    goto end; //String
    }
    }

    // multilingual_subnet_description->s_subnet_description2
    cJSON *s_subnet_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_subnet_descriptionJSON, "sSubnetDescription2");
    if (cJSON_IsNull(s_subnet_description2)) {
        s_subnet_description2 = NULL;
    }
    if (s_subnet_description2) { 
    if(!cJSON_IsString(s_subnet_description2) && !cJSON_IsNull(s_subnet_description2))
    {
    goto end; //String
    }
    }


    multilingual_subnet_description_local_var = multilingual_subnet_description_create_internal (
        s_subnet_description1 && !cJSON_IsNull(s_subnet_description1) ? strdup(s_subnet_description1->valuestring) : NULL,
        s_subnet_description2 && !cJSON_IsNull(s_subnet_description2) ? strdup(s_subnet_description2->valuestring) : NULL
        );

    return multilingual_subnet_description_local_var;
end:
    return NULL;

}
