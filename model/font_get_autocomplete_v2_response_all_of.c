#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "font_get_autocomplete_v2_response_all_of.h"



font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of_create(
    font_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(font_get_autocomplete_v2_response_all_of_t));
    if (!font_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    font_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return font_get_autocomplete_v2_response_all_of_local_var;
}


void font_get_autocomplete_v2_response_all_of_free(font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of) {
    if(NULL == font_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (font_get_autocomplete_v2_response_all_of->m_payload) {
        font_get_autocomplete_v2_response_m_payload_free(font_get_autocomplete_v2_response_all_of->m_payload);
        font_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(font_get_autocomplete_v2_response_all_of);
}

cJSON *font_get_autocomplete_v2_response_all_of_convertToJSON(font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // font_get_autocomplete_v2_response_all_of->m_payload
    if (!font_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = font_get_autocomplete_v2_response_m_payload_convertToJSON(font_get_autocomplete_v2_response_all_of->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
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

font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *font_get_autocomplete_v2_response_all_ofJSON){

    font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for font_get_autocomplete_v2_response_all_of->m_payload
    font_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // font_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(font_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = font_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    font_get_autocomplete_v2_response_all_of_local_var = font_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return font_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        font_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
