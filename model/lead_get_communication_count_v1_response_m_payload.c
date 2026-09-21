#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lead_get_communication_count_v1_response_m_payload.h"



static lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(lead_get_communication_count_v1_response_m_payload_t));
    if (!lead_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(lead_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(lead_get_communication_count_v1_response_m_payload_t));
    lead_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    lead_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return lead_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    lead_get_communication_count_v1_response_m_payload_t *result = lead_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void lead_get_communication_count_v1_response_m_payload_free(lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload) {
    if(NULL == lead_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(lead_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "lead_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (lead_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(lead_get_communication_count_v1_response_m_payload->i_communication_count);
        lead_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(lead_get_communication_count_v1_response_m_payload);
}

cJSON *lead_get_communication_count_v1_response_m_payload_convertToJSON(lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // lead_get_communication_count_v1_response_m_payload->i_communication_count
    if (!lead_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *lead_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *lead_get_communication_count_v1_response_m_payloadJSON){

    lead_get_communication_count_v1_response_m_payload_t *lead_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for lead_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // lead_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(lead_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    lead_get_communication_count_v1_response_m_payload_local_var = lead_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!lead_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return lead_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
