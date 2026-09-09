#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontemp_batch_download_v1_request.h"



static inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request_local_var = malloc(sizeof(inscriptiontemp_batch_download_v1_request_t));
    if (!inscriptiontemp_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(inscriptiontemp_batch_download_v1_request_local_var, 0, sizeof(inscriptiontemp_batch_download_v1_request_t));
    inscriptiontemp_batch_download_v1_request_local_var->_library_owned = 1;
    inscriptiontemp_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return inscriptiontemp_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    inscriptiontemp_batch_download_v1_request_t *result = inscriptiontemp_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void inscriptiontemp_batch_download_v1_request_free(inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request) {
    if(NULL == inscriptiontemp_batch_download_v1_request){
        return ;
    }
    if(inscriptiontemp_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptiontemp_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontemp_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, inscriptiontemp_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(inscriptiontemp_batch_download_v1_request->a_pki_attachment_id);
        inscriptiontemp_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(inscriptiontemp_batch_download_v1_request);
}

cJSON *inscriptiontemp_batch_download_v1_request_convertToJSON(inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontemp_batch_download_v1_request->a_pki_attachment_id
    if (!inscriptiontemp_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, inscriptiontemp_batch_download_v1_request->a_pki_attachment_id) {
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

inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request_parseFromJSON(cJSON *inscriptiontemp_batch_download_v1_requestJSON){

    inscriptiontemp_batch_download_v1_request_t *inscriptiontemp_batch_download_v1_request_local_var = NULL;

    // define the local list for inscriptiontemp_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // inscriptiontemp_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_batch_download_v1_requestJSON, "a_pkiAttachmentID");
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



    inscriptiontemp_batch_download_v1_request_local_var = inscriptiontemp_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!inscriptiontemp_batch_download_v1_request_local_var) {
        goto end;
    }

    return inscriptiontemp_batch_download_v1_request_local_var;
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
