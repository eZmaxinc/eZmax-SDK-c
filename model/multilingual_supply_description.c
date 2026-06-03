#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_supply_description.h"



static multilingual_supply_description_t *multilingual_supply_description_create_internal(
    char *s_supply_description1,
    char *s_supply_description2
    ) {
    multilingual_supply_description_t *multilingual_supply_description_local_var = malloc(sizeof(multilingual_supply_description_t));
    if (!multilingual_supply_description_local_var) {
        return NULL;
    }
    memset(multilingual_supply_description_local_var, 0, sizeof(multilingual_supply_description_t));
    multilingual_supply_description_local_var->_library_owned = 1;
    multilingual_supply_description_local_var->s_supply_description1 = s_supply_description1;
    multilingual_supply_description_local_var->s_supply_description2 = s_supply_description2;
    return multilingual_supply_description_local_var;
}

__attribute__((deprecated)) multilingual_supply_description_t *multilingual_supply_description_create(
    char *s_supply_description1,
    char *s_supply_description2
    ) {
    multilingual_supply_description_t *result = multilingual_supply_description_create_internal (
        s_supply_description1,
        s_supply_description2
        );
    if (!result) {
    }
    return result;
}

void multilingual_supply_description_free(multilingual_supply_description_t *multilingual_supply_description) {
    if(NULL == multilingual_supply_description){
        return ;
    }
    if(multilingual_supply_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_supply_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_supply_description->s_supply_description1) {
        free(multilingual_supply_description->s_supply_description1);
        multilingual_supply_description->s_supply_description1 = NULL;
    }
    if (multilingual_supply_description->s_supply_description2) {
        free(multilingual_supply_description->s_supply_description2);
        multilingual_supply_description->s_supply_description2 = NULL;
    }
    free(multilingual_supply_description);
}

cJSON *multilingual_supply_description_convertToJSON(multilingual_supply_description_t *multilingual_supply_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_supply_description->s_supply_description1
    if(multilingual_supply_description->s_supply_description1) {
    if(cJSON_AddStringToObject(item, "sSupplyDescription1", multilingual_supply_description->s_supply_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_supply_description->s_supply_description2
    if(multilingual_supply_description->s_supply_description2) {
    if(cJSON_AddStringToObject(item, "sSupplyDescription2", multilingual_supply_description->s_supply_description2) == NULL) {
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

multilingual_supply_description_t *multilingual_supply_description_parseFromJSON(cJSON *multilingual_supply_descriptionJSON){

    multilingual_supply_description_t *multilingual_supply_description_local_var = NULL;

    char *s_supply_description1_local_str = NULL;

    char *s_supply_description2_local_str = NULL;

    // multilingual_supply_description->s_supply_description1
    cJSON *s_supply_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_supply_descriptionJSON, "sSupplyDescription1");
    if (cJSON_IsNull(s_supply_description1)) {
        s_supply_description1 = NULL;
    }
    if (s_supply_description1) { 
    if(!cJSON_IsString(s_supply_description1) && !cJSON_IsNull(s_supply_description1))
    {
    goto end; //String
    }
    }

    // multilingual_supply_description->s_supply_description2
    cJSON *s_supply_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_supply_descriptionJSON, "sSupplyDescription2");
    if (cJSON_IsNull(s_supply_description2)) {
        s_supply_description2 = NULL;
    }
    if (s_supply_description2) { 
    if(!cJSON_IsString(s_supply_description2) && !cJSON_IsNull(s_supply_description2))
    {
    goto end; //String
    }
    }


    if (s_supply_description1 && !cJSON_IsNull(s_supply_description1)) s_supply_description1_local_str = strdup(s_supply_description1->valuestring);
    if (s_supply_description2 && !cJSON_IsNull(s_supply_description2)) s_supply_description2_local_str = strdup(s_supply_description2->valuestring);

    multilingual_supply_description_local_var = multilingual_supply_description_create_internal (
        s_supply_description1_local_str,
        s_supply_description2_local_str
        );

    if (!multilingual_supply_description_local_var) {
        goto end;
    }

    return multilingual_supply_description_local_var;
end:
    if (s_supply_description1_local_str) {
        free(s_supply_description1_local_str);
        s_supply_description1_local_str = NULL;
    }
    if (s_supply_description2_local_str) {
        free(s_supply_description2_local_str);
        s_supply_description2_local_str = NULL;
    }
    return NULL;

}
