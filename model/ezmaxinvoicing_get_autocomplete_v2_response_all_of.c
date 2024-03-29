#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicing_get_autocomplete_v2_response_all_of.h"



ezmaxinvoicing_get_autocomplete_v2_response_all_of_t *ezmaxinvoicing_get_autocomplete_v2_response_all_of_create(
    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    ezmaxinvoicing_get_autocomplete_v2_response_all_of_t *ezmaxinvoicing_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(ezmaxinvoicing_get_autocomplete_v2_response_all_of_t));
    if (!ezmaxinvoicing_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    ezmaxinvoicing_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return ezmaxinvoicing_get_autocomplete_v2_response_all_of_local_var;
}


void ezmaxinvoicing_get_autocomplete_v2_response_all_of_free(ezmaxinvoicing_get_autocomplete_v2_response_all_of_t *ezmaxinvoicing_get_autocomplete_v2_response_all_of) {
    if(NULL == ezmaxinvoicing_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicing_get_autocomplete_v2_response_all_of->m_payload) {
        ezmaxinvoicing_get_autocomplete_v2_response_m_payload_free(ezmaxinvoicing_get_autocomplete_v2_response_all_of->m_payload);
        ezmaxinvoicing_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(ezmaxinvoicing_get_autocomplete_v2_response_all_of);
}

cJSON *ezmaxinvoicing_get_autocomplete_v2_response_all_of_convertToJSON(ezmaxinvoicing_get_autocomplete_v2_response_all_of_t *ezmaxinvoicing_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicing_get_autocomplete_v2_response_all_of->m_payload
    if (!ezmaxinvoicing_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezmaxinvoicing_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxinvoicing_get_autocomplete_v2_response_all_of->m_payload);
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

ezmaxinvoicing_get_autocomplete_v2_response_all_of_t *ezmaxinvoicing_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *ezmaxinvoicing_get_autocomplete_v2_response_all_ofJSON){

    ezmaxinvoicing_get_autocomplete_v2_response_all_of_t *ezmaxinvoicing_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for ezmaxinvoicing_get_autocomplete_v2_response_all_of->m_payload
    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezmaxinvoicing_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezmaxinvoicing_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezmaxinvoicing_get_autocomplete_v2_response_all_of_local_var = ezmaxinvoicing_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezmaxinvoicing_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezmaxinvoicing_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
