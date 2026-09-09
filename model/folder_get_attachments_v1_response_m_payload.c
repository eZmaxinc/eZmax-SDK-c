#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "folder_get_attachments_v1_response_m_payload.h"



static folder_get_attachments_v1_response_m_payload_t *folder_get_attachments_v1_response_m_payload_create_internal(
    list_t *a_obj_attachmentdocumenttype
    ) {
    folder_get_attachments_v1_response_m_payload_t *folder_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(folder_get_attachments_v1_response_m_payload_t));
    if (!folder_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(folder_get_attachments_v1_response_m_payload_local_var, 0, sizeof(folder_get_attachments_v1_response_m_payload_t));
    folder_get_attachments_v1_response_m_payload_local_var->_library_owned = 1;
    folder_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;
    return folder_get_attachments_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) folder_get_attachments_v1_response_m_payload_t *folder_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    folder_get_attachments_v1_response_m_payload_t *result = folder_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttype
        );
    if (!result) {
    }
    return result;
}

void folder_get_attachments_v1_response_m_payload_free(folder_get_attachments_v1_response_m_payload_t *folder_get_attachments_v1_response_m_payload) {
    if(NULL == folder_get_attachments_v1_response_m_payload){
        return ;
    }
    if(folder_get_attachments_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "folder_get_attachments_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(folder_get_attachments_v1_response_m_payload);
}

cJSON *folder_get_attachments_v1_response_m_payload_convertToJSON(folder_get_attachments_v1_response_m_payload_t *folder_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    cJSON *itemLocal = custom_attachmentdocumenttype_response_convertToJSON(a_obj_attachmentdocumenttypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachmentdocumenttype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

folder_get_attachments_v1_response_m_payload_t *folder_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *folder_get_attachments_v1_response_m_payloadJSON){

    folder_get_attachments_v1_response_m_payload_t *folder_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // folder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(folder_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
    if (cJSON_IsNull(a_obj_attachmentdocumenttype)) {
        a_obj_attachmentdocumenttype = NULL;
    }
    if (!a_obj_attachmentdocumenttype) {
        goto end;
    }

    
    cJSON *a_obj_attachmentdocumenttype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachmentdocumenttype)){
        goto end; //nonprimitive container
    }

    a_obj_attachmentdocumenttypeList = list_createList();

    cJSON_ArrayForEach(a_obj_attachmentdocumenttype_local_nonprimitive,a_obj_attachmentdocumenttype )
    {
        if(!cJSON_IsObject(a_obj_attachmentdocumenttype_local_nonprimitive)){
            goto end;
        }
        custom_attachmentdocumenttype_response_t *a_obj_attachmentdocumenttypeItem = custom_attachmentdocumenttype_response_parseFromJSON(a_obj_attachmentdocumenttype_local_nonprimitive);

        list_addElement(a_obj_attachmentdocumenttypeList, a_obj_attachmentdocumenttypeItem);
    }



    folder_get_attachments_v1_response_m_payload_local_var = folder_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttypeList
        );

    if (!folder_get_attachments_v1_response_m_payload_local_var) {
        goto end;
    }

    return folder_get_attachments_v1_response_m_payload_local_var;
end:
    if (a_obj_attachmentdocumenttypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentdocumenttypeList) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentdocumenttypeList);
        a_obj_attachmentdocumenttypeList = NULL;
    }
    return NULL;

}
