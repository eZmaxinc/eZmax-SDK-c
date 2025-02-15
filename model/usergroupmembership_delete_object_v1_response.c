#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_delete_object_v1_response.h"



static usergroupmembership_delete_object_v1_response_t *usergroupmembership_delete_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    usergroupmembership_delete_object_v1_response_t *usergroupmembership_delete_object_v1_response_local_var = malloc(sizeof(usergroupmembership_delete_object_v1_response_t));
    if (!usergroupmembership_delete_object_v1_response_local_var) {
        return NULL;
    }
    usergroupmembership_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    usergroupmembership_delete_object_v1_response_local_var->obj_debug = obj_debug;

    usergroupmembership_delete_object_v1_response_local_var->_library_owned = 1;
    return usergroupmembership_delete_object_v1_response_local_var;
}

__attribute__((deprecated)) usergroupmembership_delete_object_v1_response_t *usergroupmembership_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return usergroupmembership_delete_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void usergroupmembership_delete_object_v1_response_free(usergroupmembership_delete_object_v1_response_t *usergroupmembership_delete_object_v1_response) {
    if(NULL == usergroupmembership_delete_object_v1_response){
        return ;
    }
    if(usergroupmembership_delete_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupmembership_delete_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(usergroupmembership_delete_object_v1_response->obj_debug_payload);
        usergroupmembership_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (usergroupmembership_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(usergroupmembership_delete_object_v1_response->obj_debug);
        usergroupmembership_delete_object_v1_response->obj_debug = NULL;
    }
    free(usergroupmembership_delete_object_v1_response);
}

cJSON *usergroupmembership_delete_object_v1_response_convertToJSON(usergroupmembership_delete_object_v1_response_t *usergroupmembership_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_delete_object_v1_response->obj_debug_payload
    if (!usergroupmembership_delete_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(usergroupmembership_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // usergroupmembership_delete_object_v1_response->obj_debug
    if(usergroupmembership_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(usergroupmembership_delete_object_v1_response->obj_debug);
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

usergroupmembership_delete_object_v1_response_t *usergroupmembership_delete_object_v1_response_parseFromJSON(cJSON *usergroupmembership_delete_object_v1_responseJSON){

    usergroupmembership_delete_object_v1_response_t *usergroupmembership_delete_object_v1_response_local_var = NULL;

    // define the local variable for usergroupmembership_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for usergroupmembership_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // usergroupmembership_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(usergroupmembership_delete_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // usergroupmembership_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(usergroupmembership_delete_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    usergroupmembership_delete_object_v1_response_local_var = usergroupmembership_delete_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return usergroupmembership_delete_object_v1_response_local_var;
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
