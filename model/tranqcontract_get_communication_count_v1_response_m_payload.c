#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "tranqcontract_get_communication_count_v1_response_m_payload.h"



static tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(tranqcontract_get_communication_count_v1_response_m_payload_t));
    if (!tranqcontract_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(tranqcontract_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(tranqcontract_get_communication_count_v1_response_m_payload_t));
    tranqcontract_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    tranqcontract_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return tranqcontract_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    tranqcontract_get_communication_count_v1_response_m_payload_t *result = tranqcontract_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void tranqcontract_get_communication_count_v1_response_m_payload_free(tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload) {
    if(NULL == tranqcontract_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(tranqcontract_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "tranqcontract_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (tranqcontract_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(tranqcontract_get_communication_count_v1_response_m_payload->i_communication_count);
        tranqcontract_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(tranqcontract_get_communication_count_v1_response_m_payload);
}

cJSON *tranqcontract_get_communication_count_v1_response_m_payload_convertToJSON(tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // tranqcontract_get_communication_count_v1_response_m_payload->i_communication_count
    if (!tranqcontract_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *tranqcontract_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *tranqcontract_get_communication_count_v1_response_m_payloadJSON){

    tranqcontract_get_communication_count_v1_response_m_payload_t *tranqcontract_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for tranqcontract_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // tranqcontract_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(tranqcontract_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    tranqcontract_get_communication_count_v1_response_m_payload_local_var = tranqcontract_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!tranqcontract_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return tranqcontract_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
