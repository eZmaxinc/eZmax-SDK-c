#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_edit_object_v1_response.h"



signature_edit_object_v1_response_t *signature_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    signature_edit_object_v1_response_t *signature_edit_object_v1_response_local_var = malloc(sizeof(signature_edit_object_v1_response_t));
    if (!signature_edit_object_v1_response_local_var) {
        return NULL;
    }
    signature_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    signature_edit_object_v1_response_local_var->obj_debug = obj_debug;

    return signature_edit_object_v1_response_local_var;
}


void signature_edit_object_v1_response_free(signature_edit_object_v1_response_t *signature_edit_object_v1_response) {
    if(NULL == signature_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(signature_edit_object_v1_response->obj_debug_payload);
        signature_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (signature_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(signature_edit_object_v1_response->obj_debug);
        signature_edit_object_v1_response->obj_debug = NULL;
    }
    free(signature_edit_object_v1_response);
}

cJSON *signature_edit_object_v1_response_convertToJSON(signature_edit_object_v1_response_t *signature_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // signature_edit_object_v1_response->obj_debug_payload
    if(signature_edit_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(signature_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // signature_edit_object_v1_response->obj_debug
    if(signature_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(signature_edit_object_v1_response->obj_debug);
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

signature_edit_object_v1_response_t *signature_edit_object_v1_response_parseFromJSON(cJSON *signature_edit_object_v1_responseJSON){

    signature_edit_object_v1_response_t *signature_edit_object_v1_response_local_var = NULL;

    // define the local variable for signature_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for signature_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // signature_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(signature_edit_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // signature_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(signature_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    signature_edit_object_v1_response_local_var = signature_edit_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return signature_edit_object_v1_response_local_var;
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
