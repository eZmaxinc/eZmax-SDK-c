#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_dropdown_element_response_compound.h"



static custom_dropdown_element_response_compound_t *custom_dropdown_element_response_compound_create_internal(
    char *s_label,
    char *s_value
    ) {
    custom_dropdown_element_response_compound_t *custom_dropdown_element_response_compound_local_var = malloc(sizeof(custom_dropdown_element_response_compound_t));
    if (!custom_dropdown_element_response_compound_local_var) {
        return NULL;
    }
    custom_dropdown_element_response_compound_local_var->s_label = s_label;
    custom_dropdown_element_response_compound_local_var->s_value = s_value;

    custom_dropdown_element_response_compound_local_var->_library_owned = 1;
    return custom_dropdown_element_response_compound_local_var;
}

__attribute__((deprecated)) custom_dropdown_element_response_compound_t *custom_dropdown_element_response_compound_create(
    char *s_label,
    char *s_value
    ) {
    return custom_dropdown_element_response_compound_create_internal (
        s_label,
        s_value
        );
}

void custom_dropdown_element_response_compound_free(custom_dropdown_element_response_compound_t *custom_dropdown_element_response_compound) {
    if(NULL == custom_dropdown_element_response_compound){
        return ;
    }
    if(custom_dropdown_element_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_dropdown_element_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_dropdown_element_response_compound->s_label) {
        free(custom_dropdown_element_response_compound->s_label);
        custom_dropdown_element_response_compound->s_label = NULL;
    }
    if (custom_dropdown_element_response_compound->s_value) {
        free(custom_dropdown_element_response_compound->s_value);
        custom_dropdown_element_response_compound->s_value = NULL;
    }
    free(custom_dropdown_element_response_compound);
}

cJSON *custom_dropdown_element_response_compound_convertToJSON(custom_dropdown_element_response_compound_t *custom_dropdown_element_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // custom_dropdown_element_response_compound->s_label
    if (!custom_dropdown_element_response_compound->s_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLabel", custom_dropdown_element_response_compound->s_label) == NULL) {
    goto fail; //String
    }


    // custom_dropdown_element_response_compound->s_value
    if (!custom_dropdown_element_response_compound->s_value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sValue", custom_dropdown_element_response_compound->s_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_dropdown_element_response_compound_t *custom_dropdown_element_response_compound_parseFromJSON(cJSON *custom_dropdown_element_response_compoundJSON){

    custom_dropdown_element_response_compound_t *custom_dropdown_element_response_compound_local_var = NULL;

    // custom_dropdown_element_response_compound->s_label
    cJSON *s_label = cJSON_GetObjectItemCaseSensitive(custom_dropdown_element_response_compoundJSON, "sLabel");
    if (cJSON_IsNull(s_label)) {
        s_label = NULL;
    }
    if (!s_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_label))
    {
    goto end; //String
    }

    // custom_dropdown_element_response_compound->s_value
    cJSON *s_value = cJSON_GetObjectItemCaseSensitive(custom_dropdown_element_response_compoundJSON, "sValue");
    if (cJSON_IsNull(s_value)) {
        s_value = NULL;
    }
    if (!s_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_value))
    {
    goto end; //String
    }


    custom_dropdown_element_response_compound_local_var = custom_dropdown_element_response_compound_create_internal (
        strdup(s_label->valuestring),
        strdup(s_value->valuestring)
        );

    return custom_dropdown_element_response_compound_local_var;
end:
    return NULL;

}
