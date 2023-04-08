#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxproduct_get_autocomplete_v2_response_all_of.h"



ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of_create(
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(ezmaxproduct_get_autocomplete_v2_response_all_of_t));
    if (!ezmaxproduct_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    ezmaxproduct_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return ezmaxproduct_get_autocomplete_v2_response_all_of_local_var;
}


void ezmaxproduct_get_autocomplete_v2_response_all_of_free(ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of) {
    if(NULL == ezmaxproduct_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxproduct_get_autocomplete_v2_response_all_of->m_payload) {
        ezmaxproduct_get_autocomplete_v2_response_m_payload_free(ezmaxproduct_get_autocomplete_v2_response_all_of->m_payload);
        ezmaxproduct_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(ezmaxproduct_get_autocomplete_v2_response_all_of);
}

cJSON *ezmaxproduct_get_autocomplete_v2_response_all_of_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxproduct_get_autocomplete_v2_response_all_of->m_payload
    if (!ezmaxproduct_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezmaxproduct_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_all_of->m_payload);
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

ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *ezmaxproduct_get_autocomplete_v2_response_all_ofJSON){

    ezmaxproduct_get_autocomplete_v2_response_all_of_t *ezmaxproduct_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for ezmaxproduct_get_autocomplete_v2_response_all_of->m_payload
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezmaxproduct_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezmaxproduct_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezmaxproduct_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezmaxproduct_get_autocomplete_v2_response_all_of_local_var = ezmaxproduct_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezmaxproduct_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezmaxproduct_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
