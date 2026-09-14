#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_get_communication_count_v1_response_m_payload.h"



static agent_get_communication_count_v1_response_m_payload_t *agent_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    agent_get_communication_count_v1_response_m_payload_t *agent_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(agent_get_communication_count_v1_response_m_payload_t));
    if (!agent_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(agent_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(agent_get_communication_count_v1_response_m_payload_t));
    agent_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    agent_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return agent_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) agent_get_communication_count_v1_response_m_payload_t *agent_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    agent_get_communication_count_v1_response_m_payload_t *result = agent_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void agent_get_communication_count_v1_response_m_payload_free(agent_get_communication_count_v1_response_m_payload_t *agent_get_communication_count_v1_response_m_payload) {
    if(NULL == agent_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(agent_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(agent_get_communication_count_v1_response_m_payload->i_communication_count);
        agent_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(agent_get_communication_count_v1_response_m_payload);
}

cJSON *agent_get_communication_count_v1_response_m_payload_convertToJSON(agent_get_communication_count_v1_response_m_payload_t *agent_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // agent_get_communication_count_v1_response_m_payload->i_communication_count
    if (!agent_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *agent_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_get_communication_count_v1_response_m_payload_t *agent_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *agent_get_communication_count_v1_response_m_payloadJSON){

    agent_get_communication_count_v1_response_m_payload_t *agent_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for agent_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // agent_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(agent_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    agent_get_communication_count_v1_response_m_payload_local_var = agent_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!agent_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return agent_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
