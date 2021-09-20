#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_get_current_v1_response_all_of.h"



activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of_create(
    activesession_get_current_v1_response_m_payload_t *m_payload
    ) {
    activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of_local_var = malloc(sizeof(activesession_get_current_v1_response_all_of_t));
    if (!activesession_get_current_v1_response_all_of_local_var) {
        return NULL;
    }
    activesession_get_current_v1_response_all_of_local_var->m_payload = m_payload;

    return activesession_get_current_v1_response_all_of_local_var;
}


void activesession_get_current_v1_response_all_of_free(activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of) {
    if(NULL == activesession_get_current_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_get_current_v1_response_all_of->m_payload) {
        activesession_get_current_v1_response_m_payload_free(activesession_get_current_v1_response_all_of->m_payload);
        activesession_get_current_v1_response_all_of->m_payload = NULL;
    }
    free(activesession_get_current_v1_response_all_of);
}

cJSON *activesession_get_current_v1_response_all_of_convertToJSON(activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // activesession_get_current_v1_response_all_of->m_payload
    if (!activesession_get_current_v1_response_all_of->m_payload) {
        goto fail;
    }
    
    cJSON *m_payload_local_JSON = activesession_get_current_v1_response_m_payload_convertToJSON(activesession_get_current_v1_response_all_of->m_payload);
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

activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of_parseFromJSON(cJSON *activesession_get_current_v1_response_all_ofJSON){

    activesession_get_current_v1_response_all_of_t *activesession_get_current_v1_response_all_of_local_var = NULL;

    // activesession_get_current_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    activesession_get_current_v1_response_m_payload_t *m_payload_local_nonprim = NULL;
    
    m_payload_local_nonprim = activesession_get_current_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    activesession_get_current_v1_response_all_of_local_var = activesession_get_current_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return activesession_get_current_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        activesession_get_current_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
