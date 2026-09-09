#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lead_get_attachments_v1_response_m_payload.h"



static lead_get_attachments_v1_response_m_payload_t *lead_get_attachments_v1_response_m_payload_create_internal(
    list_t *a_obj_attachmentdocumenttype
    ) {
    lead_get_attachments_v1_response_m_payload_t *lead_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(lead_get_attachments_v1_response_m_payload_t));
    if (!lead_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(lead_get_attachments_v1_response_m_payload_local_var, 0, sizeof(lead_get_attachments_v1_response_m_payload_t));
    lead_get_attachments_v1_response_m_payload_local_var->_library_owned = 1;
    lead_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;
    return lead_get_attachments_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) lead_get_attachments_v1_response_m_payload_t *lead_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    lead_get_attachments_v1_response_m_payload_t *result = lead_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttype
        );
    if (!result) {
    }
    return result;
}

void lead_get_attachments_v1_response_m_payload_free(lead_get_attachments_v1_response_m_payload_t *lead_get_attachments_v1_response_m_payload) {
    if(NULL == lead_get_attachments_v1_response_m_payload){
        return ;
    }
    if(lead_get_attachments_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "lead_get_attachments_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(lead_get_attachments_v1_response_m_payload);
}

cJSON *lead_get_attachments_v1_response_m_payload_convertToJSON(lead_get_attachments_v1_response_m_payload_t *lead_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

lead_get_attachments_v1_response_m_payload_t *lead_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *lead_get_attachments_v1_response_m_payloadJSON){

    lead_get_attachments_v1_response_m_payload_t *lead_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // lead_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(lead_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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



    lead_get_attachments_v1_response_m_payload_local_var = lead_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttypeList
        );

    if (!lead_get_attachments_v1_response_m_payload_local_var) {
        goto end;
    }

    return lead_get_attachments_v1_response_m_payload_local_var;
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
