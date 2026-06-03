#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplier_import_into_edm_v1_response_m_payload.h"



static supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload_create_internal(
    list_t *a_obj_attachment
    ) {
    supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload_local_var = malloc(sizeof(supplier_import_into_edm_v1_response_m_payload_t));
    if (!supplier_import_into_edm_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(supplier_import_into_edm_v1_response_m_payload_local_var, 0, sizeof(supplier_import_into_edm_v1_response_m_payload_t));
    supplier_import_into_edm_v1_response_m_payload_local_var->_library_owned = 1;
    supplier_import_into_edm_v1_response_m_payload_local_var->a_obj_attachment = a_obj_attachment;
    return supplier_import_into_edm_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
    ) {
    supplier_import_into_edm_v1_response_m_payload_t *result = supplier_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void supplier_import_into_edm_v1_response_m_payload_free(supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload) {
    if(NULL == supplier_import_into_edm_v1_response_m_payload){
        return ;
    }
    if(supplier_import_into_edm_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "supplier_import_into_edm_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (supplier_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        list_ForEach(listEntry, supplier_import_into_edm_v1_response_m_payload->a_obj_attachment) {
            custom_attachment_import_into_edm_response_free(listEntry->data);
        }
        list_freeList(supplier_import_into_edm_v1_response_m_payload->a_obj_attachment);
        supplier_import_into_edm_v1_response_m_payload->a_obj_attachment = NULL;
    }
    free(supplier_import_into_edm_v1_response_m_payload);
}

cJSON *supplier_import_into_edm_v1_response_m_payload_convertToJSON(supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // supplier_import_into_edm_v1_response_m_payload->a_obj_attachment
    if (!supplier_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (supplier_import_into_edm_v1_response_m_payload->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, supplier_import_into_edm_v1_response_m_payload->a_obj_attachment) {
    cJSON *itemLocal = custom_attachment_import_into_edm_response_convertToJSON(a_obj_attachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachment, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *supplier_import_into_edm_v1_response_m_payloadJSON){

    supplier_import_into_edm_v1_response_m_payload_t *supplier_import_into_edm_v1_response_m_payload_local_var = NULL;

    // define the local list for supplier_import_into_edm_v1_response_m_payload->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // supplier_import_into_edm_v1_response_m_payload->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(supplier_import_into_edm_v1_response_m_payloadJSON, "a_objAttachment");
    if (cJSON_IsNull(a_obj_attachment)) {
        a_obj_attachment = NULL;
    }
    if (!a_obj_attachment) {
        goto end;
    }

    
    cJSON *a_obj_attachment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachment)){
        goto end; //nonprimitive container
    }

    a_obj_attachmentList = list_createList();

    cJSON_ArrayForEach(a_obj_attachment_local_nonprimitive,a_obj_attachment )
    {
        if(!cJSON_IsObject(a_obj_attachment_local_nonprimitive)){
            goto end;
        }
        custom_attachment_import_into_edm_response_t *a_obj_attachmentItem = custom_attachment_import_into_edm_response_parseFromJSON(a_obj_attachment_local_nonprimitive);

        list_addElement(a_obj_attachmentList, a_obj_attachmentItem);
    }



    supplier_import_into_edm_v1_response_m_payload_local_var = supplier_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachmentList
        );

    if (!supplier_import_into_edm_v1_response_m_payload_local_var) {
        goto end;
    }

    return supplier_import_into_edm_v1_response_m_payload_local_var;
end:
    if (a_obj_attachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentList) {
            custom_attachment_import_into_edm_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentList);
        a_obj_attachmentList = NULL;
    }
    return NULL;

}
