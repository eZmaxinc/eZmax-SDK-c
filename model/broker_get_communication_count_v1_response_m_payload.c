#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "broker_get_communication_count_v1_response_m_payload.h"



static broker_get_communication_count_v1_response_m_payload_t *broker_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    broker_get_communication_count_v1_response_m_payload_t *broker_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(broker_get_communication_count_v1_response_m_payload_t));
    if (!broker_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(broker_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(broker_get_communication_count_v1_response_m_payload_t));
    broker_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    broker_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return broker_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) broker_get_communication_count_v1_response_m_payload_t *broker_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    broker_get_communication_count_v1_response_m_payload_t *result = broker_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void broker_get_communication_count_v1_response_m_payload_free(broker_get_communication_count_v1_response_m_payload_t *broker_get_communication_count_v1_response_m_payload) {
    if(NULL == broker_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(broker_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "broker_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (broker_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(broker_get_communication_count_v1_response_m_payload->i_communication_count);
        broker_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(broker_get_communication_count_v1_response_m_payload);
}

cJSON *broker_get_communication_count_v1_response_m_payload_convertToJSON(broker_get_communication_count_v1_response_m_payload_t *broker_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // broker_get_communication_count_v1_response_m_payload->i_communication_count
    if (!broker_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *broker_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

broker_get_communication_count_v1_response_m_payload_t *broker_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *broker_get_communication_count_v1_response_m_payloadJSON){

    broker_get_communication_count_v1_response_m_payload_t *broker_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for broker_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // broker_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(broker_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    broker_get_communication_count_v1_response_m_payload_local_var = broker_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!broker_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return broker_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
