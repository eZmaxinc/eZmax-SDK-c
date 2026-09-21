#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachmentrejectreason_get_autocomplete_v2_response_m_payload.h"



static attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *attachmentrejectreason_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_attachmentrejectreason
    ) {
    attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(attachmentrejectreason_get_autocomplete_v2_response_m_payload_t));
    if (!attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var, 0, sizeof(attachmentrejectreason_get_autocomplete_v2_response_m_payload_t));
    attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var->a_obj_attachmentrejectreason = a_obj_attachmentrejectreason;
    return attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *attachmentrejectreason_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_attachmentrejectreason
    ) {
    attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *result = attachmentrejectreason_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_attachmentrejectreason
        );
    if (!result) {
    }
    return result;
}

void attachmentrejectreason_get_autocomplete_v2_response_m_payload_free(attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *attachmentrejectreason_get_autocomplete_v2_response_m_payload) {
    if(NULL == attachmentrejectreason_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(attachmentrejectreason_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachmentrejectreason_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason) {
        list_ForEach(listEntry, attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason) {
            attachmentrejectreason_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason);
        attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason = NULL;
    }
    free(attachmentrejectreason_get_autocomplete_v2_response_m_payload);
}

cJSON *attachmentrejectreason_get_autocomplete_v2_response_m_payload_convertToJSON(attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *attachmentrejectreason_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason
    if (!attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason) {
        goto fail;
    }
    cJSON *a_obj_attachmentrejectreason = cJSON_AddArrayToObject(item, "a_objAttachmentrejectreason");
    if(a_obj_attachmentrejectreason == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentrejectreasonListEntry;
    if (attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason) {
    list_ForEach(a_obj_attachmentrejectreasonListEntry, attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason) {
    cJSON *itemLocal = attachmentrejectreason_autocomplete_element_response_convertToJSON(a_obj_attachmentrejectreasonListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attachmentrejectreason, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *attachmentrejectreason_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *attachmentrejectreason_get_autocomplete_v2_response_m_payloadJSON){

    attachmentrejectreason_get_autocomplete_v2_response_m_payload_t *attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason
    list_t *a_obj_attachmentrejectreasonList = NULL;

    // attachmentrejectreason_get_autocomplete_v2_response_m_payload->a_obj_attachmentrejectreason
    cJSON *a_obj_attachmentrejectreason = cJSON_GetObjectItemCaseSensitive(attachmentrejectreason_get_autocomplete_v2_response_m_payloadJSON, "a_objAttachmentrejectreason");
    if (cJSON_IsNull(a_obj_attachmentrejectreason)) {
        a_obj_attachmentrejectreason = NULL;
    }
    if (!a_obj_attachmentrejectreason) {
        goto end;
    }

    
    cJSON *a_obj_attachmentrejectreason_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attachmentrejectreason)){
        goto end; //nonprimitive container
    }

    a_obj_attachmentrejectreasonList = list_createList();

    cJSON_ArrayForEach(a_obj_attachmentrejectreason_local_nonprimitive,a_obj_attachmentrejectreason )
    {
        if(!cJSON_IsObject(a_obj_attachmentrejectreason_local_nonprimitive)){
            goto end;
        }
        attachmentrejectreason_autocomplete_element_response_t *a_obj_attachmentrejectreasonItem = attachmentrejectreason_autocomplete_element_response_parseFromJSON(a_obj_attachmentrejectreason_local_nonprimitive);

        list_addElement(a_obj_attachmentrejectreasonList, a_obj_attachmentrejectreasonItem);
    }



    attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var = attachmentrejectreason_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_attachmentrejectreasonList
        );

    if (!attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var) {
        goto end;
    }

    return attachmentrejectreason_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_attachmentrejectreasonList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentrejectreasonList) {
            attachmentrejectreason_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentrejectreasonList);
        a_obj_attachmentrejectreasonList = NULL;
    }
    return NULL;

}
