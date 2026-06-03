#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_get_autocomplete_v2_response_m_payload.h"



static agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_agent
    ) {
    agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(agent_get_autocomplete_v2_response_m_payload_t));
    if (!agent_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(agent_get_autocomplete_v2_response_m_payload_local_var, 0, sizeof(agent_get_autocomplete_v2_response_m_payload_t));
    agent_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    agent_get_autocomplete_v2_response_m_payload_local_var->a_obj_agent = a_obj_agent;
    return agent_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_agent
    ) {
    agent_get_autocomplete_v2_response_m_payload_t *result = agent_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_agent
        );
    if (!result) {
    }
    return result;
}

void agent_get_autocomplete_v2_response_m_payload_free(agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload) {
    if(NULL == agent_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(agent_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_get_autocomplete_v2_response_m_payload->a_obj_agent) {
        list_ForEach(listEntry, agent_get_autocomplete_v2_response_m_payload->a_obj_agent) {
            agent_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(agent_get_autocomplete_v2_response_m_payload->a_obj_agent);
        agent_get_autocomplete_v2_response_m_payload->a_obj_agent = NULL;
    }
    free(agent_get_autocomplete_v2_response_m_payload);
}

cJSON *agent_get_autocomplete_v2_response_m_payload_convertToJSON(agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // agent_get_autocomplete_v2_response_m_payload->a_obj_agent
    if (!agent_get_autocomplete_v2_response_m_payload->a_obj_agent) {
        goto fail;
    }
    cJSON *a_obj_agent = cJSON_AddArrayToObject(item, "a_objAgent");
    if(a_obj_agent == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_agentListEntry;
    if (agent_get_autocomplete_v2_response_m_payload->a_obj_agent) {
    list_ForEach(a_obj_agentListEntry, agent_get_autocomplete_v2_response_m_payload->a_obj_agent) {
    cJSON *itemLocal = agent_autocomplete_element_response_convertToJSON(a_obj_agentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_agent, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *agent_get_autocomplete_v2_response_m_payloadJSON){

    agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for agent_get_autocomplete_v2_response_m_payload->a_obj_agent
    list_t *a_obj_agentList = NULL;

    // agent_get_autocomplete_v2_response_m_payload->a_obj_agent
    cJSON *a_obj_agent = cJSON_GetObjectItemCaseSensitive(agent_get_autocomplete_v2_response_m_payloadJSON, "a_objAgent");
    if (cJSON_IsNull(a_obj_agent)) {
        a_obj_agent = NULL;
    }
    if (!a_obj_agent) {
        goto end;
    }

    
    cJSON *a_obj_agent_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_agent)){
        goto end; //nonprimitive container
    }

    a_obj_agentList = list_createList();

    cJSON_ArrayForEach(a_obj_agent_local_nonprimitive,a_obj_agent )
    {
        if(!cJSON_IsObject(a_obj_agent_local_nonprimitive)){
            goto end;
        }
        agent_autocomplete_element_response_t *a_obj_agentItem = agent_autocomplete_element_response_parseFromJSON(a_obj_agent_local_nonprimitive);

        list_addElement(a_obj_agentList, a_obj_agentItem);
    }



    agent_get_autocomplete_v2_response_m_payload_local_var = agent_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_agentList
        );

    if (!agent_get_autocomplete_v2_response_m_payload_local_var) {
        goto end;
    }

    return agent_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_agentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_agentList) {
            agent_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_agentList);
        a_obj_agentList = NULL;
    }
    return NULL;

}
