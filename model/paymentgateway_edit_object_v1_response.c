#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_edit_object_v1_response.h"



static paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response_local_var = malloc(sizeof(paymentgateway_edit_object_v1_response_t));
    if (!paymentgateway_edit_object_v1_response_local_var) {
        return NULL;
    }
    memset(paymentgateway_edit_object_v1_response_local_var, 0, sizeof(paymentgateway_edit_object_v1_response_t));
    paymentgateway_edit_object_v1_response_local_var->_library_owned = 1;
    paymentgateway_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    paymentgateway_edit_object_v1_response_local_var->obj_debug = obj_debug;
    return paymentgateway_edit_object_v1_response_local_var;
}

__attribute__((deprecated)) paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    paymentgateway_edit_object_v1_response_t *result = paymentgateway_edit_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
    if (!result) {
    }
    return result;
}

void paymentgateway_edit_object_v1_response_free(paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response) {
    if(NULL == paymentgateway_edit_object_v1_response){
        return ;
    }
    if(paymentgateway_edit_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_edit_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(paymentgateway_edit_object_v1_response->obj_debug_payload);
        paymentgateway_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (paymentgateway_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(paymentgateway_edit_object_v1_response->obj_debug);
        paymentgateway_edit_object_v1_response->obj_debug = NULL;
    }
    free(paymentgateway_edit_object_v1_response);
}

cJSON *paymentgateway_edit_object_v1_response_convertToJSON(paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_edit_object_v1_response->obj_debug_payload
    if (!paymentgateway_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(paymentgateway_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // paymentgateway_edit_object_v1_response->obj_debug
    if(paymentgateway_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(paymentgateway_edit_object_v1_response->obj_debug);
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

paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response_parseFromJSON(cJSON *paymentgateway_edit_object_v1_responseJSON){

    paymentgateway_edit_object_v1_response_t *paymentgateway_edit_object_v1_response_local_var = NULL;

    // define the local variable for paymentgateway_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for paymentgateway_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // paymentgateway_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(paymentgateway_edit_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // paymentgateway_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(paymentgateway_edit_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }



    paymentgateway_edit_object_v1_response_local_var = paymentgateway_edit_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    if (!paymentgateway_edit_object_v1_response_local_var) {
        goto end;
    }

    return paymentgateway_edit_object_v1_response_local_var;
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
