#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_edit_object_v1_response.h"



static subnet_edit_object_v1_response_t *subnet_edit_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    subnet_edit_object_v1_response_t *subnet_edit_object_v1_response_local_var = malloc(sizeof(subnet_edit_object_v1_response_t));
    if (!subnet_edit_object_v1_response_local_var) {
        return NULL;
    }
    subnet_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    subnet_edit_object_v1_response_local_var->obj_debug = obj_debug;

    subnet_edit_object_v1_response_local_var->_library_owned = 1;
    return subnet_edit_object_v1_response_local_var;
}

__attribute__((deprecated)) subnet_edit_object_v1_response_t *subnet_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return subnet_edit_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void subnet_edit_object_v1_response_free(subnet_edit_object_v1_response_t *subnet_edit_object_v1_response) {
    if(NULL == subnet_edit_object_v1_response){
        return ;
    }
    if(subnet_edit_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subnet_edit_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(subnet_edit_object_v1_response->obj_debug_payload);
        subnet_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (subnet_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(subnet_edit_object_v1_response->obj_debug);
        subnet_edit_object_v1_response->obj_debug = NULL;
    }
    free(subnet_edit_object_v1_response);
}

cJSON *subnet_edit_object_v1_response_convertToJSON(subnet_edit_object_v1_response_t *subnet_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // subnet_edit_object_v1_response->obj_debug_payload
    if (!subnet_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(subnet_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // subnet_edit_object_v1_response->obj_debug
    if(subnet_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(subnet_edit_object_v1_response->obj_debug);
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

subnet_edit_object_v1_response_t *subnet_edit_object_v1_response_parseFromJSON(cJSON *subnet_edit_object_v1_responseJSON){

    subnet_edit_object_v1_response_t *subnet_edit_object_v1_response_local_var = NULL;

    // define the local variable for subnet_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for subnet_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // subnet_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(subnet_edit_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // subnet_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(subnet_edit_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    subnet_edit_object_v1_response_local_var = subnet_edit_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return subnet_edit_object_v1_response_local_var;
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
