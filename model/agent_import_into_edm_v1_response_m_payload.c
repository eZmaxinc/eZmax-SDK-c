#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agent_import_into_edm_v1_response_m_payload.h"



static agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload_create_internal(
    list_t *a_obj_attachment
    ) {
    agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload_local_var = malloc(sizeof(agent_import_into_edm_v1_response_m_payload_t));
    if (!agent_import_into_edm_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(agent_import_into_edm_v1_response_m_payload_local_var, 0, sizeof(agent_import_into_edm_v1_response_m_payload_t));
    agent_import_into_edm_v1_response_m_payload_local_var->_library_owned = 1;
    agent_import_into_edm_v1_response_m_payload_local_var->a_obj_attachment = a_obj_attachment;
    return agent_import_into_edm_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
    ) {
    agent_import_into_edm_v1_response_m_payload_t *result = agent_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void agent_import_into_edm_v1_response_m_payload_free(agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload) {
    if(NULL == agent_import_into_edm_v1_response_m_payload){
        return ;
    }
    if(agent_import_into_edm_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agent_import_into_edm_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agent_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        list_ForEach(listEntry, agent_import_into_edm_v1_response_m_payload->a_obj_attachment) {
            custom_attachment_import_into_edm_response_free(listEntry->data);
        }
        list_freeList(agent_import_into_edm_v1_response_m_payload->a_obj_attachment);
        agent_import_into_edm_v1_response_m_payload->a_obj_attachment = NULL;
    }
    free(agent_import_into_edm_v1_response_m_payload);
}

cJSON *agent_import_into_edm_v1_response_m_payload_convertToJSON(agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // agent_import_into_edm_v1_response_m_payload->a_obj_attachment
    if (!agent_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (agent_import_into_edm_v1_response_m_payload->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, agent_import_into_edm_v1_response_m_payload->a_obj_attachment) {
    cJSON *itemLocal = custom_attachment_import_into_edm_response_convertToJSON(a_obj_attachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachment, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *agent_import_into_edm_v1_response_m_payloadJSON){

    agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload_local_var = NULL;

    // define the local list for agent_import_into_edm_v1_response_m_payload->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // agent_import_into_edm_v1_response_m_payload->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(agent_import_into_edm_v1_response_m_payloadJSON, "a_objAttachment");
    if (cJSON_IsNull(a_obj_attachment)) {
        a_obj_attachment = NULL;
    }
    if (!a_obj_attachment) {
        goto end;
    }

    
    cJSON *a_obj_attachment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachment)){
        goto end; //nonprimitive container
    }

    a_obj_attachmentList = list_createList();

    cJSON_ArrayForEach(a_obj_attachment_local_nonprimitive,a_obj_attachment )
    {
        if(!cJSON_IsObject(a_obj_attachment_local_nonprimitive)){
            goto end;
        }
        custom_attachment_import_into_edm_response_t *a_obj_attachmentItem = custom_attachment_import_into_edm_response_parseFromJSON(a_obj_attachment_local_nonprimitive);

        list_addElement(a_obj_attachmentList, a_obj_attachmentItem);
    }



    agent_import_into_edm_v1_response_m_payload_local_var = agent_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachmentList
        );

    if (!agent_import_into_edm_v1_response_m_payload_local_var) {
        goto end;
    }

    return agent_import_into_edm_v1_response_m_payload_local_var;
end:
    if (a_obj_attachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentList) {
            custom_attachment_import_into_edm_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentList);
        a_obj_attachmentList = NULL;
    }
    return NULL;

}
