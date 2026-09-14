#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "externalbroker_get_communication_count_v1_response_m_payload.h"



static externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(externalbroker_get_communication_count_v1_response_m_payload_t));
    if (!externalbroker_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(externalbroker_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(externalbroker_get_communication_count_v1_response_m_payload_t));
    externalbroker_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    externalbroker_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return externalbroker_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    externalbroker_get_communication_count_v1_response_m_payload_t *result = externalbroker_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void externalbroker_get_communication_count_v1_response_m_payload_free(externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload) {
    if(NULL == externalbroker_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(externalbroker_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "externalbroker_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (externalbroker_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(externalbroker_get_communication_count_v1_response_m_payload->i_communication_count);
        externalbroker_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(externalbroker_get_communication_count_v1_response_m_payload);
}

cJSON *externalbroker_get_communication_count_v1_response_m_payload_convertToJSON(externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // externalbroker_get_communication_count_v1_response_m_payload->i_communication_count
    if (!externalbroker_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *externalbroker_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *externalbroker_get_communication_count_v1_response_m_payloadJSON){

    externalbroker_get_communication_count_v1_response_m_payload_t *externalbroker_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for externalbroker_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // externalbroker_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(externalbroker_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    externalbroker_get_communication_count_v1_response_m_payload_local_var = externalbroker_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!externalbroker_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return externalbroker_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
