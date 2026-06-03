#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lead_import_into_edm_v1_request.h"



static lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request_create_internal(
    list_t *a_obj_attachment
    ) {
    lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request_local_var = malloc(sizeof(lead_import_into_edm_v1_request_t));
    if (!lead_import_into_edm_v1_request_local_var) {
        return NULL;
    }
    memset(lead_import_into_edm_v1_request_local_var, 0, sizeof(lead_import_into_edm_v1_request_t));
    lead_import_into_edm_v1_request_local_var->_library_owned = 1;
    lead_import_into_edm_v1_request_local_var->a_obj_attachment = a_obj_attachment;
    return lead_import_into_edm_v1_request_local_var;
}

__attribute__((deprecated)) lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
    ) {
    lead_import_into_edm_v1_request_t *result = lead_import_into_edm_v1_request_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void lead_import_into_edm_v1_request_free(lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request) {
    if(NULL == lead_import_into_edm_v1_request){
        return ;
    }
    if(lead_import_into_edm_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "lead_import_into_edm_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (lead_import_into_edm_v1_request->a_obj_attachment) {
        list_ForEach(listEntry, lead_import_into_edm_v1_request->a_obj_attachment) {
            custom_attachment_import_into_edm_request_free(listEntry->data);
        }
        list_freeList(lead_import_into_edm_v1_request->a_obj_attachment);
        lead_import_into_edm_v1_request->a_obj_attachment = NULL;
    }
    free(lead_import_into_edm_v1_request);
}

cJSON *lead_import_into_edm_v1_request_convertToJSON(lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // lead_import_into_edm_v1_request->a_obj_attachment
    if (!lead_import_into_edm_v1_request->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (lead_import_into_edm_v1_request->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, lead_import_into_edm_v1_request->a_obj_attachment) {
    cJSON *itemLocal = custom_attachment_import_into_edm_request_convertToJSON(a_obj_attachmentListEntry->data);
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

lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request_parseFromJSON(cJSON *lead_import_into_edm_v1_requestJSON){

    lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request_local_var = NULL;

    // define the local list for lead_import_into_edm_v1_request->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // lead_import_into_edm_v1_request->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(lead_import_into_edm_v1_requestJSON, "a_objAttachment");
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
        custom_attachment_import_into_edm_request_t *a_obj_attachmentItem = custom_attachment_import_into_edm_request_parseFromJSON(a_obj_attachment_local_nonprimitive);

        list_addElement(a_obj_attachmentList, a_obj_attachmentItem);
    }



    lead_import_into_edm_v1_request_local_var = lead_import_into_edm_v1_request_create_internal (
        a_obj_attachmentList
        );

    if (!lead_import_into_edm_v1_request_local_var) {
        goto end;
    }

    return lead_import_into_edm_v1_request_local_var;
end:
    if (a_obj_attachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentList) {
            custom_attachment_import_into_edm_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentList);
        a_obj_attachmentList = NULL;
    }
    return NULL;

}
