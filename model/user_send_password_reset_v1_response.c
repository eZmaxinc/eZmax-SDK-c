#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_send_password_reset_v1_response.h"



static user_send_password_reset_v1_response_t *user_send_password_reset_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    user_send_password_reset_v1_response_t *user_send_password_reset_v1_response_local_var = malloc(sizeof(user_send_password_reset_v1_response_t));
    if (!user_send_password_reset_v1_response_local_var) {
        return NULL;
    }
    user_send_password_reset_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    user_send_password_reset_v1_response_local_var->obj_debug = obj_debug;

    user_send_password_reset_v1_response_local_var->_library_owned = 1;
    return user_send_password_reset_v1_response_local_var;
}

__attribute__((deprecated)) user_send_password_reset_v1_response_t *user_send_password_reset_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return user_send_password_reset_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void user_send_password_reset_v1_response_free(user_send_password_reset_v1_response_t *user_send_password_reset_v1_response) {
    if(NULL == user_send_password_reset_v1_response){
        return ;
    }
    if(user_send_password_reset_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_send_password_reset_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_send_password_reset_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(user_send_password_reset_v1_response->obj_debug_payload);
        user_send_password_reset_v1_response->obj_debug_payload = NULL;
    }
    if (user_send_password_reset_v1_response->obj_debug) {
        common_response_obj_debug_free(user_send_password_reset_v1_response->obj_debug);
        user_send_password_reset_v1_response->obj_debug = NULL;
    }
    free(user_send_password_reset_v1_response);
}

cJSON *user_send_password_reset_v1_response_convertToJSON(user_send_password_reset_v1_response_t *user_send_password_reset_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // user_send_password_reset_v1_response->obj_debug_payload
    if (!user_send_password_reset_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(user_send_password_reset_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // user_send_password_reset_v1_response->obj_debug
    if(user_send_password_reset_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(user_send_password_reset_v1_response->obj_debug);
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

user_send_password_reset_v1_response_t *user_send_password_reset_v1_response_parseFromJSON(cJSON *user_send_password_reset_v1_responseJSON){

    user_send_password_reset_v1_response_t *user_send_password_reset_v1_response_local_var = NULL;

    // define the local variable for user_send_password_reset_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for user_send_password_reset_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // user_send_password_reset_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(user_send_password_reset_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // user_send_password_reset_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(user_send_password_reset_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    user_send_password_reset_v1_response_local_var = user_send_password_reset_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return user_send_password_reset_v1_response_local_var;
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
