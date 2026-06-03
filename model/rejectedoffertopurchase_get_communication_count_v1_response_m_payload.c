#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rejectedoffertopurchase_get_communication_count_v1_response_m_payload.h"



static rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t *rejectedoffertopurchase_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t *rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t));
    if (!rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t));
    rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t *rejectedoffertopurchase_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t *result = rejectedoffertopurchase_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void rejectedoffertopurchase_get_communication_count_v1_response_m_payload_free(rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t *rejectedoffertopurchase_get_communication_count_v1_response_m_payload) {
    if(NULL == rejectedoffertopurchase_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(rejectedoffertopurchase_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "rejectedoffertopurchase_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (rejectedoffertopurchase_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(rejectedoffertopurchase_get_communication_count_v1_response_m_payload->i_communication_count);
        rejectedoffertopurchase_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(rejectedoffertopurchase_get_communication_count_v1_response_m_payload);
}

cJSON *rejectedoffertopurchase_get_communication_count_v1_response_m_payload_convertToJSON(rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t *rejectedoffertopurchase_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // rejectedoffertopurchase_get_communication_count_v1_response_m_payload->i_communication_count
    if (!rejectedoffertopurchase_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *rejectedoffertopurchase_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t *rejectedoffertopurchase_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *rejectedoffertopurchase_get_communication_count_v1_response_m_payloadJSON){

    rejectedoffertopurchase_get_communication_count_v1_response_m_payload_t *rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for rejectedoffertopurchase_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // rejectedoffertopurchase_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var = rejectedoffertopurchase_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return rejectedoffertopurchase_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
