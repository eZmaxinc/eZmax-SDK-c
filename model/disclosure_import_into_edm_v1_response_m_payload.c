#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "disclosure_import_into_edm_v1_response_m_payload.h"



static disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload_create_internal(
    list_t *a_obj_attachment
    ) {
    disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload_local_var = malloc(sizeof(disclosure_import_into_edm_v1_response_m_payload_t));
    if (!disclosure_import_into_edm_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(disclosure_import_into_edm_v1_response_m_payload_local_var, 0, sizeof(disclosure_import_into_edm_v1_response_m_payload_t));
    disclosure_import_into_edm_v1_response_m_payload_local_var->_library_owned = 1;
    disclosure_import_into_edm_v1_response_m_payload_local_var->a_obj_attachment = a_obj_attachment;
    return disclosure_import_into_edm_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
    ) {
    disclosure_import_into_edm_v1_response_m_payload_t *result = disclosure_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void disclosure_import_into_edm_v1_response_m_payload_free(disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload) {
    if(NULL == disclosure_import_into_edm_v1_response_m_payload){
        return ;
    }
    if(disclosure_import_into_edm_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "disclosure_import_into_edm_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        list_ForEach(listEntry, disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment) {
            custom_attachment_import_into_edm_response_free(listEntry->data);
        }
        list_freeList(disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment);
        disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment = NULL;
    }
    free(disclosure_import_into_edm_v1_response_m_payload);
}

cJSON *disclosure_import_into_edm_v1_response_m_payload_convertToJSON(disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment
    if (!disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment) {
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

disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *disclosure_import_into_edm_v1_response_m_payloadJSON){

    disclosure_import_into_edm_v1_response_m_payload_t *disclosure_import_into_edm_v1_response_m_payload_local_var = NULL;

    // define the local list for disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // disclosure_import_into_edm_v1_response_m_payload->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(disclosure_import_into_edm_v1_response_m_payloadJSON, "a_objAttachment");
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



    disclosure_import_into_edm_v1_response_m_payload_local_var = disclosure_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachmentList
        );

    if (!disclosure_import_into_edm_v1_response_m_payload_local_var) {
        goto end;
    }

    return disclosure_import_into_edm_v1_response_m_payload_local_var;
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
