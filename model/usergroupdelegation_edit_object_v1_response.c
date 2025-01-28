#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupdelegation_edit_object_v1_response.h"



static usergroupdelegation_edit_object_v1_response_t *usergroupdelegation_edit_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    usergroupdelegation_edit_object_v1_response_t *usergroupdelegation_edit_object_v1_response_local_var = malloc(sizeof(usergroupdelegation_edit_object_v1_response_t));
    if (!usergroupdelegation_edit_object_v1_response_local_var) {
        return NULL;
    }
    usergroupdelegation_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    usergroupdelegation_edit_object_v1_response_local_var->obj_debug = obj_debug;

    usergroupdelegation_edit_object_v1_response_local_var->_library_owned = 1;
    return usergroupdelegation_edit_object_v1_response_local_var;
}

__attribute__((deprecated)) usergroupdelegation_edit_object_v1_response_t *usergroupdelegation_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return usergroupdelegation_edit_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void usergroupdelegation_edit_object_v1_response_free(usergroupdelegation_edit_object_v1_response_t *usergroupdelegation_edit_object_v1_response) {
    if(NULL == usergroupdelegation_edit_object_v1_response){
        return ;
    }
    if(usergroupdelegation_edit_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupdelegation_edit_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupdelegation_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(usergroupdelegation_edit_object_v1_response->obj_debug_payload);
        usergroupdelegation_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (usergroupdelegation_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(usergroupdelegation_edit_object_v1_response->obj_debug);
        usergroupdelegation_edit_object_v1_response->obj_debug = NULL;
    }
    free(usergroupdelegation_edit_object_v1_response);
}

cJSON *usergroupdelegation_edit_object_v1_response_convertToJSON(usergroupdelegation_edit_object_v1_response_t *usergroupdelegation_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupdelegation_edit_object_v1_response->obj_debug_payload
    if (!usergroupdelegation_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(usergroupdelegation_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // usergroupdelegation_edit_object_v1_response->obj_debug
    if(usergroupdelegation_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(usergroupdelegation_edit_object_v1_response->obj_debug);
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

usergroupdelegation_edit_object_v1_response_t *usergroupdelegation_edit_object_v1_response_parseFromJSON(cJSON *usergroupdelegation_edit_object_v1_responseJSON){

    usergroupdelegation_edit_object_v1_response_t *usergroupdelegation_edit_object_v1_response_local_var = NULL;

    // define the local variable for usergroupdelegation_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for usergroupdelegation_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // usergroupdelegation_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_edit_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // usergroupdelegation_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_edit_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    usergroupdelegation_edit_object_v1_response_local_var = usergroupdelegation_edit_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return usergroupdelegation_edit_object_v1_response_local_var;
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
