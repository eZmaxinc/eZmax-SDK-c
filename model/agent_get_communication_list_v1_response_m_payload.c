#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_get_communication_list_v1_response_m_payload.h"



static agent_get_communication_list_v1_response_m_payload_t *agent_get_communication_list_v1_response_m_payload_create_internal(
    list_t *a_obj_communication
    ) {
    agent_get_communication_list_v1_response_m_payload_t *agent_get_communication_list_v1_response_m_payload_local_var = malloc(sizeof(agent_get_communication_list_v1_response_m_payload_t));
    if (!agent_get_communication_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(agent_get_communication_list_v1_response_m_payload_local_var, 0, sizeof(agent_get_communication_list_v1_response_m_payload_t));
    agent_get_communication_list_v1_response_m_payload_local_var->_library_owned = 1;
    agent_get_communication_list_v1_response_m_payload_local_var->a_obj_communication = a_obj_communication;
    return agent_get_communication_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) agent_get_communication_list_v1_response_m_payload_t *agent_get_communication_list_v1_response_m_payload_create(
    list_t *a_obj_communication
    ) {
    agent_get_communication_list_v1_response_m_payload_t *result = agent_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communication
        );
    if (!result) {
    }
    return result;
}

void agent_get_communication_list_v1_response_m_payload_free(agent_get_communication_list_v1_response_m_payload_t *agent_get_communication_list_v1_response_m_payload) {
    if(NULL == agent_get_communication_list_v1_response_m_payload){
        return ;
    }
    if(agent_get_communication_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_get_communication_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_get_communication_list_v1_response_m_payload->a_obj_communication) {
        list_ForEach(listEntry, agent_get_communication_list_v1_response_m_payload->a_obj_communication) {
            custom_communication_list_element_response_free(listEntry->data);
        }
        list_freeList(agent_get_communication_list_v1_response_m_payload->a_obj_communication);
        agent_get_communication_list_v1_response_m_payload->a_obj_communication = NULL;
    }
    free(agent_get_communication_list_v1_response_m_payload);
}

cJSON *agent_get_communication_list_v1_response_m_payload_convertToJSON(agent_get_communication_list_v1_response_m_payload_t *agent_get_communication_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // agent_get_communication_list_v1_response_m_payload->a_obj_communication
    if (!agent_get_communication_list_v1_response_m_payload->a_obj_communication) {
        goto fail;
    }
    cJSON *a_obj_communication = cJSON_AddArrayToObject(item, "a_objCommunication");
    if(a_obj_communication == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_communicationListEntry;
    if (agent_get_communication_list_v1_response_m_payload->a_obj_communication) {
    list_ForEach(a_obj_communicationListEntry, agent_get_communication_list_v1_response_m_payload->a_obj_communication) {
    cJSON *itemLocal = custom_communication_list_element_response_convertToJSON(a_obj_communicationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_communication, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_get_communication_list_v1_response_m_payload_t *agent_get_communication_list_v1_response_m_payload_parseFromJSON(cJSON *agent_get_communication_list_v1_response_m_payloadJSON){

    agent_get_communication_list_v1_response_m_payload_t *agent_get_communication_list_v1_response_m_payload_local_var = NULL;

    // define the local list for agent_get_communication_list_v1_response_m_payload->a_obj_communication
    list_t *a_obj_communicationList = NULL;

    // agent_get_communication_list_v1_response_m_payload->a_obj_communication
    cJSON *a_obj_communication = cJSON_GetObjectItemCaseSensitive(agent_get_communication_list_v1_response_m_payloadJSON, "a_objCommunication");
    if (cJSON_IsNull(a_obj_communication)) {
        a_obj_communication = NULL;
    }
    if (!a_obj_communication) {
        goto end;
    }

    
    cJSON *a_obj_communication_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_communication)){
        goto end; //nonprimitive container
    }

    a_obj_communicationList = list_createList();

    cJSON_ArrayForEach(a_obj_communication_local_nonprimitive,a_obj_communication )
    {
        if(!cJSON_IsObject(a_obj_communication_local_nonprimitive)){
            goto end;
        }
        custom_communication_list_element_response_t *a_obj_communicationItem = custom_communication_list_element_response_parseFromJSON(a_obj_communication_local_nonprimitive);

        list_addElement(a_obj_communicationList, a_obj_communicationItem);
    }



    agent_get_communication_list_v1_response_m_payload_local_var = agent_get_communication_list_v1_response_m_payload_create_internal (
        a_obj_communicationList
        );

    if (!agent_get_communication_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return agent_get_communication_list_v1_response_m_payload_local_var;
end:
    if (a_obj_communicationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_communicationList) {
            custom_communication_list_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_communicationList);
        a_obj_communicationList = NULL;
    }
    return NULL;

}
