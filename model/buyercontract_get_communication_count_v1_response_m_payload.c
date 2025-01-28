#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_get_communication_count_v1_response_m_payload.h"



static buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_create_internal(
    int i_communication_count
    ) {
    buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(buyercontract_get_communication_count_v1_response_m_payload_t));
    if (!buyercontract_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    buyercontract_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    buyercontract_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    return buyercontract_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    return buyercontract_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count
        );
}

void buyercontract_get_communication_count_v1_response_m_payload_free(buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload) {
    if(NULL == buyercontract_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(buyercontract_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buyercontract_get_communication_count_v1_response_m_payload_free");
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
    if (cJSON_IsNull(i_communication_count)) {
        i_communication_count = NULL;
    }
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }


    buyercontract_get_communication_count_v1_response_m_payload_local_var = buyercontract_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count->valuedouble
        );

    return buyercontract_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
