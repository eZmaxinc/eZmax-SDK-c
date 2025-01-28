#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_attachments_v1_response_m_payload.h"



static ezsignfolder_get_attachments_v1_response_m_payload_t *ezsignfolder_get_attachments_v1_response_m_payload_create_internal(
    list_t *a_obj_attachmentdocumenttype
    ) {
    ezsignfolder_get_attachments_v1_response_m_payload_t *ezsignfolder_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_attachments_v1_response_m_payload_t));
    if (!ezsignfolder_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;

    ezsignfolder_get_attachments_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignfolder_get_attachments_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfolder_get_attachments_v1_response_m_payload_t *ezsignfolder_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    return ezsignfolder_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttype
        );
}

void ezsignfolder_get_attachments_v1_response_m_payload_free(ezsignfolder_get_attachments_v1_response_m_payload_t *ezsignfolder_get_attachments_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_attachments_v1_response_m_payload){
        return ;
    }
    if(ezsignfolder_get_attachments_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_get_attachments_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(ezsignfolder_get_attachments_v1_response_m_payload);
}

cJSON *ezsignfolder_get_attachments_v1_response_m_payload_convertToJSON(ezsignfolder_get_attachments_v1_response_m_payload_t *ezsignfolder_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

ezsignfolder_get_attachments_v1_response_m_payload_t *ezsignfolder_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_attachments_v1_response_m_payloadJSON){

    ezsignfolder_get_attachments_v1_response_m_payload_t *ezsignfolder_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // ezsignfolder_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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


    ezsignfolder_get_attachments_v1_response_m_payload_local_var = ezsignfolder_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttypeList
        );

    return ezsignfolder_get_attachments_v1_response_m_payload_local_var;
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
