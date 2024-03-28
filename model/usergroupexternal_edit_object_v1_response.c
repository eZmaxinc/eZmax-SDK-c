#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_edit_object_v1_response.h"



usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response_local_var = malloc(sizeof(usergroupexternal_edit_object_v1_response_t));
    if (!usergroupexternal_edit_object_v1_response_local_var) {
        return NULL;
    }
    usergroupexternal_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    usergroupexternal_edit_object_v1_response_local_var->obj_debug = obj_debug;

    return usergroupexternal_edit_object_v1_response_local_var;
}


void usergroupexternal_edit_object_v1_response_free(usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response) {
    if(NULL == usergroupexternal_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(usergroupexternal_edit_object_v1_response->obj_debug_payload);
        usergroupexternal_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (usergroupexternal_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(usergroupexternal_edit_object_v1_response->obj_debug);
        usergroupexternal_edit_object_v1_response->obj_debug = NULL;
    }
    free(usergroupexternal_edit_object_v1_response);
}

cJSON *usergroupexternal_edit_object_v1_response_convertToJSON(usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_edit_object_v1_response->obj_debug_payload
    if (!usergroupexternal_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(usergroupexternal_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // usergroupexternal_edit_object_v1_response->obj_debug
    if(usergroupexternal_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(usergroupexternal_edit_object_v1_response->obj_debug);
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

usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response_parseFromJSON(cJSON *usergroupexternal_edit_object_v1_responseJSON){

    usergroupexternal_edit_object_v1_response_t *usergroupexternal_edit_object_v1_response_local_var = NULL;

    // define the local variable for usergroupexternal_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for usergroupexternal_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // usergroupexternal_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(usergroupexternal_edit_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // usergroupexternal_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(usergroupexternal_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    usergroupexternal_edit_object_v1_response_local_var = usergroupexternal_edit_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return usergroupexternal_edit_object_v1_response_local_var;
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
