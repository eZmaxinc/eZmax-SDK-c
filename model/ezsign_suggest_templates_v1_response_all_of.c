#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsign_suggest_templates_v1_response_all_of.h"



ezsign_suggest_templates_v1_response_all_of_t *ezsign_suggest_templates_v1_response_all_of_create(
    ezsign_suggest_templates_v1_response_m_payload_t *m_payload
    ) {
    ezsign_suggest_templates_v1_response_all_of_t *ezsign_suggest_templates_v1_response_all_of_local_var = malloc(sizeof(ezsign_suggest_templates_v1_response_all_of_t));
    if (!ezsign_suggest_templates_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsign_suggest_templates_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsign_suggest_templates_v1_response_all_of_local_var;
}


void ezsign_suggest_templates_v1_response_all_of_free(ezsign_suggest_templates_v1_response_all_of_t *ezsign_suggest_templates_v1_response_all_of) {
    if(NULL == ezsign_suggest_templates_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsign_suggest_templates_v1_response_all_of->m_payload) {
        ezsign_suggest_templates_v1_response_m_payload_free(ezsign_suggest_templates_v1_response_all_of->m_payload);
        ezsign_suggest_templates_v1_response_all_of->m_payload = NULL;
    }
    free(ezsign_suggest_templates_v1_response_all_of);
}

cJSON *ezsign_suggest_templates_v1_response_all_of_convertToJSON(ezsign_suggest_templates_v1_response_all_of_t *ezsign_suggest_templates_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsign_suggest_templates_v1_response_all_of->m_payload
    if (!ezsign_suggest_templates_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsign_suggest_templates_v1_response_m_payload_convertToJSON(ezsign_suggest_templates_v1_response_all_of->m_payload);
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

ezsign_suggest_templates_v1_response_all_of_t *ezsign_suggest_templates_v1_response_all_of_parseFromJSON(cJSON *ezsign_suggest_templates_v1_response_all_ofJSON){

    ezsign_suggest_templates_v1_response_all_of_t *ezsign_suggest_templates_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsign_suggest_templates_v1_response_all_of->m_payload
    ezsign_suggest_templates_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsign_suggest_templates_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsign_suggest_templates_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsign_suggest_templates_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsign_suggest_templates_v1_response_all_of_local_var = ezsign_suggest_templates_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsign_suggest_templates_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsign_suggest_templates_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
