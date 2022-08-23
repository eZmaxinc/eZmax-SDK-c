#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_delete_object_v1_response.h"



webhook_delete_object_v1_response_t *webhook_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    webhook_delete_object_v1_response_t *webhook_delete_object_v1_response_local_var = malloc(sizeof(webhook_delete_object_v1_response_t));
    if (!webhook_delete_object_v1_response_local_var) {
        return NULL;
    }
    webhook_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    webhook_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return webhook_delete_object_v1_response_local_var;
}


void webhook_delete_object_v1_response_free(webhook_delete_object_v1_response_t *webhook_delete_object_v1_response) {
    if(NULL == webhook_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(webhook_delete_object_v1_response->obj_debug_payload);
        webhook_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (webhook_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(webhook_delete_object_v1_response->obj_debug);
        webhook_delete_object_v1_response->obj_debug = NULL;
    }
    free(webhook_delete_object_v1_response);
}

cJSON *webhook_delete_object_v1_response_convertToJSON(webhook_delete_object_v1_response_t *webhook_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // webhook_delete_object_v1_response->obj_debug_payload
    if(webhook_delete_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(webhook_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // webhook_delete_object_v1_response->obj_debug
    if(webhook_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(webhook_delete_object_v1_response->obj_debug);
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

webhook_delete_object_v1_response_t *webhook_delete_object_v1_response_parseFromJSON(cJSON *webhook_delete_object_v1_responseJSON){

    webhook_delete_object_v1_response_t *webhook_delete_object_v1_response_local_var = NULL;

    // define the local variable for webhook_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for webhook_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // webhook_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(webhook_delete_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // webhook_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(webhook_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    webhook_delete_object_v1_response_local_var = webhook_delete_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return webhook_delete_object_v1_response_local_var;
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
