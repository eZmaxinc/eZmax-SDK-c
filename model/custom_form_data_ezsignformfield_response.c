#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_form_data_ezsignformfield_response.h"



custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_create(
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value
    ) {
    custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response_local_var = malloc(sizeof(custom_form_data_ezsignformfield_response_t));
    if (!custom_form_data_ezsignformfield_response_local_var) {
        return NULL;
    }
    custom_form_data_ezsignformfield_response_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    custom_form_data_ezsignformfield_response_local_var->s_ezsignformfield_value = s_ezsignformfield_value;

    return custom_form_data_ezsignformfield_response_local_var;
}


void custom_form_data_ezsignformfield_response_free(custom_form_data_ezsignformfield_response_t *custom_form_data_ezsignformfield_response) {
    if(NULL == custom_form_data_ezsignformfield_response){
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

    // custom_form_data_ezsignformfield_response->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(custom_form_data_ezsignformfield_responseJSON, "sEzsignformfieldLabel");
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // custom_form_data_ezsignformfield_response->s_ezsignformfield_value
    cJSON *s_ezsignformfield_value = cJSON_GetObjectItemCaseSensitive(custom_form_data_ezsignformfield_responseJSON, "sEzsignformfieldValue");
    if (!s_ezsignformfield_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_value))
    {
    goto end; //String
    }


    custom_form_data_ezsignformfield_response_local_var = custom_form_data_ezsignformfield_response_create (
        strdup(s_ezsignformfield_label->valuestring),
        strdup(s_ezsignformfield_value->valuestring)
        );

    return custom_form_data_ezsignformfield_response_local_var;
end:
    return NULL;

}
