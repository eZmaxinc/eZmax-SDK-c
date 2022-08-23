#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_autocomplete_element_response.h"



custom_autocomplete_element_response_t *custom_autocomplete_element_response_create(
    char *s_category,
    char *s_label,
    char *s_value,
    char *m_value,
    int b_active
    ) {
    custom_autocomplete_element_response_t *custom_autocomplete_element_response_local_var = malloc(sizeof(custom_autocomplete_element_response_t));
    if (!custom_autocomplete_element_response_local_var) {
        return NULL;
    }
    custom_autocomplete_element_response_local_var->s_category = s_category;
    custom_autocomplete_element_response_local_var->s_label = s_label;
    custom_autocomplete_element_response_local_var->s_value = s_value;
    custom_autocomplete_element_response_local_var->m_value = m_value;
    custom_autocomplete_element_response_local_var->b_active = b_active;

    return custom_autocomplete_element_response_local_var;
}


void custom_autocomplete_element_response_free(custom_autocomplete_element_response_t *custom_autocomplete_element_response) {
    if(NULL == custom_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_autocomplete_element_response->s_category) {
        free(custom_autocomplete_element_response->s_category);
        custom_autocomplete_element_response->s_category = NULL;
    }
    if (custom_autocomplete_element_response->s_label) {
        free(custom_autocomplete_element_response->s_label);
        custom_autocomplete_element_response->s_label = NULL;
    }
    if (custom_autocomplete_element_response->s_value) {
        free(custom_autocomplete_element_response->s_value);
        custom_autocomplete_element_response->s_value = NULL;
    }
    if (custom_autocomplete_element_response->m_value) {
        free(custom_autocomplete_element_response->m_value);
        custom_autocomplete_element_response->m_value = NULL;
    }
    free(custom_autocomplete_element_response);
}

cJSON *custom_autocomplete_element_response_convertToJSON(custom_autocomplete_element_response_t *custom_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_autocomplete_element_response->s_category
    if (!custom_autocomplete_element_response->s_category) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCategory", custom_autocomplete_element_response->s_category) == NULL) {
    goto fail; //String
    }


    // custom_autocomplete_element_response->s_label
    if (!custom_autocomplete_element_response->s_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLabel", custom_autocomplete_element_response->s_label) == NULL) {
    goto fail; //String
    }


    // custom_autocomplete_element_response->s_value
    if (!custom_autocomplete_element_response->s_value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sValue", custom_autocomplete_element_response->s_value) == NULL) {
    goto fail; //String
    }


    // custom_autocomplete_element_response->m_value
    if(custom_autocomplete_element_response->m_value) {
    if(cJSON_AddStringToObject(item, "mValue", custom_autocomplete_element_response->m_value) == NULL) {
    goto fail; //String
    }
    }


    // custom_autocomplete_element_response->b_active
    if (!custom_autocomplete_element_response->b_active) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bActive", custom_autocomplete_element_response->b_active) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_autocomplete_element_response_t *custom_autocomplete_element_response_parseFromJSON(cJSON *custom_autocomplete_element_responseJSON){

    custom_autocomplete_element_response_t *custom_autocomplete_element_response_local_var = NULL;

    // custom_autocomplete_element_response->s_category
    cJSON *s_category = cJSON_GetObjectItemCaseSensitive(custom_autocomplete_element_responseJSON, "sCategory");
    if (!s_category) {
        goto end;
    }

    
    if(!cJSON_IsString(s_category))
    {
    goto end; //String
    }

    // custom_autocomplete_element_response->s_label
    cJSON *s_label = cJSON_GetObjectItemCaseSensitive(custom_autocomplete_element_responseJSON, "sLabel");
    if (!s_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_label))
    {
    goto end; //String
    }

    // custom_autocomplete_element_response->s_value
    cJSON *s_value = cJSON_GetObjectItemCaseSensitive(custom_autocomplete_element_responseJSON, "sValue");
    if (!s_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_value))
    {
    goto end; //String
    }

    // custom_autocomplete_element_response->m_value
    cJSON *m_value = cJSON_GetObjectItemCaseSensitive(custom_autocomplete_element_responseJSON, "mValue");
    if (m_value) { 
    if(!cJSON_IsString(m_value))
    {
    goto end; //String
    }
    }

    // custom_autocomplete_element_response->b_active
    cJSON *b_active = cJSON_GetObjectItemCaseSensitive(custom_autocomplete_element_responseJSON, "bActive");
    if (!b_active) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_active))
    {
    goto end; //Bool
    }


    custom_autocomplete_element_response_local_var = custom_autocomplete_element_response_create (
        strdup(s_category->valuestring),
        strdup(s_label->valuestring),
        strdup(s_value->valuestring),
        m_value ? strdup(m_value->valuestring) : NULL,
        b_active->valueint
        );

    return custom_autocomplete_element_response_local_var;
end:
    return NULL;

}
