#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sessionhistory_get_list_v1_response_all_of.h"



sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of_create(
    sessionhistory_get_list_v1_response_m_payload_t *m_payload
    ) {
    sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of_local_var = malloc(sizeof(sessionhistory_get_list_v1_response_all_of_t));
    if (!sessionhistory_get_list_v1_response_all_of_local_var) {
        return NULL;
    }
    sessionhistory_get_list_v1_response_all_of_local_var->m_payload = m_payload;

    return sessionhistory_get_list_v1_response_all_of_local_var;
}


void sessionhistory_get_list_v1_response_all_of_free(sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of) {
    if(NULL == sessionhistory_get_list_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (sessionhistory_get_list_v1_response_all_of->m_payload) {
        sessionhistory_get_list_v1_response_m_payload_free(sessionhistory_get_list_v1_response_all_of->m_payload);
        sessionhistory_get_list_v1_response_all_of->m_payload = NULL;
    }
    free(sessionhistory_get_list_v1_response_all_of);
}

cJSON *sessionhistory_get_list_v1_response_all_of_convertToJSON(sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // sessionhistory_get_list_v1_response_all_of->m_payload
    if (!sessionhistory_get_list_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = sessionhistory_get_list_v1_response_m_payload_convertToJSON(sessionhistory_get_list_v1_response_all_of->m_payload);
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

sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of_parseFromJSON(cJSON *sessionhistory_get_list_v1_response_all_ofJSON){

    sessionhistory_get_list_v1_response_all_of_t *sessionhistory_get_list_v1_response_all_of_local_var = NULL;

    // define the local variable for sessionhistory_get_list_v1_response_all_of->m_payload
    sessionhistory_get_list_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // sessionhistory_get_list_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(sessionhistory_get_list_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = sessionhistory_get_list_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    sessionhistory_get_list_v1_response_all_of_local_var = sessionhistory_get_list_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return sessionhistory_get_list_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        sessionhistory_get_list_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
