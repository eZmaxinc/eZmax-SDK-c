#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload.h"



static ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_create_internal(
    list_t *a_obj_ezsignsignatureattachment
    ) {
    ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_local_var = malloc(sizeof(ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_t));
    if (!ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_local_var->a_obj_ezsignsignatureattachment = a_obj_ezsignsignatureattachment;

    ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_create(
    list_t *a_obj_ezsignsignatureattachment
    ) {
    return ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_create_internal (
        a_obj_ezsignsignatureattachment
        );
}

void ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_free(ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload) {
    if(NULL == ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload){
        return ;
    }
    if(ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment) {
        list_ForEach(listEntry, ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment) {
            ezsignsignatureattachment_response_free(listEntry->data);
        }
        list_freeList(ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment);
        ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment = NULL;
    }
    free(ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload);
}

cJSON *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_convertToJSON(ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment
    if (!ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignatureattachment = cJSON_AddArrayToObject(item, "a_objEzsignsignatureattachment");
    if(a_obj_ezsignsignatureattachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignatureattachmentListEntry;
    if (ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment) {
    list_ForEach(a_obj_ezsignsignatureattachmentListEntry, ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment) {
    cJSON *itemLocal = ezsignsignatureattachment_response_convertToJSON(a_obj_ezsignsignatureattachmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignatureattachment, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payloadJSON){

    ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_t *ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment
    list_t *a_obj_ezsignsignatureattachmentList = NULL;

    // ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload->a_obj_ezsignsignatureattachment
    cJSON *a_obj_ezsignsignatureattachment = cJSON_GetObjectItemCaseSensitive(ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payloadJSON, "a_objEzsignsignatureattachment");
    if (cJSON_IsNull(a_obj_ezsignsignatureattachment)) {
        a_obj_ezsignsignatureattachment = NULL;
    }
    if (!a_obj_ezsignsignatureattachment) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsignatureattachment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignatureattachment)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignatureattachmentList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignatureattachment_local_nonprimitive,a_obj_ezsignsignatureattachment )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignatureattachment_local_nonprimitive)){
            goto end;
        }
        ezsignsignatureattachment_response_t *a_obj_ezsignsignatureattachmentItem = ezsignsignatureattachment_response_parseFromJSON(a_obj_ezsignsignatureattachment_local_nonprimitive);

        list_addElement(a_obj_ezsignsignatureattachmentList, a_obj_ezsignsignatureattachmentItem);
    }


    ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_local_var = ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_create_internal (
        a_obj_ezsignsignatureattachmentList
        );

    return ezsignsignature_get_ezsignsignatureattachment_v1_response_m_payload_local_var;
end:
    if (a_obj_ezsignsignatureattachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignatureattachmentList) {
            ezsignsignatureattachment_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignatureattachmentList);
        a_obj_ezsignsignatureattachmentList = NULL;
    }
    return NULL;

}
