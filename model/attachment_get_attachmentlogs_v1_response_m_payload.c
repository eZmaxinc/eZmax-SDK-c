#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_get_attachmentlogs_v1_response_m_payload.h"



attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload_create(
    list_t *a_obj_attachmentlog
    ) {
    attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload_local_var = malloc(sizeof(attachment_get_attachmentlogs_v1_response_m_payload_t));
    if (!attachment_get_attachmentlogs_v1_response_m_payload_local_var) {
        return NULL;
    }
    attachment_get_attachmentlogs_v1_response_m_payload_local_var->a_obj_attachmentlog = a_obj_attachmentlog;

    return attachment_get_attachmentlogs_v1_response_m_payload_local_var;
}


void attachment_get_attachmentlogs_v1_response_m_payload_free(attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload) {
    if(NULL == attachment_get_attachmentlogs_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog) {
        list_ForEach(listEntry, attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog) {
            attachmentlog_response_compound_free(listEntry->data);
        }
        list_freeList(attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog);
        attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog = NULL;
    }
    free(attachment_get_attachmentlogs_v1_response_m_payload);
}

cJSON *attachment_get_attachmentlogs_v1_response_m_payload_convertToJSON(attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog
    if (!attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog) {
        goto fail;
    }
    cJSON *a_obj_attachmentlog = cJSON_AddArrayToObject(item, "a_objAttachmentlog");
    if(a_obj_attachmentlog == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentlogListEntry;
    if (attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog) {
    list_ForEach(a_obj_attachmentlogListEntry, attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog) {
    cJSON *itemLocal = attachmentlog_response_compound_convertToJSON(a_obj_attachmentlogListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachmentlog, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload_parseFromJSON(cJSON *attachment_get_attachmentlogs_v1_response_m_payloadJSON){

    attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload_local_var = NULL;

    // define the local list for attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog
    list_t *a_obj_attachmentlogList = NULL;

    // attachment_get_attachmentlogs_v1_response_m_payload->a_obj_attachmentlog
    cJSON *a_obj_attachmentlog = cJSON_GetObjectItemCaseSensitive(attachment_get_attachmentlogs_v1_response_m_payloadJSON, "a_objAttachmentlog");
    if (!a_obj_attachmentlog) {
        goto end;
    }

    
    cJSON *a_obj_attachmentlog_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachmentlog)){
        goto end; //nonprimitive container
    }

    a_obj_attachmentlogList = list_createList();

    cJSON_ArrayForEach(a_obj_attachmentlog_local_nonprimitive,a_obj_attachmentlog )
    {
        if(!cJSON_IsObject(a_obj_attachmentlog_local_nonprimitive)){
            goto end;
        }
        attachmentlog_response_compound_t *a_obj_attachmentlogItem = attachmentlog_response_compound_parseFromJSON(a_obj_attachmentlog_local_nonprimitive);

        list_addElement(a_obj_attachmentlogList, a_obj_attachmentlogItem);
    }


    attachment_get_attachmentlogs_v1_response_m_payload_local_var = attachment_get_attachmentlogs_v1_response_m_payload_create (
        a_obj_attachmentlogList
        );

    return attachment_get_attachmentlogs_v1_response_m_payload_local_var;
end:
    if (a_obj_attachmentlogList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentlogList) {
            attachmentlog_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentlogList);
        a_obj_attachmentlogList = NULL;
    }
    return NULL;

}
