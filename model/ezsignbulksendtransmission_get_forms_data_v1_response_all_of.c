#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendtransmission_get_forms_data_v1_response_all_of.h"



ezsignbulksendtransmission_get_forms_data_v1_response_all_of_t *ezsignbulksendtransmission_get_forms_data_v1_response_all_of_create(
    ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t *m_payload
    ) {
    ezsignbulksendtransmission_get_forms_data_v1_response_all_of_t *ezsignbulksendtransmission_get_forms_data_v1_response_all_of_local_var = malloc(sizeof(ezsignbulksendtransmission_get_forms_data_v1_response_all_of_t));
    if (!ezsignbulksendtransmission_get_forms_data_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsignbulksendtransmission_get_forms_data_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsignbulksendtransmission_get_forms_data_v1_response_all_of_local_var;
}


void ezsignbulksendtransmission_get_forms_data_v1_response_all_of_free(ezsignbulksendtransmission_get_forms_data_v1_response_all_of_t *ezsignbulksendtransmission_get_forms_data_v1_response_all_of) {
    if(NULL == ezsignbulksendtransmission_get_forms_data_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendtransmission_get_forms_data_v1_response_all_of->m_payload) {
        ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_free(ezsignbulksendtransmission_get_forms_data_v1_response_all_of->m_payload);
        ezsignbulksendtransmission_get_forms_data_v1_response_all_of->m_payload = NULL;
    }
    free(ezsignbulksendtransmission_get_forms_data_v1_response_all_of);
}

cJSON *ezsignbulksendtransmission_get_forms_data_v1_response_all_of_convertToJSON(ezsignbulksendtransmission_get_forms_data_v1_response_all_of_t *ezsignbulksendtransmission_get_forms_data_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendtransmission_get_forms_data_v1_response_all_of->m_payload
    if (!ezsignbulksendtransmission_get_forms_data_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_convertToJSON(ezsignbulksendtransmission_get_forms_data_v1_response_all_of->m_payload);
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

ezsignbulksendtransmission_get_forms_data_v1_response_all_of_t *ezsignbulksendtransmission_get_forms_data_v1_response_all_of_parseFromJSON(cJSON *ezsignbulksendtransmission_get_forms_data_v1_response_all_ofJSON){

    ezsignbulksendtransmission_get_forms_data_v1_response_all_of_t *ezsignbulksendtransmission_get_forms_data_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsignbulksendtransmission_get_forms_data_v1_response_all_of->m_payload
    ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignbulksendtransmission_get_forms_data_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_get_forms_data_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignbulksendtransmission_get_forms_data_v1_response_all_of_local_var = ezsignbulksendtransmission_get_forms_data_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignbulksendtransmission_get_forms_data_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignbulksendtransmission_get_forms_data_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
