#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_delete_object_v1_response.h"



paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response_local_var = malloc(sizeof(paymentterm_delete_object_v1_response_t));
    if (!paymentterm_delete_object_v1_response_local_var) {
        return NULL;
    }
    paymentterm_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    paymentterm_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return paymentterm_delete_object_v1_response_local_var;
}


void paymentterm_delete_object_v1_response_free(paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response) {
    if(NULL == paymentterm_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(paymentterm_delete_object_v1_response->obj_debug_payload);
        paymentterm_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (paymentterm_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(paymentterm_delete_object_v1_response->obj_debug);
        paymentterm_delete_object_v1_response->obj_debug = NULL;
    }
    free(paymentterm_delete_object_v1_response);
}

cJSON *paymentterm_delete_object_v1_response_convertToJSON(paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_delete_object_v1_response->obj_debug_payload
    if(paymentterm_delete_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(paymentterm_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // paymentterm_delete_object_v1_response->obj_debug
    if(paymentterm_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(paymentterm_delete_object_v1_response->obj_debug);
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

paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response_parseFromJSON(cJSON *paymentterm_delete_object_v1_responseJSON){

    paymentterm_delete_object_v1_response_t *paymentterm_delete_object_v1_response_local_var = NULL;

    // define the local variable for paymentterm_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for paymentterm_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // paymentterm_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(paymentterm_delete_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // paymentterm_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(paymentterm_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    paymentterm_delete_object_v1_response_local_var = paymentterm_delete_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return paymentterm_delete_object_v1_response_local_var;
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
