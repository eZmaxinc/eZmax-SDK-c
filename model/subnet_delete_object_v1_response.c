#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_delete_object_v1_response.h"



subnet_delete_object_v1_response_t *subnet_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    subnet_delete_object_v1_response_t *subnet_delete_object_v1_response_local_var = malloc(sizeof(subnet_delete_object_v1_response_t));
    if (!subnet_delete_object_v1_response_local_var) {
        return NULL;
    }
    subnet_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    subnet_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return subnet_delete_object_v1_response_local_var;
}


void subnet_delete_object_v1_response_free(subnet_delete_object_v1_response_t *subnet_delete_object_v1_response) {
    if(NULL == subnet_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(subnet_delete_object_v1_response->obj_debug_payload);
        subnet_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (subnet_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(subnet_delete_object_v1_response->obj_debug);
        subnet_delete_object_v1_response->obj_debug = NULL;
    }
    free(subnet_delete_object_v1_response);
}

cJSON *subnet_delete_object_v1_response_convertToJSON(subnet_delete_object_v1_response_t *subnet_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // subnet_delete_object_v1_response->obj_debug_payload
    if(subnet_delete_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(subnet_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // subnet_delete_object_v1_response->obj_debug
    if(subnet_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(subnet_delete_object_v1_response->obj_debug);
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

subnet_delete_object_v1_response_t *subnet_delete_object_v1_response_parseFromJSON(cJSON *subnet_delete_object_v1_responseJSON){

    subnet_delete_object_v1_response_t *subnet_delete_object_v1_response_local_var = NULL;

    // define the local variable for subnet_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for subnet_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // subnet_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(subnet_delete_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // subnet_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(subnet_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    subnet_delete_object_v1_response_local_var = subnet_delete_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return subnet_delete_object_v1_response_local_var;
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
