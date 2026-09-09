#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "broker_batch_download_v1_request.h"



static broker_batch_download_v1_request_t *broker_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    broker_batch_download_v1_request_t *broker_batch_download_v1_request_local_var = malloc(sizeof(broker_batch_download_v1_request_t));
    if (!broker_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(broker_batch_download_v1_request_local_var, 0, sizeof(broker_batch_download_v1_request_t));
    broker_batch_download_v1_request_local_var->_library_owned = 1;
    broker_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return broker_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) broker_batch_download_v1_request_t *broker_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    broker_batch_download_v1_request_t *result = broker_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void broker_batch_download_v1_request_free(broker_batch_download_v1_request_t *broker_batch_download_v1_request) {
    if(NULL == broker_batch_download_v1_request){
        return ;
    }
    if(broker_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "broker_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (broker_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, broker_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(broker_batch_download_v1_request->a_pki_attachment_id);
        broker_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(broker_batch_download_v1_request);
}

cJSON *broker_batch_download_v1_request_convertToJSON(broker_batch_download_v1_request_t *broker_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // broker_batch_download_v1_request->a_pki_attachment_id
    if (!broker_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, broker_batch_download_v1_request->a_pki_attachment_id) {
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

broker_batch_download_v1_request_t *broker_batch_download_v1_request_parseFromJSON(cJSON *broker_batch_download_v1_requestJSON){

    broker_batch_download_v1_request_t *broker_batch_download_v1_request_local_var = NULL;

    // define the local list for broker_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // broker_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(broker_batch_download_v1_requestJSON, "a_pkiAttachmentID");
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



    broker_batch_download_v1_request_local_var = broker_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!broker_batch_download_v1_request_local_var) {
        goto end;
    }

    return broker_batch_download_v1_request_local_var;
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
