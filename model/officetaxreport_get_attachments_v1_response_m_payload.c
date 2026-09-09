#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "officetaxreport_get_attachments_v1_response_m_payload.h"



static officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload_create_internal(
    list_t *a_obj_attachmentdocumenttype
    ) {
    officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(officetaxreport_get_attachments_v1_response_m_payload_t));
    if (!officetaxreport_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(officetaxreport_get_attachments_v1_response_m_payload_local_var, 0, sizeof(officetaxreport_get_attachments_v1_response_m_payload_t));
    officetaxreport_get_attachments_v1_response_m_payload_local_var->_library_owned = 1;
    officetaxreport_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;
    return officetaxreport_get_attachments_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    officetaxreport_get_attachments_v1_response_m_payload_t *result = officetaxreport_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttype
        );
    if (!result) {
    }
    return result;
}

void officetaxreport_get_attachments_v1_response_m_payload_free(officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload) {
    if(NULL == officetaxreport_get_attachments_v1_response_m_payload){
        return ;
    }
    if(officetaxreport_get_attachments_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "officetaxreport_get_attachments_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(officetaxreport_get_attachments_v1_response_m_payload);
}

cJSON *officetaxreport_get_attachments_v1_response_m_payload_convertToJSON(officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *officetaxreport_get_attachments_v1_response_m_payloadJSON){

    officetaxreport_get_attachments_v1_response_m_payload_t *officetaxreport_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // officetaxreport_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(officetaxreport_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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



    officetaxreport_get_attachments_v1_response_m_payload_local_var = officetaxreport_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttypeList
        );

    if (!officetaxreport_get_attachments_v1_response_m_payload_local_var) {
        goto end;
    }

    return officetaxreport_get_attachments_v1_response_m_payload_local_var;
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
