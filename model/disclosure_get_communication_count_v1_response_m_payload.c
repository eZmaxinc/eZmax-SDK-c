#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "disclosure_get_communication_count_v1_response_m_payload.h"



static disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(disclosure_get_communication_count_v1_response_m_payload_t));
    if (!disclosure_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(disclosure_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(disclosure_get_communication_count_v1_response_m_payload_t));
    disclosure_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    disclosure_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return disclosure_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    disclosure_get_communication_count_v1_response_m_payload_t *result = disclosure_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void disclosure_get_communication_count_v1_response_m_payload_free(disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload) {
    if(NULL == disclosure_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(disclosure_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "disclosure_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (disclosure_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(disclosure_get_communication_count_v1_response_m_payload->i_communication_count);
        disclosure_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(disclosure_get_communication_count_v1_response_m_payload);
}

cJSON *disclosure_get_communication_count_v1_response_m_payload_convertToJSON(disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // disclosure_get_communication_count_v1_response_m_payload->i_communication_count
    if (!disclosure_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *disclosure_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *disclosure_get_communication_count_v1_response_m_payloadJSON){

    disclosure_get_communication_count_v1_response_m_payload_t *disclosure_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for disclosure_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // disclosure_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(disclosure_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    disclosure_get_communication_count_v1_response_m_payload_local_var = disclosure_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!disclosure_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return disclosure_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
