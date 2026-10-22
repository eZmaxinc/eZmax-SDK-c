#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttype_create_object_v1_response_m_payload.h"



static documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_documenttype_id
    ) {
    documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload_local_var = malloc(sizeof(documenttype_create_object_v1_response_m_payload_t));
    if (!documenttype_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(documenttype_create_object_v1_response_m_payload_local_var, 0, sizeof(documenttype_create_object_v1_response_m_payload_t));
    documenttype_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    documenttype_create_object_v1_response_m_payload_local_var->a_pki_documenttype_id = a_pki_documenttype_id;
    return documenttype_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload_create(
    list_t *a_pki_documenttype_id
    ) {
    documenttype_create_object_v1_response_m_payload_t *result = documenttype_create_object_v1_response_m_payload_create_internal (
        a_pki_documenttype_id
        );
    if (!result) {
    }
    return result;
}

void documenttype_create_object_v1_response_m_payload_free(documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload) {
    if(NULL == documenttype_create_object_v1_response_m_payload){
        return ;
    }
    if(documenttype_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttype_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id) {
        list_ForEach(listEntry, documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id) {
            free(listEntry->data);
        }
        list_freeList(documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id);
        documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id = NULL;
    }
    free(documenttype_create_object_v1_response_m_payload);
}

cJSON *documenttype_create_object_v1_response_m_payload_convertToJSON(documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id
    if (!documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id) {
        goto fail;
    }
    cJSON *a_pki_documenttype_id = cJSON_AddArrayToObject(item, "a_pkiDocumenttypeID");
    if(a_pki_documenttype_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_documenttype_idListEntry;
    list_ForEach(a_pki_documenttype_idListEntry, documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id) {
    if(cJSON_AddNumberToObject(a_pki_documenttype_id, "", *(double *)a_pki_documenttype_idListEntry->data) == NULL)
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

documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload_parseFromJSON(cJSON *documenttype_create_object_v1_response_m_payloadJSON){

    documenttype_create_object_v1_response_m_payload_t *documenttype_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id
    list_t *a_pki_documenttype_idList = NULL;

    // documenttype_create_object_v1_response_m_payload->a_pki_documenttype_id
    cJSON *a_pki_documenttype_id = cJSON_GetObjectItemCaseSensitive(documenttype_create_object_v1_response_m_payloadJSON, "a_pkiDocumenttypeID");
    if (cJSON_IsNull(a_pki_documenttype_id)) {
        a_pki_documenttype_id = NULL;
    }
    if (!a_pki_documenttype_id) {
        goto end;
    }

    
    cJSON *a_pki_documenttype_id_local = NULL;
    if(!cJSON_IsArray(a_pki_documenttype_id)) {
        goto end;//primitive container
    }
    a_pki_documenttype_idList = list_createList();

    cJSON_ArrayForEach(a_pki_documenttype_id_local, a_pki_documenttype_id)
    {
        if(!cJSON_IsNumber(a_pki_documenttype_id_local))
        {
            goto end;
        }
        double *a_pki_documenttype_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_documenttype_id_local_value)
        {
            goto end;
        }
        *a_pki_documenttype_id_local_value = a_pki_documenttype_id_local->valuedouble;
        list_addElement(a_pki_documenttype_idList , a_pki_documenttype_id_local_value);
    }



    documenttype_create_object_v1_response_m_payload_local_var = documenttype_create_object_v1_response_m_payload_create_internal (
        a_pki_documenttype_idList
        );

    if (!documenttype_create_object_v1_response_m_payload_local_var) {
        goto end;
    }

    return documenttype_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_documenttype_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_documenttype_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_documenttype_idList);
        a_pki_documenttype_idList = NULL;
    }
    return NULL;

}
