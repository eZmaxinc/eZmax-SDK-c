#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bankaccount_get_communication_count_v1_response_m_payload.h"



static bankaccount_get_communication_count_v1_response_m_payload_t *bankaccount_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    bankaccount_get_communication_count_v1_response_m_payload_t *bankaccount_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(bankaccount_get_communication_count_v1_response_m_payload_t));
    if (!bankaccount_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(bankaccount_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(bankaccount_get_communication_count_v1_response_m_payload_t));
    bankaccount_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    bankaccount_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return bankaccount_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) bankaccount_get_communication_count_v1_response_m_payload_t *bankaccount_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    bankaccount_get_communication_count_v1_response_m_payload_t *result = bankaccount_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void bankaccount_get_communication_count_v1_response_m_payload_free(bankaccount_get_communication_count_v1_response_m_payload_t *bankaccount_get_communication_count_v1_response_m_payload) {
    if(NULL == bankaccount_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(bankaccount_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "bankaccount_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (bankaccount_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(bankaccount_get_communication_count_v1_response_m_payload->i_communication_count);
        bankaccount_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(bankaccount_get_communication_count_v1_response_m_payload);
}

cJSON *bankaccount_get_communication_count_v1_response_m_payload_convertToJSON(bankaccount_get_communication_count_v1_response_m_payload_t *bankaccount_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // bankaccount_get_communication_count_v1_response_m_payload->i_communication_count
    if (!bankaccount_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *bankaccount_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

bankaccount_get_communication_count_v1_response_m_payload_t *bankaccount_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *bankaccount_get_communication_count_v1_response_m_payloadJSON){

    bankaccount_get_communication_count_v1_response_m_payload_t *bankaccount_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for bankaccount_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // bankaccount_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(bankaccount_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    bankaccount_get_communication_count_v1_response_m_payload_local_var = bankaccount_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!bankaccount_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return bankaccount_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
