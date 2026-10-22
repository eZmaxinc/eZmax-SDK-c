#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documenttypechecklist_delete_object_v1_response.h"



static documenttypechecklist_delete_object_v1_response_t *documenttypechecklist_delete_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    documenttypechecklist_delete_object_v1_response_t *documenttypechecklist_delete_object_v1_response_local_var = malloc(sizeof(documenttypechecklist_delete_object_v1_response_t));
    if (!documenttypechecklist_delete_object_v1_response_local_var) {
        return NULL;
    }
    memset(documenttypechecklist_delete_object_v1_response_local_var, 0, sizeof(documenttypechecklist_delete_object_v1_response_t));
    documenttypechecklist_delete_object_v1_response_local_var->_library_owned = 1;
    documenttypechecklist_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    documenttypechecklist_delete_object_v1_response_local_var->obj_debug = obj_debug;
    return documenttypechecklist_delete_object_v1_response_local_var;
}

__attribute__((deprecated)) documenttypechecklist_delete_object_v1_response_t *documenttypechecklist_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    documenttypechecklist_delete_object_v1_response_t *result = documenttypechecklist_delete_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
    if (!result) {
    }
    return result;
}

void documenttypechecklist_delete_object_v1_response_free(documenttypechecklist_delete_object_v1_response_t *documenttypechecklist_delete_object_v1_response) {
    if(NULL == documenttypechecklist_delete_object_v1_response){
        return ;
    }
    if(documenttypechecklist_delete_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documenttypechecklist_delete_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documenttypechecklist_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(documenttypechecklist_delete_object_v1_response->obj_debug_payload);
        documenttypechecklist_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (documenttypechecklist_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(documenttypechecklist_delete_object_v1_response->obj_debug);
        documenttypechecklist_delete_object_v1_response->obj_debug = NULL;
    }
    free(documenttypechecklist_delete_object_v1_response);
}

cJSON *documenttypechecklist_delete_object_v1_response_convertToJSON(documenttypechecklist_delete_object_v1_response_t *documenttypechecklist_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // documenttypechecklist_delete_object_v1_response->obj_debug_payload
    if (!documenttypechecklist_delete_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(documenttypechecklist_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // documenttypechecklist_delete_object_v1_response->obj_debug
    if(documenttypechecklist_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(documenttypechecklist_delete_object_v1_response->obj_debug);
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

documenttypechecklist_delete_object_v1_response_t *documenttypechecklist_delete_object_v1_response_parseFromJSON(cJSON *documenttypechecklist_delete_object_v1_responseJSON){

    documenttypechecklist_delete_object_v1_response_t *documenttypechecklist_delete_object_v1_response_local_var = NULL;

    // define the local variable for documenttypechecklist_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for documenttypechecklist_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // documenttypechecklist_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_delete_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // documenttypechecklist_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(documenttypechecklist_delete_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }



    documenttypechecklist_delete_object_v1_response_local_var = documenttypechecklist_delete_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    if (!documenttypechecklist_delete_object_v1_response_local_var) {
        goto end;
    }

    return documenttypechecklist_delete_object_v1_response_local_var;
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
