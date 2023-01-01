#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "communication_get_count_v1_response_m_payload.h"



communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload_local_var = malloc(sizeof(communication_get_count_v1_response_m_payload_t));
    if (!communication_get_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    communication_get_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    return communication_get_count_v1_response_m_payload_local_var;
}


void communication_get_count_v1_response_m_payload_free(communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload) {
    if(NULL == communication_get_count_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(communication_get_count_v1_response_m_payload);
}

cJSON *communication_get_count_v1_response_m_payload_convertToJSON(communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // communication_get_count_v1_response_m_payload->i_communication_count
    if (!communication_get_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", communication_get_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload_parseFromJSON(cJSON *communication_get_count_v1_response_m_payloadJSON){

    communication_get_count_v1_response_m_payload_t *communication_get_count_v1_response_m_payload_local_var = NULL;

    // communication_get_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(communication_get_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }


    communication_get_count_v1_response_m_payload_local_var = communication_get_count_v1_response_m_payload_create (
        i_communication_count->valuedouble
        );

    return communication_get_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
