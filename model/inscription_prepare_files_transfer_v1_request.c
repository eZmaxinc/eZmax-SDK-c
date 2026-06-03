#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_prepare_files_transfer_v1_request.h"



static inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request_create_internal(
    list_t *a_obj_attachment
    ) {
    inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request_local_var = malloc(sizeof(inscription_prepare_files_transfer_v1_request_t));
    if (!inscription_prepare_files_transfer_v1_request_local_var) {
        return NULL;
    }
    memset(inscription_prepare_files_transfer_v1_request_local_var, 0, sizeof(inscription_prepare_files_transfer_v1_request_t));
    inscription_prepare_files_transfer_v1_request_local_var->_library_owned = 1;
    inscription_prepare_files_transfer_v1_request_local_var->a_obj_attachment = a_obj_attachment;
    return inscription_prepare_files_transfer_v1_request_local_var;
}

__attribute__((deprecated)) inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request_create(
    list_t *a_obj_attachment
    ) {
    inscription_prepare_files_transfer_v1_request_t *result = inscription_prepare_files_transfer_v1_request_create_internal (
        a_obj_attachment
        );
    if (!result) {
    }
    return result;
}

void inscription_prepare_files_transfer_v1_request_free(inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request) {
    if(NULL == inscription_prepare_files_transfer_v1_request){
        return ;
    }
    if(inscription_prepare_files_transfer_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_prepare_files_transfer_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_prepare_files_transfer_v1_request->a_obj_attachment) {
        list_ForEach(listEntry, inscription_prepare_files_transfer_v1_request->a_obj_attachment) {
            custom_attachment_prepare_files_transfer_request_free(listEntry->data);
        }
        list_freeList(inscription_prepare_files_transfer_v1_request->a_obj_attachment);
        inscription_prepare_files_transfer_v1_request->a_obj_attachment = NULL;
    }
    free(inscription_prepare_files_transfer_v1_request);
}

cJSON *inscription_prepare_files_transfer_v1_request_convertToJSON(inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // inscription_prepare_files_transfer_v1_request->a_obj_attachment
    if (!inscription_prepare_files_transfer_v1_request->a_obj_attachment) {
        goto fail;
    }
    cJSON *a_obj_attachment = cJSON_AddArrayToObject(item, "a_objAttachment");
    if(a_obj_attachment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attachmentListEntry;
    if (inscription_prepare_files_transfer_v1_request->a_obj_attachment) {
    list_ForEach(a_obj_attachmentListEntry, inscription_prepare_files_transfer_v1_request->a_obj_attachment) {
    cJSON *itemLocal = custom_attachment_prepare_files_transfer_request_convertToJSON(a_obj_attachmentListEntry->data);
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

inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request_parseFromJSON(cJSON *inscription_prepare_files_transfer_v1_requestJSON){

    inscription_prepare_files_transfer_v1_request_t *inscription_prepare_files_transfer_v1_request_local_var = NULL;

    // define the local list for inscription_prepare_files_transfer_v1_request->a_obj_attachment
    list_t *a_obj_attachmentList = NULL;

    // inscription_prepare_files_transfer_v1_request->a_obj_attachment
    cJSON *a_obj_attachment = cJSON_GetObjectItemCaseSensitive(inscription_prepare_files_transfer_v1_requestJSON, "a_objAttachment");
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
        custom_attachment_prepare_files_transfer_request_t *a_obj_attachmentItem = custom_attachment_prepare_files_transfer_request_parseFromJSON(a_obj_attachment_local_nonprimitive);

        list_addElement(a_obj_attachmentList, a_obj_attachmentItem);
    }



    inscription_prepare_files_transfer_v1_request_local_var = inscription_prepare_files_transfer_v1_request_create_internal (
        a_obj_attachmentList
        );

    if (!inscription_prepare_files_transfer_v1_request_local_var) {
        goto end;
    }

    return inscription_prepare_files_transfer_v1_request_local_var;
end:
    if (a_obj_attachmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attachmentList) {
            custom_attachment_prepare_files_transfer_request_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attachmentList);
        a_obj_attachmentList = NULL;
    }
    return NULL;

}
