#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_send_webhook_v1_response.h"



static webhook_send_webhook_v1_response_t *webhook_send_webhook_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    webhook_send_webhook_v1_response_t *webhook_send_webhook_v1_response_local_var = malloc(sizeof(webhook_send_webhook_v1_response_t));
    if (!webhook_send_webhook_v1_response_local_var) {
        return NULL;
    }
    webhook_send_webhook_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    webhook_send_webhook_v1_response_local_var->obj_debug = obj_debug;

    webhook_send_webhook_v1_response_local_var->_library_owned = 1;
    return webhook_send_webhook_v1_response_local_var;
}

__attribute__((deprecated)) webhook_send_webhook_v1_response_t *webhook_send_webhook_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return webhook_send_webhook_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void webhook_send_webhook_v1_response_free(webhook_send_webhook_v1_response_t *webhook_send_webhook_v1_response) {
    if(NULL == webhook_send_webhook_v1_response){
        return ;
    }
    if(webhook_send_webhook_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_send_webhook_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_send_webhook_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(webhook_send_webhook_v1_response->obj_debug_payload);
        webhook_send_webhook_v1_response->obj_debug_payload = NULL;
    }
    if (webhook_send_webhook_v1_response->obj_debug) {
        common_response_obj_debug_free(webhook_send_webhook_v1_response->obj_debug);
        webhook_send_webhook_v1_response->obj_debug = NULL;
    }
    free(webhook_send_webhook_v1_response);
}

cJSON *webhook_send_webhook_v1_response_convertToJSON(webhook_send_webhook_v1_response_t *webhook_send_webhook_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // webhook_send_webhook_v1_response->obj_debug_payload
    if (!webhook_send_webhook_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(webhook_send_webhook_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_send_webhook_v1_response->obj_debug
    if(webhook_send_webhook_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(webhook_send_webhook_v1_response->obj_debug);
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

webhook_send_webhook_v1_response_t *webhook_send_webhook_v1_response_parseFromJSON(cJSON *webhook_send_webhook_v1_responseJSON){

    webhook_send_webhook_v1_response_t *webhook_send_webhook_v1_response_local_var = NULL;

    // define the local variable for webhook_send_webhook_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for webhook_send_webhook_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // webhook_send_webhook_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // webhook_send_webhook_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(webhook_send_webhook_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    webhook_send_webhook_v1_response_local_var = webhook_send_webhook_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return webhook_send_webhook_v1_response_local_var;
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
