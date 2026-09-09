#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "electronicfundstransfer_batch_download_v1_request.h"



static electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request_local_var = malloc(sizeof(electronicfundstransfer_batch_download_v1_request_t));
    if (!electronicfundstransfer_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(electronicfundstransfer_batch_download_v1_request_local_var, 0, sizeof(electronicfundstransfer_batch_download_v1_request_t));
    electronicfundstransfer_batch_download_v1_request_local_var->_library_owned = 1;
    electronicfundstransfer_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return electronicfundstransfer_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    electronicfundstransfer_batch_download_v1_request_t *result = electronicfundstransfer_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void electronicfundstransfer_batch_download_v1_request_free(electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request) {
    if(NULL == electronicfundstransfer_batch_download_v1_request){
        return ;
    }
    if(electronicfundstransfer_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "electronicfundstransfer_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id);
        electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(electronicfundstransfer_batch_download_v1_request);
}

cJSON *electronicfundstransfer_batch_download_v1_request_convertToJSON(electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id
    if (!electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id) {
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

electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request_parseFromJSON(cJSON *electronicfundstransfer_batch_download_v1_requestJSON){

    electronicfundstransfer_batch_download_v1_request_t *electronicfundstransfer_batch_download_v1_request_local_var = NULL;

    // define the local list for electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // electronicfundstransfer_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_batch_download_v1_requestJSON, "a_pkiAttachmentID");
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



    electronicfundstransfer_batch_download_v1_request_local_var = electronicfundstransfer_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!electronicfundstransfer_batch_download_v1_request_local_var) {
        goto end;
    }

    return electronicfundstransfer_batch_download_v1_request_local_var;
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
