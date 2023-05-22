#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_delete_object_v1_response.h"



userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response_local_var = malloc(sizeof(userstaged_delete_object_v1_response_t));
    if (!userstaged_delete_object_v1_response_local_var) {
        return NULL;
    }
    userstaged_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    userstaged_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return userstaged_delete_object_v1_response_local_var;
}


void userstaged_delete_object_v1_response_free(userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response) {
    if(NULL == userstaged_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(userstaged_delete_object_v1_response->obj_debug_payload);
        userstaged_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (userstaged_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(userstaged_delete_object_v1_response->obj_debug);
        userstaged_delete_object_v1_response->obj_debug = NULL;
    }
    free(userstaged_delete_object_v1_response);
}

cJSON *userstaged_delete_object_v1_response_convertToJSON(userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_delete_object_v1_response->obj_debug_payload
    if(userstaged_delete_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(userstaged_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // userstaged_delete_object_v1_response->obj_debug
    if(userstaged_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(userstaged_delete_object_v1_response->obj_debug);
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

userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response_parseFromJSON(cJSON *userstaged_delete_object_v1_responseJSON){

    userstaged_delete_object_v1_response_t *userstaged_delete_object_v1_response_local_var = NULL;

    // define the local variable for userstaged_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for userstaged_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // userstaged_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(userstaged_delete_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // userstaged_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(userstaged_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    userstaged_delete_object_v1_response_local_var = userstaged_delete_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return userstaged_delete_object_v1_response_local_var;
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
