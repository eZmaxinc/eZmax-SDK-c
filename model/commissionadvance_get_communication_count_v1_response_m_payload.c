#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "commissionadvance_get_communication_count_v1_response_m_payload.h"



static commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(commissionadvance_get_communication_count_v1_response_m_payload_t));
    if (!commissionadvance_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(commissionadvance_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(commissionadvance_get_communication_count_v1_response_m_payload_t));
    commissionadvance_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    commissionadvance_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return commissionadvance_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    commissionadvance_get_communication_count_v1_response_m_payload_t *result = commissionadvance_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void commissionadvance_get_communication_count_v1_response_m_payload_free(commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload) {
    if(NULL == commissionadvance_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(commissionadvance_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "commissionadvance_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (commissionadvance_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(commissionadvance_get_communication_count_v1_response_m_payload->i_communication_count);
        commissionadvance_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(commissionadvance_get_communication_count_v1_response_m_payload);
}

cJSON *commissionadvance_get_communication_count_v1_response_m_payload_convertToJSON(commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // commissionadvance_get_communication_count_v1_response_m_payload->i_communication_count
    if (!commissionadvance_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *commissionadvance_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *commissionadvance_get_communication_count_v1_response_m_payloadJSON){

    commissionadvance_get_communication_count_v1_response_m_payload_t *commissionadvance_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for commissionadvance_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // commissionadvance_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(commissionadvance_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    commissionadvance_get_communication_count_v1_response_m_payload_local_var = commissionadvance_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!commissionadvance_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return commissionadvance_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
