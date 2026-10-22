#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttype_edit_object_v1_request.h"



static documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request_create_internal(
    documenttype_request_compound_t *obj_documenttype
    ) {
    documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request_local_var = malloc(sizeof(documenttype_edit_object_v1_request_t));
    if (!documenttype_edit_object_v1_request_local_var) {
        return NULL;
    }
    memset(documenttype_edit_object_v1_request_local_var, 0, sizeof(documenttype_edit_object_v1_request_t));
    documenttype_edit_object_v1_request_local_var->_library_owned = 1;
    documenttype_edit_object_v1_request_local_var->obj_documenttype = obj_documenttype;
    return documenttype_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request_create(
    documenttype_request_compound_t *obj_documenttype
    ) {
    documenttype_edit_object_v1_request_t *result = documenttype_edit_object_v1_request_create_internal (
        obj_documenttype
        );
    if (!result) {
    }
    return result;
}

void documenttype_edit_object_v1_request_free(documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request) {
    if(NULL == documenttype_edit_object_v1_request){
        return ;
    }
    if(documenttype_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttype_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttype_edit_object_v1_request->obj_documenttype) {
        documenttype_request_compound_free(documenttype_edit_object_v1_request->obj_documenttype);
        documenttype_edit_object_v1_request->obj_documenttype = NULL;
    }
    free(documenttype_edit_object_v1_request);
}

cJSON *documenttype_edit_object_v1_request_convertToJSON(documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // documenttype_edit_object_v1_request->obj_documenttype
    if (!documenttype_edit_object_v1_request->obj_documenttype) {
        goto fail;
    }
    cJSON *obj_documenttype_local_JSON = documenttype_request_compound_convertToJSON(documenttype_edit_object_v1_request->obj_documenttype);
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

documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request_parseFromJSON(cJSON *documenttype_edit_object_v1_requestJSON){

    documenttype_edit_object_v1_request_t *documenttype_edit_object_v1_request_local_var = NULL;

    // define the local variable for documenttype_edit_object_v1_request->obj_documenttype
    documenttype_request_compound_t *obj_documenttype_local_nonprim = NULL;

    // documenttype_edit_object_v1_request->obj_documenttype
    cJSON *obj_documenttype = cJSON_GetObjectItemCaseSensitive(documenttype_edit_object_v1_requestJSON, "objDocumenttype");
    if (cJSON_IsNull(obj_documenttype)) {
        obj_documenttype = NULL;
    }
    if (!obj_documenttype) {
        goto end;
    }

    
    obj_documenttype_local_nonprim = documenttype_request_compound_parseFromJSON(obj_documenttype); //nonprimitive



    documenttype_edit_object_v1_request_local_var = documenttype_edit_object_v1_request_create_internal (
        obj_documenttype_local_nonprim
        );

    if (!documenttype_edit_object_v1_request_local_var) {
        goto end;
    }

    return documenttype_edit_object_v1_request_local_var;
end:
    if (obj_documenttype_local_nonprim) {
        documenttype_request_compound_free(obj_documenttype_local_nonprim);
        obj_documenttype_local_nonprim = NULL;
    }
    return NULL;

}
