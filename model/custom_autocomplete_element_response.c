#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_autocomplete_element_response.h"



custom_autocomplete_element_response_t *custom_autocomplete_element_response_create(
    char *s_category,
    char *s_label,
    one_ofintegerstring_t *m_value
    ) {
    custom_autocomplete_element_response_t *custom_autocomplete_element_response_local_var = malloc(sizeof(custom_autocomplete_element_response_t));
    if (!custom_autocomplete_element_response_local_var) {
        return NULL;
    }
    custom_autocomplete_element_response_local_var->s_category = s_category;
    custom_autocomplete_element_response_local_var->s_label = s_label;
    custom_autocomplete_element_response_local_var->m_value = m_value;

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
    if (custom_autocomplete_element_response->m_value) {
        one_ofintegerstring_free(custom_autocomplete_element_response->m_value);
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


    // custom_autocomplete_element_response->m_value
    if (!custom_autocomplete_element_response->m_value) {
        goto fail;
    }
    
    cJSON *m_value_local_JSON = one_ofintegerstring_convertToJSON(custom_autocomplete_element_response->m_value);
    if(m_value_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mValue", m_value_local_JSON);
    if(item->child == NULL) {
    goto fail;
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

    // custom_autocomplete_element_response->m_value
    cJSON *m_value = cJSON_GetObjectItemCaseSensitive(custom_autocomplete_element_responseJSON, "mValue");
    if (!m_value) {
        goto end;
    }

    one_ofintegerstring_t *m_value_local_nonprim = NULL;
    
    m_value_local_nonprim = one_ofintegerstring_parseFromJSON(m_value); //nonprimitive


    custom_autocomplete_element_response_local_var = custom_autocomplete_element_response_create (
        strdup(s_category->valuestring),
        strdup(s_label->valuestring),
        m_value_local_nonprim
        );

    return custom_autocomplete_element_response_local_var;
end:
    if (m_value_local_nonprim) {
        one_ofintegerstring_free(m_value_local_nonprim);
        m_value_local_nonprim = NULL;
    }
    return NULL;

}