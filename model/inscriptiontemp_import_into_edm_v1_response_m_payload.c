#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontemp_import_into_edm_v1_response_m_payload.h"



static inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload_create_internal(
    list_t *a_obj_attachment
    ) {
    inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload_local_var = malloc(sizeof(inscriptiontemp_import_into_edm_v1_response_m_payload_t));
    if (!inscriptiontemp_import_into_edm_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptiontemp_import_into_edm_v1_response_m_payload_local_var->a_obj_attachment = a_obj_attachment;

    inscriptiontemp_import_into_edm_v1_response_m_payload_local_var->_library_owned = 1;
    return inscriptiontemp_import_into_edm_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
    ) {
    return inscriptiontemp_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachment
        );
}

void inscriptiontemp_import_into_edm_v1_response_m_payload_free(inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload) {
    if(NULL == inscriptiontemp_import_into_edm_v1_response_m_payload){
        return ;
    }
    if(inscriptiontemp_import_into_edm_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptiontemp_import_into_edm_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        list_ForEach(listEntry, inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment) {
            custom_attachment_import_into_edm_response_free(listEntry->data);
        }
        list_freeList(inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment);
        inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment = NULL;
    }
    free(inscriptiontemp_import_into_edm_v1_response_m_payload);
}

cJSON *inscriptiontemp_import_into_edm_v1_response_m_payload_convertToJSON(inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment
    if (!inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment) {
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

inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_import_into_edm_v1_response_m_payloadJSON){

    inscriptiontemp_import_into_edm_v1_response_m_payload_t *inscriptiontemp_import_into_edm_v1_response_m_payload_local_var = NULL;

    // define the local list for inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // inscriptiontemp_import_into_edm_v1_response_m_payload->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_import_into_edm_v1_response_m_payloadJSON, "a_objAttachment");
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


    inscriptiontemp_import_into_edm_v1_response_m_payload_local_var = inscriptiontemp_import_into_edm_v1_response_m_payload_create_internal (
        a_obj_attachmentList
        );

    return inscriptiontemp_import_into_edm_v1_response_m_payload_local_var;
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
