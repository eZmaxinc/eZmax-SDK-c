#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_get_communication_count_v1_response_m_payload.h"



static inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_create_internal(
    int i_communication_count
    ) {
    inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(inscription_get_communication_count_v1_response_m_payload_t));
    if (!inscription_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscription_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    inscription_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    return inscription_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    return inscription_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count
        );
}

void inscription_get_communication_count_v1_response_m_payload_free(inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload) {
    if(NULL == inscription_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(inscription_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    free(inscription_get_communication_count_v1_response_m_payload);
}

cJSON *inscription_get_communication_count_v1_response_m_payload_convertToJSON(inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscription_get_communication_count_v1_response_m_payload->i_communication_count
    if (!inscription_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", inscription_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_communication_count_v1_response_m_payloadJSON){

    inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_local_var = NULL;

    // inscription_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(inscription_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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


    inscription_get_communication_count_v1_response_m_payload_local_var = inscription_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count->valuedouble
        );

    return inscription_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
