#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "reconciliation_get_attachments_v1_response_m_payload.h"



static reconciliation_get_attachments_v1_response_m_payload_t *reconciliation_get_attachments_v1_response_m_payload_create_internal(
    list_t *a_obj_attachmentdocumenttype
    ) {
    reconciliation_get_attachments_v1_response_m_payload_t *reconciliation_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(reconciliation_get_attachments_v1_response_m_payload_t));
    if (!reconciliation_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(reconciliation_get_attachments_v1_response_m_payload_local_var, 0, sizeof(reconciliation_get_attachments_v1_response_m_payload_t));
    reconciliation_get_attachments_v1_response_m_payload_local_var->_library_owned = 1;
    reconciliation_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;
    return reconciliation_get_attachments_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) reconciliation_get_attachments_v1_response_m_payload_t *reconciliation_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    reconciliation_get_attachments_v1_response_m_payload_t *result = reconciliation_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttype
        );
    if (!result) {
    }
    return result;
}

void reconciliation_get_attachments_v1_response_m_payload_free(reconciliation_get_attachments_v1_response_m_payload_t *reconciliation_get_attachments_v1_response_m_payload) {
    if(NULL == reconciliation_get_attachments_v1_response_m_payload){
        return ;
    }
    if(reconciliation_get_attachments_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "reconciliation_get_attachments_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(reconciliation_get_attachments_v1_response_m_payload);
}

cJSON *reconciliation_get_attachments_v1_response_m_payload_convertToJSON(reconciliation_get_attachments_v1_response_m_payload_t *reconciliation_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

reconciliation_get_attachments_v1_response_m_payload_t *reconciliation_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *reconciliation_get_attachments_v1_response_m_payloadJSON){

    reconciliation_get_attachments_v1_response_m_payload_t *reconciliation_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // reconciliation_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(reconciliation_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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



    reconciliation_get_attachments_v1_response_m_payload_local_var = reconciliation_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttypeList
        );

    if (!reconciliation_get_attachments_v1_response_m_payload_local_var) {
        goto end;
    }

    return reconciliation_get_attachments_v1_response_m_payload_local_var;
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
