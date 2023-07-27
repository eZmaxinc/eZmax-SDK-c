#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "phonetype_get_autocomplete_v2_response_all_of.h"



phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of_create(
    phonetype_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(phonetype_get_autocomplete_v2_response_all_of_t));
    if (!phonetype_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    phonetype_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return phonetype_get_autocomplete_v2_response_all_of_local_var;
}


void phonetype_get_autocomplete_v2_response_all_of_free(phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of) {
    if(NULL == phonetype_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (phonetype_get_autocomplete_v2_response_all_of->m_payload) {
        phonetype_get_autocomplete_v2_response_m_payload_free(phonetype_get_autocomplete_v2_response_all_of->m_payload);
        phonetype_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(phonetype_get_autocomplete_v2_response_all_of);
}

cJSON *phonetype_get_autocomplete_v2_response_all_of_convertToJSON(phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // phonetype_get_autocomplete_v2_response_all_of->m_payload
    if (!phonetype_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = phonetype_get_autocomplete_v2_response_m_payload_convertToJSON(phonetype_get_autocomplete_v2_response_all_of->m_payload);
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

phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *phonetype_get_autocomplete_v2_response_all_ofJSON){

    phonetype_get_autocomplete_v2_response_all_of_t *phonetype_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for phonetype_get_autocomplete_v2_response_all_of->m_payload
    phonetype_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // phonetype_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(phonetype_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = phonetype_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    phonetype_get_autocomplete_v2_response_all_of_local_var = phonetype_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return phonetype_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        phonetype_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
