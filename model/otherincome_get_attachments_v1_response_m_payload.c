#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "otherincome_get_attachments_v1_response_m_payload.h"



static otherincome_get_attachments_v1_response_m_payload_t *otherincome_get_attachments_v1_response_m_payload_create_internal(
    list_t *a_obj_attachmentdocumenttype
    ) {
    otherincome_get_attachments_v1_response_m_payload_t *otherincome_get_attachments_v1_response_m_payload_local_var = malloc(sizeof(otherincome_get_attachments_v1_response_m_payload_t));
    if (!otherincome_get_attachments_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(otherincome_get_attachments_v1_response_m_payload_local_var, 0, sizeof(otherincome_get_attachments_v1_response_m_payload_t));
    otherincome_get_attachments_v1_response_m_payload_local_var->_library_owned = 1;
    otherincome_get_attachments_v1_response_m_payload_local_var->a_obj_attachmentdocumenttype = a_obj_attachmentdocumenttype;
    return otherincome_get_attachments_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) otherincome_get_attachments_v1_response_m_payload_t *otherincome_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
    ) {
    otherincome_get_attachments_v1_response_m_payload_t *result = otherincome_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttype
        );
    if (!result) {
    }
    return result;
}

void otherincome_get_attachments_v1_response_m_payload_free(otherincome_get_attachments_v1_response_m_payload_t *otherincome_get_attachments_v1_response_m_payload) {
    if(NULL == otherincome_get_attachments_v1_response_m_payload){
        return ;
    }
    if(otherincome_get_attachments_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "otherincome_get_attachments_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        list_ForEach(listEntry, otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
            custom_attachmentdocumenttype_response_free(listEntry->data);
        }
        list_freeList(otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype);
        otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype = NULL;
    }
    free(otherincome_get_attachments_v1_response_m_payload);
}

cJSON *otherincome_get_attachments_v1_response_m_payload_convertToJSON(otherincome_get_attachments_v1_response_m_payload_t *otherincome_get_attachments_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    if (!otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
        goto fail;
    }
    cJSON *a_obj_attachmentdocumenttype = cJSON_AddArrayToObject(item, "a_objAttachmentdocumenttype");
    if(a_obj_attachmentdocumenttype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentdocumenttypeListEntry;
    if (otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
    list_ForEach(a_obj_attachmentdocumenttypeListEntry, otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype) {
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

otherincome_get_attachments_v1_response_m_payload_t *otherincome_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *otherincome_get_attachments_v1_response_m_payloadJSON){

    otherincome_get_attachments_v1_response_m_payload_t *otherincome_get_attachments_v1_response_m_payload_local_var = NULL;

    // define the local list for otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    list_t *a_obj_attachmentdocumenttypeList = NULL;

    // otherincome_get_attachments_v1_response_m_payload->a_obj_attachmentdocumenttype
    cJSON *a_obj_attachmentdocumenttype = cJSON_GetObjectItemCaseSensitive(otherincome_get_attachments_v1_response_m_payloadJSON, "a_objAttachmentdocumenttype");
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



    otherincome_get_attachments_v1_response_m_payload_local_var = otherincome_get_attachments_v1_response_m_payload_create_internal (
        a_obj_attachmentdocumenttypeList
        );

    if (!otherincome_get_attachments_v1_response_m_payload_local_var) {
        goto end;
    }

    return otherincome_get_attachments_v1_response_m_payload_local_var;
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
