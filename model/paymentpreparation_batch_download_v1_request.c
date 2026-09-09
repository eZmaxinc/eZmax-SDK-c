#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentpreparation_batch_download_v1_request.h"



static paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request_local_var = malloc(sizeof(paymentpreparation_batch_download_v1_request_t));
    if (!paymentpreparation_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(paymentpreparation_batch_download_v1_request_local_var, 0, sizeof(paymentpreparation_batch_download_v1_request_t));
    paymentpreparation_batch_download_v1_request_local_var->_library_owned = 1;
    paymentpreparation_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return paymentpreparation_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    paymentpreparation_batch_download_v1_request_t *result = paymentpreparation_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void paymentpreparation_batch_download_v1_request_free(paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request) {
    if(NULL == paymentpreparation_batch_download_v1_request){
        return ;
    }
    if(paymentpreparation_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentpreparation_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentpreparation_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, paymentpreparation_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(paymentpreparation_batch_download_v1_request->a_pki_attachment_id);
        paymentpreparation_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(paymentpreparation_batch_download_v1_request);
}

cJSON *paymentpreparation_batch_download_v1_request_convertToJSON(paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // paymentpreparation_batch_download_v1_request->a_pki_attachment_id
    if (!paymentpreparation_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, paymentpreparation_batch_download_v1_request->a_pki_attachment_id) {
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

paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request_parseFromJSON(cJSON *paymentpreparation_batch_download_v1_requestJSON){

    paymentpreparation_batch_download_v1_request_t *paymentpreparation_batch_download_v1_request_local_var = NULL;

    // define the local list for paymentpreparation_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // paymentpreparation_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(paymentpreparation_batch_download_v1_requestJSON, "a_pkiAttachmentID");
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



    paymentpreparation_batch_download_v1_request_local_var = paymentpreparation_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!paymentpreparation_batch_download_v1_request_local_var) {
        goto end;
    }

    return paymentpreparation_batch_download_v1_request_local_var;
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
