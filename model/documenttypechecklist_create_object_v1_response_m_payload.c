#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_create_object_v1_response_m_payload.h"



static documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_documenttypechecklist_id
    ) {
    documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload_local_var = malloc(sizeof(documenttypechecklist_create_object_v1_response_m_payload_t));
    if (!documenttypechecklist_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_create_object_v1_response_m_payload_local_var, 0, sizeof(documenttypechecklist_create_object_v1_response_m_payload_t));
    documenttypechecklist_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    documenttypechecklist_create_object_v1_response_m_payload_local_var->a_pki_documenttypechecklist_id = a_pki_documenttypechecklist_id;
    return documenttypechecklist_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload_create(
    list_t *a_pki_documenttypechecklist_id
    ) {
    documenttypechecklist_create_object_v1_response_m_payload_t *result = documenttypechecklist_create_object_v1_response_m_payload_create_internal (
        a_pki_documenttypechecklist_id
        );
    if (!result) {
    }
    return result;
}

void documenttypechecklist_create_object_v1_response_m_payload_free(documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload) {
    if(NULL == documenttypechecklist_create_object_v1_response_m_payload){
        return ;
    }
    if(documenttypechecklist_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id) {
        list_ForEach(listEntry, documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id) {
            free(listEntry->data);
        }
        list_freeList(documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id);
        documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id = NULL;
    }
    free(documenttypechecklist_create_object_v1_response_m_payload);
}

cJSON *documenttypechecklist_create_object_v1_response_m_payload_convertToJSON(documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id
    if (!documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id) {
        goto fail;
    }
    cJSON *a_pki_documenttypechecklist_id = cJSON_AddArrayToObject(item, "a_pkiDocumenttypechecklistID");
    if(a_pki_documenttypechecklist_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_documenttypechecklist_idListEntry;
    list_ForEach(a_pki_documenttypechecklist_idListEntry, documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id) {
    if(cJSON_AddNumberToObject(a_pki_documenttypechecklist_id, "", *(double *)a_pki_documenttypechecklist_idListEntry->data) == NULL)
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

documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload_parseFromJSON(cJSON *documenttypechecklist_create_object_v1_response_m_payloadJSON){

    documenttypechecklist_create_object_v1_response_m_payload_t *documenttypechecklist_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id
    list_t *a_pki_documenttypechecklist_idList = NULL;

    // documenttypechecklist_create_object_v1_response_m_payload->a_pki_documenttypechecklist_id
    cJSON *a_pki_documenttypechecklist_id = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_create_object_v1_response_m_payloadJSON, "a_pkiDocumenttypechecklistID");
    if (cJSON_IsNull(a_pki_documenttypechecklist_id)) {
        a_pki_documenttypechecklist_id = NULL;
    }
    if (!a_pki_documenttypechecklist_id) {
        goto end;
    }

    
    cJSON *a_pki_documenttypechecklist_id_local = NULL;
    if(!cJSON_IsArray(a_pki_documenttypechecklist_id)) {
        goto end;//primitive container
    }
    a_pki_documenttypechecklist_idList = list_createList();

    cJSON_ArrayForEach(a_pki_documenttypechecklist_id_local, a_pki_documenttypechecklist_id)
    {
        if(!cJSON_IsNumber(a_pki_documenttypechecklist_id_local))
        {
            goto end;
        }
        double *a_pki_documenttypechecklist_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_documenttypechecklist_id_local_value)
        {
            goto end;
        }
        *a_pki_documenttypechecklist_id_local_value = a_pki_documenttypechecklist_id_local->valuedouble;
        list_addElement(a_pki_documenttypechecklist_idList , a_pki_documenttypechecklist_id_local_value);
    }



    documenttypechecklist_create_object_v1_response_m_payload_local_var = documenttypechecklist_create_object_v1_response_m_payload_create_internal (
        a_pki_documenttypechecklist_idList
        );

    if (!documenttypechecklist_create_object_v1_response_m_payload_local_var) {
        goto end;
    }

    return documenttypechecklist_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_documenttypechecklist_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_documenttypechecklist_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_documenttypechecklist_idList);
        a_pki_documenttypechecklist_idList = NULL;
    }
    return NULL;

}
