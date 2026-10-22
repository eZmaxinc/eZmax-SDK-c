#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttype_delete_object_v1_response.h"



static documenttype_delete_object_v1_response_t *documenttype_delete_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    documenttype_delete_object_v1_response_t *documenttype_delete_object_v1_response_local_var = malloc(sizeof(documenttype_delete_object_v1_response_t));
    if (!documenttype_delete_object_v1_response_local_var) {
        return NULL;
    }
    memset(documenttype_delete_object_v1_response_local_var, 0, sizeof(documenttype_delete_object_v1_response_t));
    documenttype_delete_object_v1_response_local_var->_library_owned = 1;
    documenttype_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    documenttype_delete_object_v1_response_local_var->obj_debug = obj_debug;
    return documenttype_delete_object_v1_response_local_var;
}

__attribute__((deprecated)) documenttype_delete_object_v1_response_t *documenttype_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    documenttype_delete_object_v1_response_t *result = documenttype_delete_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
    if (!result) {
    }
    return result;
}

void documenttype_delete_object_v1_response_free(documenttype_delete_object_v1_response_t *documenttype_delete_object_v1_response) {
    if(NULL == documenttype_delete_object_v1_response){
        return ;
    }
    if(documenttype_delete_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttype_delete_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttype_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(documenttype_delete_object_v1_response->obj_debug_payload);
        documenttype_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (documenttype_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(documenttype_delete_object_v1_response->obj_debug);
        documenttype_delete_object_v1_response->obj_debug = NULL;
    }
    free(documenttype_delete_object_v1_response);
}

cJSON *documenttype_delete_object_v1_response_convertToJSON(documenttype_delete_object_v1_response_t *documenttype_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // documenttype_delete_object_v1_response->obj_debug_payload
    if (!documenttype_delete_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(documenttype_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // documenttype_delete_object_v1_response->obj_debug
    if(documenttype_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(documenttype_delete_object_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
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

documenttype_delete_object_v1_response_t *documenttype_delete_object_v1_response_parseFromJSON(cJSON *documenttype_delete_object_v1_responseJSON){

    documenttype_delete_object_v1_response_t *documenttype_delete_object_v1_response_local_var = NULL;

    // define the local variable for documenttype_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for documenttype_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // documenttype_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(documenttype_delete_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // documenttype_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(documenttype_delete_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }



    documenttype_delete_object_v1_response_local_var = documenttype_delete_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    if (!documenttype_delete_object_v1_response_local_var) {
        goto end;
    }

    return documenttype_delete_object_v1_response_local_var;
end:
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    return NULL;

}
