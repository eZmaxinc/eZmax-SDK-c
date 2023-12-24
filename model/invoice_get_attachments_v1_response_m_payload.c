#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_get_attachments_v1_response_m_payload.h"



invoice_get_attachments_v1_response_m_payload_t *invoice_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    invoice_get_attachments_v1_response_m_payload_t *invoice_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(invoice_get_attachments_v1_response_m_payload_t));
    if (!invoice_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    invoice_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;

    return invoice_get_attachments_v1_response_m_payload_local_var;
}


void invoice_get_attachments_v1_response_m_payload_free(invoice_get_attachments_v1_response_m_payload_t *invoice_get_attachments_v1_response_m_payload) {
    if(NULL == invoice_get_attachments_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(invoice_get_attachments_v1_response_m_payload);
}

cJSON *invoice_get_attachments_v1_response_m_payload_convertToJSON(invoice_get_attachments_v1_response_m_payload_t *invoice_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

invoice_get_attachments_v1_response_m_payload_t *invoice_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *invoice_get_attachments_v1_response_m_payloadJSON){

    invoice_get_attachments_v1_response_m_payload_t *invoice_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // invoice_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(invoice_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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


    invoice_get_attachments_v1_response_m_payload_local_var = invoice_get_attachments_v1_response_m_payload_create (
        a_obj_attachmentdocumenttypeList
        );

    return invoice_get_attachments_v1_response_m_payload_local_var;
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
