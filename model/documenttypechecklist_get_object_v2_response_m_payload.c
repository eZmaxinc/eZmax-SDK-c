#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_get_object_v2_response_m_payload.h"



static documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload_create_internal(
    documenttypechecklist_response_compound_t *obj_documenttypechecklist
    ) {
    documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload_local_var = malloc(sizeof(documenttypechecklist_get_object_v2_response_m_payload_t));
    if (!documenttypechecklist_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_get_object_v2_response_m_payload_local_var, 0, sizeof(documenttypechecklist_get_object_v2_response_m_payload_t));
    documenttypechecklist_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    documenttypechecklist_get_object_v2_response_m_payload_local_var->obj_documenttypechecklist = obj_documenttypechecklist;
    return documenttypechecklist_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload_create(
    documenttypechecklist_response_compound_t *obj_documenttypechecklist
    ) {
    documenttypechecklist_get_object_v2_response_m_payload_t *result = documenttypechecklist_get_object_v2_response_m_payload_create_internal (
        obj_documenttypechecklist
        );
    if (!result) {
    }
    return result;
}

void documenttypechecklist_get_object_v2_response_m_payload_free(documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload) {
    if(NULL == documenttypechecklist_get_object_v2_response_m_payload){
        return ;
    }
    if(documenttypechecklist_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_get_object_v2_response_m_payload->obj_documenttypechecklist) {
        documenttypechecklist_response_compound_free(documenttypechecklist_get_object_v2_response_m_payload->obj_documenttypechecklist);
        documenttypechecklist_get_object_v2_response_m_payload->obj_documenttypechecklist = NULL;
    }
    free(documenttypechecklist_get_object_v2_response_m_payload);
}

cJSON *documenttypechecklist_get_object_v2_response_m_payload_convertToJSON(documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_get_object_v2_response_m_payload->obj_documenttypechecklist
    if (!documenttypechecklist_get_object_v2_response_m_payload->obj_documenttypechecklist) {
        goto fail;
    }
    cJSON *obj_documenttypechecklist_local_JSON = documenttypechecklist_response_compound_convertToJSON(documenttypechecklist_get_object_v2_response_m_payload->obj_documenttypechecklist);
    if(obj_documenttypechecklist_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDocumenttypechecklist", obj_documenttypechecklist_local_JSON);
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

documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload_parseFromJSON(cJSON *documenttypechecklist_get_object_v2_response_m_payloadJSON){

    documenttypechecklist_get_object_v2_response_m_payload_t *documenttypechecklist_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for documenttypechecklist_get_object_v2_response_m_payload->obj_documenttypechecklist
    documenttypechecklist_response_compound_t *obj_documenttypechecklist_local_nonprim = NULL;

    // documenttypechecklist_get_object_v2_response_m_payload->obj_documenttypechecklist
    cJSON *obj_documenttypechecklist = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_get_object_v2_response_m_payloadJSON, "objDocumenttypechecklist");
    if (cJSON_IsNull(obj_documenttypechecklist)) {
        obj_documenttypechecklist = NULL;
    }
    if (!obj_documenttypechecklist) {
        goto end;
    }

    
    obj_documenttypechecklist_local_nonprim = documenttypechecklist_response_compound_parseFromJSON(obj_documenttypechecklist); //nonprimitive



    documenttypechecklist_get_object_v2_response_m_payload_local_var = documenttypechecklist_get_object_v2_response_m_payload_create_internal (
        obj_documenttypechecklist_local_nonprim
        );

    if (!documenttypechecklist_get_object_v2_response_m_payload_local_var) {
        goto end;
    }

    return documenttypechecklist_get_object_v2_response_m_payload_local_var;
end:
    if (obj_documenttypechecklist_local_nonprim) {
        documenttypechecklist_response_compound_free(obj_documenttypechecklist_local_nonprim);
        obj_documenttypechecklist_local_nonprim = NULL;
    }
    return NULL;

}
