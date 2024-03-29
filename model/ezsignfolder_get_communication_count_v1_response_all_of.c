#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_communication_count_v1_response_all_of.h"



ezsignfolder_get_communication_count_v1_response_all_of_t *ezsignfolder_get_communication_count_v1_response_all_of_create(
    ezsignfolder_get_communication_count_v1_response_m_payload_t *m_payload
    ) {
    ezsignfolder_get_communication_count_v1_response_all_of_t *ezsignfolder_get_communication_count_v1_response_all_of_local_var = malloc(sizeof(ezsignfolder_get_communication_count_v1_response_all_of_t));
    if (!ezsignfolder_get_communication_count_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsignfolder_get_communication_count_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsignfolder_get_communication_count_v1_response_all_of_local_var;
}


void ezsignfolder_get_communication_count_v1_response_all_of_free(ezsignfolder_get_communication_count_v1_response_all_of_t *ezsignfolder_get_communication_count_v1_response_all_of) {
    if(NULL == ezsignfolder_get_communication_count_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_communication_count_v1_response_all_of->m_payload) {
        ezsignfolder_get_communication_count_v1_response_m_payload_free(ezsignfolder_get_communication_count_v1_response_all_of->m_payload);
        ezsignfolder_get_communication_count_v1_response_all_of->m_payload = NULL;
    }
    free(ezsignfolder_get_communication_count_v1_response_all_of);
}

cJSON *ezsignfolder_get_communication_count_v1_response_all_of_convertToJSON(ezsignfolder_get_communication_count_v1_response_all_of_t *ezsignfolder_get_communication_count_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_communication_count_v1_response_all_of->m_payload
    if (!ezsignfolder_get_communication_count_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignfolder_get_communication_count_v1_response_m_payload_convertToJSON(ezsignfolder_get_communication_count_v1_response_all_of->m_payload);
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

ezsignfolder_get_communication_count_v1_response_all_of_t *ezsignfolder_get_communication_count_v1_response_all_of_parseFromJSON(cJSON *ezsignfolder_get_communication_count_v1_response_all_ofJSON){

    ezsignfolder_get_communication_count_v1_response_all_of_t *ezsignfolder_get_communication_count_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsignfolder_get_communication_count_v1_response_all_of->m_payload
    ezsignfolder_get_communication_count_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignfolder_get_communication_count_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_communication_count_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignfolder_get_communication_count_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignfolder_get_communication_count_v1_response_all_of_local_var = ezsignfolder_get_communication_count_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignfolder_get_communication_count_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignfolder_get_communication_count_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
