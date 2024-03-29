#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_edit_object_v1_response.h"



permission_edit_object_v1_response_t *permission_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    permission_edit_object_v1_response_t *permission_edit_object_v1_response_local_var = malloc(sizeof(permission_edit_object_v1_response_t));
    if (!permission_edit_object_v1_response_local_var) {
        return NULL;
    }
    permission_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    permission_edit_object_v1_response_local_var->obj_debug = obj_debug;

    return permission_edit_object_v1_response_local_var;
}


void permission_edit_object_v1_response_free(permission_edit_object_v1_response_t *permission_edit_object_v1_response) {
    if(NULL == permission_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (permission_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(permission_edit_object_v1_response->obj_debug_payload);
        permission_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (permission_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(permission_edit_object_v1_response->obj_debug);
        permission_edit_object_v1_response->obj_debug = NULL;
    }
    free(permission_edit_object_v1_response);
}

cJSON *permission_edit_object_v1_response_convertToJSON(permission_edit_object_v1_response_t *permission_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // permission_edit_object_v1_response->obj_debug_payload
    if(permission_edit_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(permission_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // permission_edit_object_v1_response->obj_debug
    if(permission_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(permission_edit_object_v1_response->obj_debug);
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

permission_edit_object_v1_response_t *permission_edit_object_v1_response_parseFromJSON(cJSON *permission_edit_object_v1_responseJSON){

    permission_edit_object_v1_response_t *permission_edit_object_v1_response_local_var = NULL;

    // define the local variable for permission_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for permission_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // permission_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(permission_edit_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // permission_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(permission_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    permission_edit_object_v1_response_local_var = permission_edit_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return permission_edit_object_v1_response_local_var;
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
