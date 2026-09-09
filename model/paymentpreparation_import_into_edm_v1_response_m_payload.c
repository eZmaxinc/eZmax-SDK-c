#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentpreparation_import_into_edm_v1_response_m_payload.h"



static paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload_create_internal(
    list_t *a_obj_attachment
    ) {
    paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload_local_var = malloc(sizeof(paymentpreparation_import_into_edm_v1_response_m_payload_t));
    if (!paymentpreparation_import_into_edm_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(paymentpreparation_import_into_edm_v1_response_m_payload_local_var, 0, sizeof(paymentpreparation_import_into_edm_v1_response_m_payload_t));
    paymentpreparation_import_into_edm_v1_response_m_payload_local_var->_library_owned = 1;
    paymentpreparation_import_into_edm_v1_response_m_payload_local_var->a_obj_attachment = a_obj_attachment;
    return paymentpreparation_import_into_edm_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
    ) {
    paymentpreparation_import_into_edm_v1_response_m_payload_t *result = paymentpreparation_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void paymentpreparation_import_into_edm_v1_response_m_payload_free(paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload) {
    if(NULL == paymentpreparation_import_into_edm_v1_response_m_payload){
        return ;
    }
    if(paymentpreparation_import_into_edm_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentpreparation_import_into_edm_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        list_ForEach(listEntry, paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment) {
            custom_attachment_import_into_edm_response_free(listEntry->data);
        }
        list_freeList(paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment);
        paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment = NULL;
    }
    free(paymentpreparation_import_into_edm_v1_response_m_payload);
}

cJSON *paymentpreparation_import_into_edm_v1_response_m_payload_convertToJSON(paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment
    if (!paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment) {
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

paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *paymentpreparation_import_into_edm_v1_response_m_payloadJSON){

    paymentpreparation_import_into_edm_v1_response_m_payload_t *paymentpreparation_import_into_edm_v1_response_m_payload_local_var = NULL;

    // define the local list for paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // paymentpreparation_import_into_edm_v1_response_m_payload->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(paymentpreparation_import_into_edm_v1_response_m_payloadJSON, "a_objAttachment");
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



    paymentpreparation_import_into_edm_v1_response_m_payload_local_var = paymentpreparation_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachmentList
        );

    if (!paymentpreparation_import_into_edm_v1_response_m_payload_local_var) {
        goto end;
    }

    return paymentpreparation_import_into_edm_v1_response_m_payload_local_var;
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
