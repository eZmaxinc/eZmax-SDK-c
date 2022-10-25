#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntsarequirement_get_autocomplete_v2_response_all_of.h"



ezsigntsarequirement_get_autocomplete_v2_response_all_of_t *ezsigntsarequirement_get_autocomplete_v2_response_all_of_create(
    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    ezsigntsarequirement_get_autocomplete_v2_response_all_of_t *ezsigntsarequirement_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(ezsigntsarequirement_get_autocomplete_v2_response_all_of_t));
    if (!ezsigntsarequirement_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    ezsigntsarequirement_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return ezsigntsarequirement_get_autocomplete_v2_response_all_of_local_var;
}


void ezsigntsarequirement_get_autocomplete_v2_response_all_of_free(ezsigntsarequirement_get_autocomplete_v2_response_all_of_t *ezsigntsarequirement_get_autocomplete_v2_response_all_of) {
    if(NULL == ezsigntsarequirement_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntsarequirement_get_autocomplete_v2_response_all_of->m_payload) {
        ezsigntsarequirement_get_autocomplete_v2_response_m_payload_free(ezsigntsarequirement_get_autocomplete_v2_response_all_of->m_payload);
        ezsigntsarequirement_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(ezsigntsarequirement_get_autocomplete_v2_response_all_of);
}

cJSON *ezsigntsarequirement_get_autocomplete_v2_response_all_of_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_all_of_t *ezsigntsarequirement_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntsarequirement_get_autocomplete_v2_response_all_of->m_payload
    if (!ezsigntsarequirement_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntsarequirement_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_all_of->m_payload);
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

ezsigntsarequirement_get_autocomplete_v2_response_all_of_t *ezsigntsarequirement_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *ezsigntsarequirement_get_autocomplete_v2_response_all_ofJSON){

    ezsigntsarequirement_get_autocomplete_v2_response_all_of_t *ezsigntsarequirement_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for ezsigntsarequirement_get_autocomplete_v2_response_all_of->m_payload
    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntsarequirement_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntsarequirement_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntsarequirement_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntsarequirement_get_autocomplete_v2_response_all_of_local_var = ezsigntsarequirement_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntsarequirement_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntsarequirement_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
