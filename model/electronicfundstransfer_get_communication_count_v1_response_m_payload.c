#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "electronicfundstransfer_get_communication_count_v1_response_m_payload.h"



electronicfundstransfer_get_communication_count_v1_response_m_payload_t *electronicfundstransfer_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    electronicfundstransfer_get_communication_count_v1_response_m_payload_t *electronicfundstransfer_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(electronicfundstransfer_get_communication_count_v1_response_m_payload_t));
    if (!electronicfundstransfer_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    electronicfundstransfer_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    return electronicfundstransfer_get_communication_count_v1_response_m_payload_local_var;
}


void electronicfundstransfer_get_communication_count_v1_response_m_payload_free(electronicfundstransfer_get_communication_count_v1_response_m_payload_t *electronicfundstransfer_get_communication_count_v1_response_m_payload) {
    if(NULL == electronicfundstransfer_get_communication_count_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(electronicfundstransfer_get_communication_count_v1_response_m_payload);
}

cJSON *electronicfundstransfer_get_communication_count_v1_response_m_payload_convertToJSON(electronicfundstransfer_get_communication_count_v1_response_m_payload_t *electronicfundstransfer_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // electronicfundstransfer_get_communication_count_v1_response_m_payload->i_communication_count
    if (!electronicfundstransfer_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", electronicfundstransfer_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

electronicfundstransfer_get_communication_count_v1_response_m_payload_t *electronicfundstransfer_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *electronicfundstransfer_get_communication_count_v1_response_m_payloadJSON){

    electronicfundstransfer_get_communication_count_v1_response_m_payload_t *electronicfundstransfer_get_communication_count_v1_response_m_payload_local_var = NULL;

    // electronicfundstransfer_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }


    electronicfundstransfer_get_communication_count_v1_response_m_payload_local_var = electronicfundstransfer_get_communication_count_v1_response_m_payload_create (
        i_communication_count->valuedouble
        );

    return electronicfundstransfer_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
