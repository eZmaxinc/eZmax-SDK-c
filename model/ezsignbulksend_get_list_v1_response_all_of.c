#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_get_list_v1_response_all_of.h"



ezsignbulksend_get_list_v1_response_all_of_t *ezsignbulksend_get_list_v1_response_all_of_create(
    ezsignbulksend_get_list_v1_response_m_payload_t *m_payload
    ) {
    ezsignbulksend_get_list_v1_response_all_of_t *ezsignbulksend_get_list_v1_response_all_of_local_var = malloc(sizeof(ezsignbulksend_get_list_v1_response_all_of_t));
    if (!ezsignbulksend_get_list_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsignbulksend_get_list_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsignbulksend_get_list_v1_response_all_of_local_var;
}


void ezsignbulksend_get_list_v1_response_all_of_free(ezsignbulksend_get_list_v1_response_all_of_t *ezsignbulksend_get_list_v1_response_all_of) {
    if(NULL == ezsignbulksend_get_list_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_get_list_v1_response_all_of->m_payload) {
        ezsignbulksend_get_list_v1_response_m_payload_free(ezsignbulksend_get_list_v1_response_all_of->m_payload);
        ezsignbulksend_get_list_v1_response_all_of->m_payload = NULL;
    }
    free(ezsignbulksend_get_list_v1_response_all_of);
}

cJSON *ezsignbulksend_get_list_v1_response_all_of_convertToJSON(ezsignbulksend_get_list_v1_response_all_of_t *ezsignbulksend_get_list_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_get_list_v1_response_all_of->m_payload
    if (!ezsignbulksend_get_list_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignbulksend_get_list_v1_response_m_payload_convertToJSON(ezsignbulksend_get_list_v1_response_all_of->m_payload);
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

ezsignbulksend_get_list_v1_response_all_of_t *ezsignbulksend_get_list_v1_response_all_of_parseFromJSON(cJSON *ezsignbulksend_get_list_v1_response_all_ofJSON){

    ezsignbulksend_get_list_v1_response_all_of_t *ezsignbulksend_get_list_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsignbulksend_get_list_v1_response_all_of->m_payload
    ezsignbulksend_get_list_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignbulksend_get_list_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_get_list_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignbulksend_get_list_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignbulksend_get_list_v1_response_all_of_local_var = ezsignbulksend_get_list_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignbulksend_get_list_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignbulksend_get_list_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
