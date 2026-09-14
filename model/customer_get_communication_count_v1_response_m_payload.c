#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_get_communication_count_v1_response_m_payload.h"



static customer_get_communication_count_v1_response_m_payload_t *customer_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    customer_get_communication_count_v1_response_m_payload_t *customer_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(customer_get_communication_count_v1_response_m_payload_t));
    if (!customer_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(customer_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(customer_get_communication_count_v1_response_m_payload_t));
    customer_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    customer_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return customer_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) customer_get_communication_count_v1_response_m_payload_t *customer_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    customer_get_communication_count_v1_response_m_payload_t *result = customer_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void customer_get_communication_count_v1_response_m_payload_free(customer_get_communication_count_v1_response_m_payload_t *customer_get_communication_count_v1_response_m_payload) {
    if(NULL == customer_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(customer_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(customer_get_communication_count_v1_response_m_payload->i_communication_count);
        customer_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(customer_get_communication_count_v1_response_m_payload);
}

cJSON *customer_get_communication_count_v1_response_m_payload_convertToJSON(customer_get_communication_count_v1_response_m_payload_t *customer_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // customer_get_communication_count_v1_response_m_payload->i_communication_count
    if (!customer_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *customer_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_get_communication_count_v1_response_m_payload_t *customer_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *customer_get_communication_count_v1_response_m_payloadJSON){

    customer_get_communication_count_v1_response_m_payload_t *customer_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for customer_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // customer_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(customer_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    customer_get_communication_count_v1_response_m_payload_local_var = customer_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!customer_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return customer_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
