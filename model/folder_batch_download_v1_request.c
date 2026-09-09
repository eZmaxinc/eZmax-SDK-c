#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "folder_batch_download_v1_request.h"



static folder_batch_download_v1_request_t *folder_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    folder_batch_download_v1_request_t *folder_batch_download_v1_request_local_var = malloc(sizeof(folder_batch_download_v1_request_t));
    if (!folder_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(folder_batch_download_v1_request_local_var, 0, sizeof(folder_batch_download_v1_request_t));
    folder_batch_download_v1_request_local_var->_library_owned = 1;
    folder_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return folder_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) folder_batch_download_v1_request_t *folder_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    folder_batch_download_v1_request_t *result = folder_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void folder_batch_download_v1_request_free(folder_batch_download_v1_request_t *folder_batch_download_v1_request) {
    if(NULL == folder_batch_download_v1_request){
        return ;
    }
    if(folder_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "folder_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (folder_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, folder_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(folder_batch_download_v1_request->a_pki_attachment_id);
        folder_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(folder_batch_download_v1_request);
}

cJSON *folder_batch_download_v1_request_convertToJSON(folder_batch_download_v1_request_t *folder_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // folder_batch_download_v1_request->a_pki_attachment_id
    if (!folder_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, folder_batch_download_v1_request->a_pki_attachment_id) {
    if(cJSON_AddNumberToObject(a_pki_attachment_id, "", *(double *)a_pki_attachment_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

folder_batch_download_v1_request_t *folder_batch_download_v1_request_parseFromJSON(cJSON *folder_batch_download_v1_requestJSON){

    folder_batch_download_v1_request_t *folder_batch_download_v1_request_local_var = NULL;

    // define the local list for folder_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // folder_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(folder_batch_download_v1_requestJSON, "a_pkiAttachmentID");
    if (cJSON_IsNull(a_pki_attachment_id)) {
        a_pki_attachment_id = NULL;
    }
    if (!a_pki_attachment_id) {
        goto end;
    }

    
    cJSON *a_pki_attachment_id_local = NULL;
    if(!cJSON_IsArray(a_pki_attachment_id)) {
        goto end;//primitive container
    }
    a_pki_attachment_idList = list_createList();

    cJSON_ArrayForEach(a_pki_attachment_id_local, a_pki_attachment_id)
    {
        if(!cJSON_IsNumber(a_pki_attachment_id_local))
        {
            goto end;
        }
        double *a_pki_attachment_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_attachment_id_local_value)
        {
            goto end;
        }
        *a_pki_attachment_id_local_value = a_pki_attachment_id_local->valuedouble;
        list_addElement(a_pki_attachment_idList , a_pki_attachment_id_local_value);
    }



    folder_batch_download_v1_request_local_var = folder_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!folder_batch_download_v1_request_local_var) {
        goto end;
    }

    return folder_batch_download_v1_request_local_var;
end:
    if (a_pki_attachment_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_attachment_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_attachment_idList);
        a_pki_attachment_idList = NULL;
    }
    return NULL;

}
