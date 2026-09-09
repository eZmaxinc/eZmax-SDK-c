#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "purchase_get_attachments_v1_response_m_payload.h"



static purchase_get_attachments_v1_response_m_payload_t *purchase_get_attachments_v1_response_m_payload_create_internal(
    list_t *a_obj_attachmentdocumenttype
    ) {
    purchase_get_attachments_v1_response_m_payload_t *purchase_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(purchase_get_attachments_v1_response_m_payload_t));
    if (!purchase_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(purchase_get_attachments_v1_response_m_payload_local_var, 0, sizeof(purchase_get_attachments_v1_response_m_payload_t));
    purchase_get_attachments_v1_response_m_payload_local_var->_library_owned = 1;
    purchase_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;
    return purchase_get_attachments_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) purchase_get_attachments_v1_response_m_payload_t *purchase_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    purchase_get_attachments_v1_response_m_payload_t *result = purchase_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttype
        );
    if (!result) {
    }
    return result;
}

void purchase_get_attachments_v1_response_m_payload_free(purchase_get_attachments_v1_response_m_payload_t *purchase_get_attachments_v1_response_m_payload) {
    if(NULL == purchase_get_attachments_v1_response_m_payload){
        return ;
    }
    if(purchase_get_attachments_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "purchase_get_attachments_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(purchase_get_attachments_v1_response_m_payload);
}

cJSON *purchase_get_attachments_v1_response_m_payload_convertToJSON(purchase_get_attachments_v1_response_m_payload_t *purchase_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

purchase_get_attachments_v1_response_m_payload_t *purchase_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *purchase_get_attachments_v1_response_m_payloadJSON){

    purchase_get_attachments_v1_response_m_payload_t *purchase_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // purchase_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(purchase_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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



    purchase_get_attachments_v1_response_m_payload_local_var = purchase_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttypeList
        );

    if (!purchase_get_attachments_v1_response_m_payload_local_var) {
        goto end;
    }

    return purchase_get_attachments_v1_response_m_payload_local_var;
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
