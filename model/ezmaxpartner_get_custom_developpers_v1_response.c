#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxpartner_get_custom_developpers_v1_response.h"



static ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response_create_internal(
    ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *m_payload
    ) {
    ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response_local_var = malloc(sizeof(ezmaxpartner_get_custom_developpers_v1_response_t));
    if (!ezmaxpartner_get_custom_developpers_v1_response_local_var) {
        return NULL;
    }
    memset(ezmaxpartner_get_custom_developpers_v1_response_local_var, 0, sizeof(ezmaxpartner_get_custom_developpers_v1_response_t));
    ezmaxpartner_get_custom_developpers_v1_response_local_var->_library_owned = 1;
    ezmaxpartner_get_custom_developpers_v1_response_local_var->m_payload = m_payload;
    return ezmaxpartner_get_custom_developpers_v1_response_local_var;
}

__attribute__((deprecated)) ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response_create(
    ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *m_payload
    ) {
    ezmaxpartner_get_custom_developpers_v1_response_t *result = ezmaxpartner_get_custom_developpers_v1_response_create_internal (
        m_payload
        );
    if (!result) {
    }
    return result;
}

void ezmaxpartner_get_custom_developpers_v1_response_free(ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response) {
    if(NULL == ezmaxpartner_get_custom_developpers_v1_response){
        return ;
    }
    if(ezmaxpartner_get_custom_developpers_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxpartner_get_custom_developpers_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxpartner_get_custom_developpers_v1_response->m_payload) {
        ezmaxpartner_get_custom_developpers_v1_response_m_payload_free(ezmaxpartner_get_custom_developpers_v1_response->m_payload);
        ezmaxpartner_get_custom_developpers_v1_response->m_payload = NULL;
    }
    free(ezmaxpartner_get_custom_developpers_v1_response);
}

cJSON *ezmaxpartner_get_custom_developpers_v1_response_convertToJSON(ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxpartner_get_custom_developpers_v1_response->m_payload
    if (!ezmaxpartner_get_custom_developpers_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezmaxpartner_get_custom_developpers_v1_response_m_payload_convertToJSON(ezmaxpartner_get_custom_developpers_v1_response->m_payload);
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

ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response_parseFromJSON(cJSON *ezmaxpartner_get_custom_developpers_v1_responseJSON){

    ezmaxpartner_get_custom_developpers_v1_response_t *ezmaxpartner_get_custom_developpers_v1_response_local_var = NULL;

    // define the local variable for ezmaxpartner_get_custom_developpers_v1_response->m_payload
    ezmaxpartner_get_custom_developpers_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezmaxpartner_get_custom_developpers_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_get_custom_developpers_v1_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezmaxpartner_get_custom_developpers_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive



    ezmaxpartner_get_custom_developpers_v1_response_local_var = ezmaxpartner_get_custom_developpers_v1_response_create_internal (
        m_payload_local_nonprim
        );

    if (!ezmaxpartner_get_custom_developpers_v1_response_local_var) {
        goto end;
    }

    return ezmaxpartner_get_custom_developpers_v1_response_local_var;
end:
    if (m_payload_local_nonprim) {
        ezmaxpartner_get_custom_developpers_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
