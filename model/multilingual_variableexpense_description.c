#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "multilingual_variableexpense_description.h"



static multilingual_variableexpense_description_t *multilingual_variableexpense_description_create_internal(
    char *s_variableexpense_description1,
    char *s_variableexpense_description2
    ) {
    multilingual_variableexpense_description_t *multilingual_variableexpense_description_local_var = malloc(sizeof(multilingual_variableexpense_description_t));
    if (!multilingual_variableexpense_description_local_var) {
        return NULL;
    }
    memset(multilingual_variableexpense_description_local_var, 0, sizeof(multilingual_variableexpense_description_t));
    multilingual_variableexpense_description_local_var->_library_owned = 1;
    multilingual_variableexpense_description_local_var->s_variableexpense_description1 = s_variableexpense_description1;
    multilingual_variableexpense_description_local_var->s_variableexpense_description2 = s_variableexpense_description2;
    return multilingual_variableexpense_description_local_var;
}

__attribute__((deprecated)) multilingual_variableexpense_description_t *multilingual_variableexpense_description_create(
    char *s_variableexpense_description1,
    char *s_variableexpense_description2
    ) {
    multilingual_variableexpense_description_t *result = multilingual_variableexpense_description_create_internal (
        s_variableexpense_description1,
        s_variableexpense_description2
        );
    if (!result) {
    }
    return result;
}

void multilingual_variableexpense_description_free(multilingual_variableexpense_description_t *multilingual_variableexpense_description) {
    if(NULL == multilingual_variableexpense_description){
        return ;
    }
    if(multilingual_variableexpense_description->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "multilingual_variableexpense_description_free");
        return ;
    }
    listEntry_t *listEntry;
    if (multilingual_variableexpense_description->s_variableexpense_description1) {
        free(multilingual_variableexpense_description->s_variableexpense_description1);
        multilingual_variableexpense_description->s_variableexpense_description1 = NULL;
    }
    if (multilingual_variableexpense_description->s_variableexpense_description2) {
        free(multilingual_variableexpense_description->s_variableexpense_description2);
        multilingual_variableexpense_description->s_variableexpense_description2 = NULL;
    }
    free(multilingual_variableexpense_description);
}

cJSON *multilingual_variableexpense_description_convertToJSON(multilingual_variableexpense_description_t *multilingual_variableexpense_description) {
    cJSON *item = cJSON_CreateObject();

    // multilingual_variableexpense_description->s_variableexpense_description1
    if(multilingual_variableexpense_description->s_variableexpense_description1) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescription1", multilingual_variableexpense_description->s_variableexpense_description1) == NULL) {
    goto fail; //String
    }
    }


    // multilingual_variableexpense_description->s_variableexpense_description2
    if(multilingual_variableexpense_description->s_variableexpense_description2) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescription2", multilingual_variableexpense_description->s_variableexpense_description2) == NULL) {
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

multilingual_variableexpense_description_t *multilingual_variableexpense_description_parseFromJSON(cJSON *multilingual_variableexpense_descriptionJSON){

    multilingual_variableexpense_description_t *multilingual_variableexpense_description_local_var = NULL;

    char *s_variableexpense_description1_local_str = NULL;

    char *s_variableexpense_description2_local_str = NULL;

    // multilingual_variableexpense_description->s_variableexpense_description1
    cJSON *s_variableexpense_description1 = cJSON_GetObjectItemCaseSensitive(multilingual_variableexpense_descriptionJSON, "sVariableexpenseDescription1");
    if (cJSON_IsNull(s_variableexpense_description1)) {
        s_variableexpense_description1 = NULL;
    }
    if (s_variableexpense_description1) { 
    if(!cJSON_IsString(s_variableexpense_description1) && !cJSON_IsNull(s_variableexpense_description1))
    {
    goto end; //String
    }
    }

    // multilingual_variableexpense_description->s_variableexpense_description2
    cJSON *s_variableexpense_description2 = cJSON_GetObjectItemCaseSensitive(multilingual_variableexpense_descriptionJSON, "sVariableexpenseDescription2");
    if (cJSON_IsNull(s_variableexpense_description2)) {
        s_variableexpense_description2 = NULL;
    }
    if (s_variableexpense_description2) { 
    if(!cJSON_IsString(s_variableexpense_description2) && !cJSON_IsNull(s_variableexpense_description2))
    {
    goto end; //String
    }
    }


    if (s_variableexpense_description1 && !cJSON_IsNull(s_variableexpense_description1)) s_variableexpense_description1_local_str = strdup(s_variableexpense_description1->valuestring);
    if (s_variableexpense_description2 && !cJSON_IsNull(s_variableexpense_description2)) s_variableexpense_description2_local_str = strdup(s_variableexpense_description2->valuestring);

    multilingual_variableexpense_description_local_var = multilingual_variableexpense_description_create_internal (
        s_variableexpense_description1_local_str,
        s_variableexpense_description2_local_str
        );

    if (!multilingual_variableexpense_description_local_var) {
        goto end;
    }

    return multilingual_variableexpense_description_local_var;
end:
    if (s_variableexpense_description1_local_str) {
        free(s_variableexpense_description1_local_str);
        s_variableexpense_description1_local_str = NULL;
    }
    if (s_variableexpense_description2_local_str) {
        free(s_variableexpense_description2_local_str);
        s_variableexpense_description2_local_str = NULL;
    }
    return NULL;

}
