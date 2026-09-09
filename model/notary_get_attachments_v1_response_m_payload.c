#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notary_get_attachments_v1_response_m_payload.h"



static notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload_create_internal(
    list_t *a_obj_attachmentdocumenttype
    ) {
    notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(notary_get_attachments_v1_response_m_payload_t));
    if (!notary_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(notary_get_attachments_v1_response_m_payload_local_var, 0, sizeof(notary_get_attachments_v1_response_m_payload_t));
    notary_get_attachments_v1_response_m_payload_local_var->_library_owned = 1;
    notary_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;
    return notary_get_attachments_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    notary_get_attachments_v1_response_m_payload_t *result = notary_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttype
        );
    if (!result) {
    }
    return result;
}

void notary_get_attachments_v1_response_m_payload_free(notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload) {
    if(NULL == notary_get_attachments_v1_response_m_payload){
        return ;
    }
    if(notary_get_attachments_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "notary_get_attachments_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(notary_get_attachments_v1_response_m_payload);
}

cJSON *notary_get_attachments_v1_response_m_payload_convertToJSON(notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *notary_get_attachments_v1_response_m_payloadJSON){

    notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // notary_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(notary_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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



    notary_get_attachments_v1_response_m_payload_local_var = notary_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttypeList
        );

    if (!notary_get_attachments_v1_response_m_payload_local_var) {
        goto end;
    }

    return notary_get_attachments_v1_response_m_payload_local_var;
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
