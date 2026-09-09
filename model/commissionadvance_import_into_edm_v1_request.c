#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "commissionadvance_import_into_edm_v1_request.h"



static commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request_create_internal(
    list_t *a_obj_attachment
    ) {
    commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request_local_var = malloc(sizeof(commissionadvance_import_into_edm_v1_request_t));
    if (!commissionadvance_import_into_edm_v1_request_local_var) {
        return NULL;
    }
    memset(commissionadvance_import_into_edm_v1_request_local_var, 0, sizeof(commissionadvance_import_into_edm_v1_request_t));
    commissionadvance_import_into_edm_v1_request_local_var->_library_owned = 1;
    commissionadvance_import_into_edm_v1_request_local_var->a_obj_attachment = a_obj_attachment;
    return commissionadvance_import_into_edm_v1_request_local_var;
}

__attribute__((deprecated)) commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request_create(
    list_t *a_obj_attachment
    ) {
    commissionadvance_import_into_edm_v1_request_t *result = commissionadvance_import_into_edm_v1_request_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void commissionadvance_import_into_edm_v1_request_free(commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request) {
    if(NULL == commissionadvance_import_into_edm_v1_request){
        return ;
    }
    if(commissionadvance_import_into_edm_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "commissionadvance_import_into_edm_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (commissionadvance_import_into_edm_v1_request->a_obj_attachment) {
        list_ForEach(listEntry, commissionadvance_import_into_edm_v1_request->a_obj_attachment) {
            custom_attachment_import_into_edm_request_free(listEntry->data);
        }
        list_freeList(commissionadvance_import_into_edm_v1_request->a_obj_attachment);
        commissionadvance_import_into_edm_v1_request->a_obj_attachment = NULL;
    }
    free(commissionadvance_import_into_edm_v1_request);
}

cJSON *commissionadvance_import_into_edm_v1_request_convertToJSON(commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // commissionadvance_import_into_edm_v1_request->a_obj_attachment
    if (!commissionadvance_import_into_edm_v1_request->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (commissionadvance_import_into_edm_v1_request->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, commissionadvance_import_into_edm_v1_request->a_obj_attachment) {
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

commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request_parseFromJSON(cJSON *commissionadvance_import_into_edm_v1_requestJSON){

    commissionadvance_import_into_edm_v1_request_t *commissionadvance_import_into_edm_v1_request_local_var = NULL;

    // define the local list for commissionadvance_import_into_edm_v1_request->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // commissionadvance_import_into_edm_v1_request->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(commissionadvance_import_into_edm_v1_requestJSON, "a_objAttachment");
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



    commissionadvance_import_into_edm_v1_request_local_var = commissionadvance_import_into_edm_v1_request_create_internal (
        a_obj_attachmentList
        );

    if (!commissionadvance_import_into_edm_v1_request_local_var) {
        goto end;
    }

    return commissionadvance_import_into_edm_v1_request_local_var;
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
