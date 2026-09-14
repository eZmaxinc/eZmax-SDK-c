#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposit_get_communication_count_v1_response_m_payload.h"



static deposit_get_communication_count_v1_response_m_payload_t *deposit_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    deposit_get_communication_count_v1_response_m_payload_t *deposit_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(deposit_get_communication_count_v1_response_m_payload_t));
    if (!deposit_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(deposit_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(deposit_get_communication_count_v1_response_m_payload_t));
    deposit_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    deposit_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return deposit_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) deposit_get_communication_count_v1_response_m_payload_t *deposit_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    deposit_get_communication_count_v1_response_m_payload_t *result = deposit_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void deposit_get_communication_count_v1_response_m_payload_free(deposit_get_communication_count_v1_response_m_payload_t *deposit_get_communication_count_v1_response_m_payload) {
    if(NULL == deposit_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(deposit_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "deposit_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (deposit_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(deposit_get_communication_count_v1_response_m_payload->i_communication_count);
        deposit_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(deposit_get_communication_count_v1_response_m_payload);
}

cJSON *deposit_get_communication_count_v1_response_m_payload_convertToJSON(deposit_get_communication_count_v1_response_m_payload_t *deposit_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // deposit_get_communication_count_v1_response_m_payload->i_communication_count
    if (!deposit_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *deposit_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposit_get_communication_count_v1_response_m_payload_t *deposit_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *deposit_get_communication_count_v1_response_m_payloadJSON){

    deposit_get_communication_count_v1_response_m_payload_t *deposit_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for deposit_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // deposit_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(deposit_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    deposit_get_communication_count_v1_response_m_payload_local_var = deposit_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!deposit_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return deposit_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
