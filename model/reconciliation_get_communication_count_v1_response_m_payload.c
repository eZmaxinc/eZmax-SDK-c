#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reconciliation_get_communication_count_v1_response_m_payload.h"



static reconciliation_get_communication_count_v1_response_m_payload_t *reconciliation_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    reconciliation_get_communication_count_v1_response_m_payload_t *reconciliation_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(reconciliation_get_communication_count_v1_response_m_payload_t));
    if (!reconciliation_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(reconciliation_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(reconciliation_get_communication_count_v1_response_m_payload_t));
    reconciliation_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    reconciliation_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return reconciliation_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) reconciliation_get_communication_count_v1_response_m_payload_t *reconciliation_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    reconciliation_get_communication_count_v1_response_m_payload_t *result = reconciliation_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void reconciliation_get_communication_count_v1_response_m_payload_free(reconciliation_get_communication_count_v1_response_m_payload_t *reconciliation_get_communication_count_v1_response_m_payload) {
    if(NULL == reconciliation_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(reconciliation_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "reconciliation_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (reconciliation_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(reconciliation_get_communication_count_v1_response_m_payload->i_communication_count);
        reconciliation_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(reconciliation_get_communication_count_v1_response_m_payload);
}

cJSON *reconciliation_get_communication_count_v1_response_m_payload_convertToJSON(reconciliation_get_communication_count_v1_response_m_payload_t *reconciliation_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // reconciliation_get_communication_count_v1_response_m_payload->i_communication_count
    if (!reconciliation_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *reconciliation_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

reconciliation_get_communication_count_v1_response_m_payload_t *reconciliation_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *reconciliation_get_communication_count_v1_response_m_payloadJSON){

    reconciliation_get_communication_count_v1_response_m_payload_t *reconciliation_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for reconciliation_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // reconciliation_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(reconciliation_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    reconciliation_get_communication_count_v1_response_m_payload_local_var = reconciliation_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!reconciliation_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return reconciliation_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
