#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_get_communication_count_v1_response_m_payload.h"



static buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(buyercontract_get_communication_count_v1_response_m_payload_t));
    if (!buyercontract_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(buyercontract_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(buyercontract_get_communication_count_v1_response_m_payload_t));
    buyercontract_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    buyercontract_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return buyercontract_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    buyercontract_get_communication_count_v1_response_m_payload_t *result = buyercontract_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
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
    if (buyercontract_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(buyercontract_get_communication_count_v1_response_m_payload->i_communication_count);
        buyercontract_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(buyercontract_get_communication_count_v1_response_m_payload);
}

cJSON *buyercontract_get_communication_count_v1_response_m_payload_convertToJSON(buyercontract_get_communication_count_v1_response_m_payload_t *buyercontract_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // buyercontract_get_communication_count_v1_response_m_payload->i_communication_count
    if (!buyercontract_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *buyercontract_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
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

    // define the local variable for buyercontract_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

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
    i_communication_count_local_var = malloc(sizeof(int));
    if(!i_communication_count_local_var)
    {
        goto end;
    }
    *i_communication_count_local_var = i_communication_count->valuedouble;



    buyercontract_get_communication_count_v1_response_m_payload_local_var = buyercontract_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!buyercontract_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return buyercontract_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
