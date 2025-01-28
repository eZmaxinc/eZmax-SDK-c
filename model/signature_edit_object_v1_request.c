#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_edit_object_v1_request.h"



static signature_edit_object_v1_request_t *signature_edit_object_v1_request_create_internal(
    signature_request_compound_t *obj_signature
    ) {
    signature_edit_object_v1_request_t *signature_edit_object_v1_request_local_var = malloc(sizeof(signature_edit_object_v1_request_t));
    if (!signature_edit_object_v1_request_local_var) {
        return NULL;
    }
    signature_edit_object_v1_request_local_var->obj_signature = obj_signature;

    signature_edit_object_v1_request_local_var->_library_owned = 1;
    return signature_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) signature_edit_object_v1_request_t *signature_edit_object_v1_request_create(
    signature_request_compound_t *obj_signature
    ) {
    return signature_edit_object_v1_request_create_internal (
        obj_signature
        );
}

void signature_edit_object_v1_request_free(signature_edit_object_v1_request_t *signature_edit_object_v1_request) {
    if(NULL == signature_edit_object_v1_request){
        return ;
    }
    if(signature_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "signature_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (signature_edit_object_v1_request->obj_signature) {
        signature_request_compound_free(signature_edit_object_v1_request->obj_signature);
        signature_edit_object_v1_request->obj_signature = NULL;
    }
    free(signature_edit_object_v1_request);
}

cJSON *signature_edit_object_v1_request_convertToJSON(signature_edit_object_v1_request_t *signature_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // signature_edit_object_v1_request->obj_signature
    if (!signature_edit_object_v1_request->obj_signature) {
        goto fail;
    }
    cJSON *obj_signature_local_JSON = signature_request_compound_convertToJSON(signature_edit_object_v1_request->obj_signature);
    if(obj_signature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSignature", obj_signature_local_JSON);
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

signature_edit_object_v1_request_t *signature_edit_object_v1_request_parseFromJSON(cJSON *signature_edit_object_v1_requestJSON){

    signature_edit_object_v1_request_t *signature_edit_object_v1_request_local_var = NULL;

    // define the local variable for signature_edit_object_v1_request->obj_signature
    signature_request_compound_t *obj_signature_local_nonprim = NULL;

    // signature_edit_object_v1_request->obj_signature
    cJSON *obj_signature = cJSON_GetObjectItemCaseSensitive(signature_edit_object_v1_requestJSON, "objSignature");
    if (cJSON_IsNull(obj_signature)) {
        obj_signature = NULL;
    }
    if (!obj_signature) {
        goto end;
    }

    
    obj_signature_local_nonprim = signature_request_compound_parseFromJSON(obj_signature); //nonprimitive


    signature_edit_object_v1_request_local_var = signature_edit_object_v1_request_create_internal (
        obj_signature_local_nonprim
        );

    return signature_edit_object_v1_request_local_var;
end:
    if (obj_signature_local_nonprim) {
        signature_request_compound_free(obj_signature_local_nonprim);
        obj_signature_local_nonprim = NULL;
    }
    return NULL;

}
