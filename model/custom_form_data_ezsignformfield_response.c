#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_form_data_ezsignformfield_response.h"



static custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_create_internal(
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value
    ) {
    custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_local_var = malloc(sizeof(custom_form_data_ezsignformfield_response_t));
    if (!custom_form_data_ezsignformfield_response_local_var) {
        return NULL;
    }
    memset(custom_form_data_ezsignformfield_response_local_var, 0, sizeof(custom_form_data_ezsignformfield_response_t));
    custom_form_data_ezsignformfield_response_local_var->_library_owned = 1;
    custom_form_data_ezsignformfield_response_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    custom_form_data_ezsignformfield_response_local_var->s_ezsignformfield_value = s_ezsignformfield_value;
    return custom_form_data_ezsignformfield_response_local_var;
}

__attribute__((deprecated)) custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_create(
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value
    ) {
    custom_form_data_ezsignformfield_response_t *result = custom_form_data_ezsignformfield_response_create_internal (
        s_ezsignformfield_label,
        s_ezsignformfield_value
        );
    if (!result) {
    }
    return result;
}

void custom_form_data_ezsignformfield_response_free(custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response) {
    if(NULL == custom_form_data_ezsignformfield_response){
        return ;
    }
    if(custom_form_data_ezsignformfield_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_form_data_ezsignformfield_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_form_data_ezsignformfield_response->s_ezsignformfield_label) {
        free(custom_form_data_ezsignformfield_response->s_ezsignformfield_label);
        custom_form_data_ezsignformfield_response->s_ezsignformfield_label = NULL;
    }
    if (custom_form_data_ezsignformfield_response->s_ezsignformfield_value) {
        free(custom_form_data_ezsignformfield_response->s_ezsignformfield_value);
        custom_form_data_ezsignformfield_response->s_ezsignformfield_value = NULL;
    }
    free(custom_form_data_ezsignformfield_response);
}

cJSON *custom_form_data_ezsignformfield_response_convertToJSON(custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_form_data_ezsignformfield_response->s_ezsignformfield_label
    if (!custom_form_data_ezsignformfield_response->s_ezsignformfield_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", custom_form_data_ezsignformfield_response->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }


    // custom_form_data_ezsignformfield_response->s_ezsignformfield_value
    if (!custom_form_data_ezsignformfield_response->s_ezsignformfield_value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldValue", custom_form_data_ezsignformfield_response->s_ezsignformfield_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_parseFromJSON(cJSON *custom_form_data_ezsignformfield_responseJSON){

    custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_local_var = NULL;

    char *s_ezsignformfield_label_local_str = NULL;

    char *s_ezsignformfield_value_local_str = NULL;

    // custom_form_data_ezsignformfield_response->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(custom_form_data_ezsignformfield_responseJSON, "sEzsignformfieldLabel");
    if (cJSON_IsNull(s_ezsignformfield_label)) {
        s_ezsignformfield_label = NULL;
    }
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // custom_form_data_ezsignformfield_response->s_ezsignformfield_value
    cJSON *s_ezsignformfield_value = cJSON_GetObjectItemCaseSensitive(custom_form_data_ezsignformfield_responseJSON, "sEzsignformfieldValue");
    if (cJSON_IsNull(s_ezsignformfield_value)) {
        s_ezsignformfield_value = NULL;
    }
    if (!s_ezsignformfield_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_value))
    {
    goto end; //String
    }


    if (s_ezsignformfield_label && !cJSON_IsNull(s_ezsignformfield_label)) s_ezsignformfield_label_local_str = strdup(s_ezsignformfield_label->valuestring);
    if (s_ezsignformfield_value && !cJSON_IsNull(s_ezsignformfield_value)) s_ezsignformfield_value_local_str = strdup(s_ezsignformfield_value->valuestring);

    custom_form_data_ezsignformfield_response_local_var = custom_form_data_ezsignformfield_response_create_internal (
        s_ezsignformfield_label_local_str,
        s_ezsignformfield_value_local_str
        );

    if (!custom_form_data_ezsignformfield_response_local_var) {
        goto end;
    }

    return custom_form_data_ezsignformfield_response_local_var;
end:
    if (s_ezsignformfield_label_local_str) {
        free(s_ezsignformfield_label_local_str);
        s_ezsignformfield_label_local_str = NULL;
    }
    if (s_ezsignformfield_value_local_str) {
        free(s_ezsignformfield_value_local_str);
        s_ezsignformfield_value_local_str = NULL;
    }
    return NULL;

}
