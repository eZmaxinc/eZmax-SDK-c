#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_get_count_v1_response_all_of.h"



communication_get_count_v1_response_all_of_t *communication_get_count_v1_response_all_of_create(
    communication_get_count_v1_response_m_payload_t *m_payload
    ) {
    communication_get_count_v1_response_all_of_t *communication_get_count_v1_response_all_of_local_var = malloc(sizeof(communication_get_count_v1_response_all_of_t));
    if (!communication_get_count_v1_response_all_of_local_var) {
        return NULL;
    }
    communication_get_count_v1_response_all_of_local_var->m_payload = m_payload;

    return communication_get_count_v1_response_all_of_local_var;
}


void communication_get_count_v1_response_all_of_free(communication_get_count_v1_response_all_of_t *communication_get_count_v1_response_all_of) {
    if(NULL == communication_get_count_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (communication_get_count_v1_response_all_of->m_payload) {
        communication_get_count_v1_response_m_payload_free(communication_get_count_v1_response_all_of->m_payload);
        communication_get_count_v1_response_all_of->m_payload = NULL;
    }
    free(communication_get_count_v1_response_all_of);
}

cJSON *communication_get_count_v1_response_all_of_convertToJSON(communication_get_count_v1_response_all_of_t *communication_get_count_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // communication_get_count_v1_response_all_of->m_payload
    if (!communication_get_count_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = communication_get_count_v1_response_m_payload_convertToJSON(communication_get_count_v1_response_all_of->m_payload);
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

communication_get_count_v1_response_all_of_t *communication_get_count_v1_response_all_of_parseFromJSON(cJSON *communication_get_count_v1_response_all_ofJSON){

    communication_get_count_v1_response_all_of_t *communication_get_count_v1_response_all_of_local_var = NULL;

    // define the local variable for communication_get_count_v1_response_all_of->m_payload
    communication_get_count_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // communication_get_count_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(communication_get_count_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = communication_get_count_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    communication_get_count_v1_response_all_of_local_var = communication_get_count_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return communication_get_count_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        communication_get_count_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
