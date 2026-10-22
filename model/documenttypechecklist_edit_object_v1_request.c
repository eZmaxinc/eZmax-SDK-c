#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_edit_object_v1_request.h"



static documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request_create_internal(
    documenttypechecklist_request_compound_t *obj_documenttypechecklist
    ) {
    documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request_local_var = malloc(sizeof(documenttypechecklist_edit_object_v1_request_t));
    if (!documenttypechecklist_edit_object_v1_request_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_edit_object_v1_request_local_var, 0, sizeof(documenttypechecklist_edit_object_v1_request_t));
    documenttypechecklist_edit_object_v1_request_local_var->_library_owned = 1;
    documenttypechecklist_edit_object_v1_request_local_var->obj_documenttypechecklist = obj_documenttypechecklist;
    return documenttypechecklist_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request_create(
    documenttypechecklist_request_compound_t *obj_documenttypechecklist
    ) {
    documenttypechecklist_edit_object_v1_request_t *result = documenttypechecklist_edit_object_v1_request_create_internal (
        obj_documenttypechecklist
        );
    if (!result) {
    }
    return result;
}

void documenttypechecklist_edit_object_v1_request_free(documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request) {
    if(NULL == documenttypechecklist_edit_object_v1_request){
        return ;
    }
    if(documenttypechecklist_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_edit_object_v1_request->obj_documenttypechecklist) {
        documenttypechecklist_request_compound_free(documenttypechecklist_edit_object_v1_request->obj_documenttypechecklist);
        documenttypechecklist_edit_object_v1_request->obj_documenttypechecklist = NULL;
    }
    free(documenttypechecklist_edit_object_v1_request);
}

cJSON *documenttypechecklist_edit_object_v1_request_convertToJSON(documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_edit_object_v1_request->obj_documenttypechecklist
    if (!documenttypechecklist_edit_object_v1_request->obj_documenttypechecklist) {
        goto fail;
    }
    cJSON *obj_documenttypechecklist_local_JSON = documenttypechecklist_request_compound_convertToJSON(documenttypechecklist_edit_object_v1_request->obj_documenttypechecklist);
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

documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request_parseFromJSON(cJSON *documenttypechecklist_edit_object_v1_requestJSON){

    documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request_local_var = NULL;

    // define the local variable for documenttypechecklist_edit_object_v1_request->obj_documenttypechecklist
    documenttypechecklist_request_compound_t *obj_documenttypechecklist_local_nonprim = NULL;

    // documenttypechecklist_edit_object_v1_request->obj_documenttypechecklist
    cJSON *obj_documenttypechecklist = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_edit_object_v1_requestJSON, "objDocumenttypechecklist");
    if (cJSON_IsNull(obj_documenttypechecklist)) {
        obj_documenttypechecklist = NULL;
    }
    if (!obj_documenttypechecklist) {
        goto end;
    }

    
    obj_documenttypechecklist_local_nonprim = documenttypechecklist_request_compound_parseFromJSON(obj_documenttypechecklist); //nonprimitive



    documenttypechecklist_edit_object_v1_request_local_var = documenttypechecklist_edit_object_v1_request_create_internal (
        obj_documenttypechecklist_local_nonprim
        );

    if (!documenttypechecklist_edit_object_v1_request_local_var) {
        goto end;
    }

    return documenttypechecklist_edit_object_v1_request_local_var;
end:
    if (obj_documenttypechecklist_local_nonprim) {
        documenttypechecklist_request_compound_free(obj_documenttypechecklist_local_nonprim);
        obj_documenttypechecklist_local_nonprim = NULL;
    }
    return NULL;

}
