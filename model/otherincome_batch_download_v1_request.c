#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "otherincome_batch_download_v1_request.h"



static otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request_create_internal(
    list_t *a_pki_attachment_id
    ) {
    otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request_local_var = malloc(sizeof(otherincome_batch_download_v1_request_t));
    if (!otherincome_batch_download_v1_request_local_var) {
        return NULL;
    }
    memset(otherincome_batch_download_v1_request_local_var, 0, sizeof(otherincome_batch_download_v1_request_t));
    otherincome_batch_download_v1_request_local_var->_library_owned = 1;
    otherincome_batch_download_v1_request_local_var->a_pki_attachment_id = a_pki_attachment_id;
    return otherincome_batch_download_v1_request_local_var;
}

__attribute__((deprecated)) otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request_create(
    list_t *a_pki_attachment_id
    ) {
    otherincome_batch_download_v1_request_t *result = otherincome_batch_download_v1_request_create_internal (
        a_pki_attachment_id
        );
    if (!result) {
    }
    return result;
}

void otherincome_batch_download_v1_request_free(otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request) {
    if(NULL == otherincome_batch_download_v1_request){
        return ;
    }
    if(otherincome_batch_download_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "otherincome_batch_download_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (otherincome_batch_download_v1_request->a_pki_attachment_id) {
        list_ForEach(listEntry, otherincome_batch_download_v1_request->a_pki_attachment_id) {
            free(listEntry->data);
        }
        list_freeList(otherincome_batch_download_v1_request->a_pki_attachment_id);
        otherincome_batch_download_v1_request->a_pki_attachment_id = NULL;
    }
    free(otherincome_batch_download_v1_request);
}

cJSON *otherincome_batch_download_v1_request_convertToJSON(otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // otherincome_batch_download_v1_request->a_pki_attachment_id
    if (!otherincome_batch_download_v1_request->a_pki_attachment_id) {
        goto fail;
    }
    cJSON *a_pki_attachment_id = cJSON_AddArrayToObject(item, "a_pkiAttachmentID");
    if(a_pki_attachment_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_attachment_idListEntry;
    list_ForEach(a_pki_attachment_idListEntry, otherincome_batch_download_v1_request->a_pki_attachment_id) {
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

otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request_parseFromJSON(cJSON *otherincome_batch_download_v1_requestJSON){

    otherincome_batch_download_v1_request_t *otherincome_batch_download_v1_request_local_var = NULL;

    // define the local list for otherincome_batch_download_v1_request->a_pki_attachment_id
    list_t *a_pki_attachment_idList = NULL;

    // otherincome_batch_download_v1_request->a_pki_attachment_id
    cJSON *a_pki_attachment_id = cJSON_GetObjectItemCaseSensitive(otherincome_batch_download_v1_requestJSON, "a_pkiAttachmentID");
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



    otherincome_batch_download_v1_request_local_var = otherincome_batch_download_v1_request_create_internal (
        a_pki_attachment_idList
        );

    if (!otherincome_batch_download_v1_request_local_var) {
        goto end;
    }

    return otherincome_batch_download_v1_request_local_var;
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
