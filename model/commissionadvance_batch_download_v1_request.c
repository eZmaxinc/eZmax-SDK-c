#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "commissionadvance_batch_download_v1_request.h"



static commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request_local_var = malloc(sizeof(commissionadvance_batch_download_v1_request_t));
    if (!commissionadvance_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(commissionadvance_batch_download_v1_request_local_var, 0, sizeof(commissionadvance_batch_download_v1_request_t));
    commissionadvance_batch_download_v1_request_local_var->_library_owned = 1;
    commissionadvance_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return commissionadvance_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    commissionadvance_batch_download_v1_request_t *result = commissionadvance_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void commissionadvance_batch_download_v1_request_free(commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request) {
    if(NULL == commissionadvance_batch_download_v1_request){
        return ;
    }
    if(commissionadvance_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "commissionadvance_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (commissionadvance_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, commissionadvance_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(commissionadvance_batch_download_v1_request->a_pki_attachment_id);
        commissionadvance_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(commissionadvance_batch_download_v1_request);
}

cJSON *commissionadvance_batch_download_v1_request_convertToJSON(commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // commissionadvance_batch_download_v1_request->a_pki_attachment_id
    if (!commissionadvance_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, commissionadvance_batch_download_v1_request->a_pki_attachment_id) {
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

commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request_parseFromJSON(cJSON *commissionadvance_batch_download_v1_requestJSON){

    commissionadvance_batch_download_v1_request_t *commissionadvance_batch_download_v1_request_local_var = NULL;

    // define the local list for commissionadvance_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // commissionadvance_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(commissionadvance_batch_download_v1_requestJSON, "a_pkiAttachmentID");
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



    commissionadvance_batch_download_v1_request_local_var = commissionadvance_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!commissionadvance_batch_download_v1_request_local_var) {
        goto end;
    }

    return commissionadvance_batch_download_v1_request_local_var;
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
