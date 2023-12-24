#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_get_attachments_v1_response_m_payload.h"



inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(inscription_get_attachments_v1_response_m_payload_t));
    if (!inscription_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscription_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;

    return inscription_get_attachments_v1_response_m_payload_local_var;
}


void inscription_get_attachments_v1_response_m_payload_free(inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload) {
    if(NULL == inscription_get_attachments_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(inscription_get_attachments_v1_response_m_payload);
}

cJSON *inscription_get_attachments_v1_response_m_payload_convertToJSON(inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_attachments_v1_response_m_payloadJSON){

    inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // inscription_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(inscription_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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


    inscription_get_attachments_v1_response_m_payload_local_var = inscription_get_attachments_v1_response_m_payload_create (
        a_obj_attachmentdocumenttypeList
        );

    return inscription_get_attachments_v1_response_m_payload_local_var;
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
