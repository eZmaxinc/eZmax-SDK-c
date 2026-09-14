#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposittransitcheque_get_communication_count_v1_response_m_payload.h"



static deposittransitcheque_get_communication_count_v1_response_m_payload_t *deposittransitcheque_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    deposittransitcheque_get_communication_count_v1_response_m_payload_t *deposittransitcheque_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(deposittransitcheque_get_communication_count_v1_response_m_payload_t));
    if (!deposittransitcheque_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(deposittransitcheque_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(deposittransitcheque_get_communication_count_v1_response_m_payload_t));
    deposittransitcheque_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    deposittransitcheque_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return deposittransitcheque_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) deposittransitcheque_get_communication_count_v1_response_m_payload_t *deposittransitcheque_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    deposittransitcheque_get_communication_count_v1_response_m_payload_t *result = deposittransitcheque_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void deposittransitcheque_get_communication_count_v1_response_m_payload_free(deposittransitcheque_get_communication_count_v1_response_m_payload_t *deposittransitcheque_get_communication_count_v1_response_m_payload) {
    if(NULL == deposittransitcheque_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(deposittransitcheque_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "deposittransitcheque_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (deposittransitcheque_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(deposittransitcheque_get_communication_count_v1_response_m_payload->i_communication_count);
        deposittransitcheque_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(deposittransitcheque_get_communication_count_v1_response_m_payload);
}

cJSON *deposittransitcheque_get_communication_count_v1_response_m_payload_convertToJSON(deposittransitcheque_get_communication_count_v1_response_m_payload_t *deposittransitcheque_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // deposittransitcheque_get_communication_count_v1_response_m_payload->i_communication_count
    if (!deposittransitcheque_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *deposittransitcheque_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposittransitcheque_get_communication_count_v1_response_m_payload_t *deposittransitcheque_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *deposittransitcheque_get_communication_count_v1_response_m_payloadJSON){

    deposittransitcheque_get_communication_count_v1_response_m_payload_t *deposittransitcheque_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for deposittransitcheque_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // deposittransitcheque_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    deposittransitcheque_get_communication_count_v1_response_m_payload_local_var = deposittransitcheque_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!deposittransitcheque_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return deposittransitcheque_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
