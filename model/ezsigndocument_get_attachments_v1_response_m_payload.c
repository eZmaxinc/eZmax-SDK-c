#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_attachments_v1_response_m_payload.h"



ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_attachments_v1_response_m_payload_t));
    if (!ezsigndocument_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;

    return ezsigndocument_get_attachments_v1_response_m_payload_local_var;
}


void ezsigndocument_get_attachments_v1_response_m_payload_free(ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_attachments_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(ezsigndocument_get_attachments_v1_response_m_payload);
}

cJSON *ezsigndocument_get_attachments_v1_response_m_payload_convertToJSON(ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_attachments_v1_response_m_payloadJSON){

    ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // ezsigndocument_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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


    ezsigndocument_get_attachments_v1_response_m_payload_local_var = ezsigndocument_get_attachments_v1_response_m_payload_create (
        a_obj_attachmentdocumenttypeList
        );

    return ezsigndocument_get_attachments_v1_response_m_payload_local_var;
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
