#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentpreparation_get_communication_count_v1_response_m_payload.h"



static paymentpreparation_get_communication_count_v1_response_m_payload_t *paymentpreparation_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    paymentpreparation_get_communication_count_v1_response_m_payload_t *paymentpreparation_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(paymentpreparation_get_communication_count_v1_response_m_payload_t));
    if (!paymentpreparation_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(paymentpreparation_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(paymentpreparation_get_communication_count_v1_response_m_payload_t));
    paymentpreparation_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    paymentpreparation_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return paymentpreparation_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) paymentpreparation_get_communication_count_v1_response_m_payload_t *paymentpreparation_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    paymentpreparation_get_communication_count_v1_response_m_payload_t *result = paymentpreparation_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void paymentpreparation_get_communication_count_v1_response_m_payload_free(paymentpreparation_get_communication_count_v1_response_m_payload_t *paymentpreparation_get_communication_count_v1_response_m_payload) {
    if(NULL == paymentpreparation_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(paymentpreparation_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentpreparation_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentpreparation_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(paymentpreparation_get_communication_count_v1_response_m_payload->i_communication_count);
        paymentpreparation_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(paymentpreparation_get_communication_count_v1_response_m_payload);
}

cJSON *paymentpreparation_get_communication_count_v1_response_m_payload_convertToJSON(paymentpreparation_get_communication_count_v1_response_m_payload_t *paymentpreparation_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentpreparation_get_communication_count_v1_response_m_payload->i_communication_count
    if (!paymentpreparation_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *paymentpreparation_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentpreparation_get_communication_count_v1_response_m_payload_t *paymentpreparation_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *paymentpreparation_get_communication_count_v1_response_m_payloadJSON){

    paymentpreparation_get_communication_count_v1_response_m_payload_t *paymentpreparation_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for paymentpreparation_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // paymentpreparation_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(paymentpreparation_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    paymentpreparation_get_communication_count_v1_response_m_payload_local_var = paymentpreparation_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!paymentpreparation_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return paymentpreparation_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
