#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_get_communication_count_v1_response_m_payload.h"



buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(buyercontract_get_communication_count_v1_response_m_payload_t));
    if (!buyercontract_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    buyercontract_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    return buyercontract_get_communication_count_v1_response_m_payload_local_var;
}


void buyercontract_get_communication_count_v1_response_m_payload_free(buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload) {
    if(NULL == buyercontract_get_communication_count_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(buyercontract_get_communication_count_v1_response_m_payload);
}

cJSON *buyercontract_get_communication_count_v1_response_m_payload_convertToJSON(buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // buyercontract_get_communication_count_v1_response_m_payload->i_communication_count
    if (!buyercontract_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", buyercontract_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *buyercontract_get_communication_count_v1_response_m_payloadJSON){

    buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_local_var = NULL;

    // buyercontract_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(buyercontract_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }


    buyercontract_get_communication_count_v1_response_m_payload_local_var = buyercontract_get_communication_count_v1_response_m_payload_create (
        i_communication_count->valuedouble
        );

    return buyercontract_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
