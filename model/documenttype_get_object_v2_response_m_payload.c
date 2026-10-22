#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttype_get_object_v2_response_m_payload.h"



static documenttype_get_object_v2_response_m_payload_t *documenttype_get_object_v2_response_m_payload_create_internal(
    documenttype_response_compound_t *obj_documenttype
    ) {
    documenttype_get_object_v2_response_m_payload_t *documenttype_get_object_v2_response_m_payload_local_var = malloc(sizeof(documenttype_get_object_v2_response_m_payload_t));
    if (!documenttype_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(documenttype_get_object_v2_response_m_payload_local_var, 0, sizeof(documenttype_get_object_v2_response_m_payload_t));
    documenttype_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    documenttype_get_object_v2_response_m_payload_local_var->obj_documenttype = obj_documenttype;
    return documenttype_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) documenttype_get_object_v2_response_m_payload_t *documenttype_get_object_v2_response_m_payload_create(
    documenttype_response_compound_t *obj_documenttype
    ) {
    documenttype_get_object_v2_response_m_payload_t *result = documenttype_get_object_v2_response_m_payload_create_internal (
        obj_documenttype
        );
    if (!result) {
    }
    return result;
}

void documenttype_get_object_v2_response_m_payload_free(documenttype_get_object_v2_response_m_payload_t *documenttype_get_object_v2_response_m_payload) {
    if(NULL == documenttype_get_object_v2_response_m_payload){
        return ;
    }
    if(documenttype_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttype_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttype_get_object_v2_response_m_payload->obj_documenttype) {
        documenttype_response_compound_free(documenttype_get_object_v2_response_m_payload->obj_documenttype);
        documenttype_get_object_v2_response_m_payload->obj_documenttype = NULL;
    }
    free(documenttype_get_object_v2_response_m_payload);
}

cJSON *documenttype_get_object_v2_response_m_payload_convertToJSON(documenttype_get_object_v2_response_m_payload_t *documenttype_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // documenttype_get_object_v2_response_m_payload->obj_documenttype
    if (!documenttype_get_object_v2_response_m_payload->obj_documenttype) {
        goto fail;
    }
    cJSON *obj_documenttype_local_JSON = documenttype_response_compound_convertToJSON(documenttype_get_object_v2_response_m_payload->obj_documenttype);
    if(obj_documenttype_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDocumenttype", obj_documenttype_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documenttype_get_object_v2_response_m_payload_t *documenttype_get_object_v2_response_m_payload_parseFromJSON(cJSON *documenttype_get_object_v2_response_m_payloadJSON){

    documenttype_get_object_v2_response_m_payload_t *documenttype_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for documenttype_get_object_v2_response_m_payload->obj_documenttype
    documenttype_response_compound_t *obj_documenttype_local_nonprim = NULL;

    // documenttype_get_object_v2_response_m_payload->obj_documenttype
    cJSON *obj_documenttype = cJSON_GetObjectItemCaseSensitive(documenttype_get_object_v2_response_m_payloadJSON, "objDocumenttype");
    if (cJSON_IsNull(obj_documenttype)) {
        obj_documenttype = NULL;
    }
    if (!obj_documenttype) {
        goto end;
    }

    
    obj_documenttype_local_nonprim = documenttype_response_compound_parseFromJSON(obj_documenttype); //nonprimitive



    documenttype_get_object_v2_response_m_payload_local_var = documenttype_get_object_v2_response_m_payload_create_internal (
        obj_documenttype_local_nonprim
        );

    if (!documenttype_get_object_v2_response_m_payload_local_var) {
        goto end;
    }

    return documenttype_get_object_v2_response_m_payload_local_var;
end:
    if (obj_documenttype_local_nonprim) {
        documenttype_response_compound_free(obj_documenttype_local_nonprim);
        obj_documenttype_local_nonprim = NULL;
    }
    return NULL;

}
