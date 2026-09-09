#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bankaccount_batch_download_v1_request.h"



static bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request_local_var = malloc(sizeof(bankaccount_batch_download_v1_request_t));
    if (!bankaccount_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(bankaccount_batch_download_v1_request_local_var, 0, sizeof(bankaccount_batch_download_v1_request_t));
    bankaccount_batch_download_v1_request_local_var->_library_owned = 1;
    bankaccount_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return bankaccount_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    bankaccount_batch_download_v1_request_t *result = bankaccount_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void bankaccount_batch_download_v1_request_free(bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request) {
    if(NULL == bankaccount_batch_download_v1_request){
        return ;
    }
    if(bankaccount_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "bankaccount_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (bankaccount_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, bankaccount_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(bankaccount_batch_download_v1_request->a_pki_attachment_id);
        bankaccount_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(bankaccount_batch_download_v1_request);
}

cJSON *bankaccount_batch_download_v1_request_convertToJSON(bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // bankaccount_batch_download_v1_request->a_pki_attachment_id
    if (!bankaccount_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, bankaccount_batch_download_v1_request->a_pki_attachment_id) {
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

bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request_parseFromJSON(cJSON *bankaccount_batch_download_v1_requestJSON){

    bankaccount_batch_download_v1_request_t *bankaccount_batch_download_v1_request_local_var = NULL;

    // define the local list for bankaccount_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // bankaccount_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(bankaccount_batch_download_v1_requestJSON, "a_pkiAttachmentID");
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



    bankaccount_batch_download_v1_request_local_var = bankaccount_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!bankaccount_batch_download_v1_request_local_var) {
        goto end;
    }

    return bankaccount_batch_download_v1_request_local_var;
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
