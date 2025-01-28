#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_reset_authorization_v1_response.h"



static authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response_local_var = malloc(sizeof(authenticationexternal_reset_authorization_v1_response_t));
    if (!authenticationexternal_reset_authorization_v1_response_local_var) {
        return NULL;
    }
    authenticationexternal_reset_authorization_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    authenticationexternal_reset_authorization_v1_response_local_var->obj_debug = obj_debug;

    authenticationexternal_reset_authorization_v1_response_local_var->_library_owned = 1;
    return authenticationexternal_reset_authorization_v1_response_local_var;
}

__attribute__((deprecated)) authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return authenticationexternal_reset_authorization_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void authenticationexternal_reset_authorization_v1_response_free(authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response) {
    if(NULL == authenticationexternal_reset_authorization_v1_response){
        return ;
    }
    if(authenticationexternal_reset_authorization_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "authenticationexternal_reset_authorization_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_reset_authorization_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(authenticationexternal_reset_authorization_v1_response->obj_debug_payload);
        authenticationexternal_reset_authorization_v1_response->obj_debug_payload = NULL;
    }
    if (authenticationexternal_reset_authorization_v1_response->obj_debug) {
        common_response_obj_debug_free(authenticationexternal_reset_authorization_v1_response->obj_debug);
        authenticationexternal_reset_authorization_v1_response->obj_debug = NULL;
    }
    free(authenticationexternal_reset_authorization_v1_response);
}

cJSON *authenticationexternal_reset_authorization_v1_response_convertToJSON(authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_reset_authorization_v1_response->obj_debug_payload
    if (!authenticationexternal_reset_authorization_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(authenticationexternal_reset_authorization_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // authenticationexternal_reset_authorization_v1_response->obj_debug
    if(authenticationexternal_reset_authorization_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(authenticationexternal_reset_authorization_v1_response->obj_debug);
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

authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response_parseFromJSON(cJSON *authenticationexternal_reset_authorization_v1_responseJSON){

    authenticationexternal_reset_authorization_v1_response_t *authenticationexternal_reset_authorization_v1_response_local_var = NULL;

    // define the local variable for authenticationexternal_reset_authorization_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for authenticationexternal_reset_authorization_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // authenticationexternal_reset_authorization_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(authenticationexternal_reset_authorization_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // authenticationexternal_reset_authorization_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(authenticationexternal_reset_authorization_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    authenticationexternal_reset_authorization_v1_response_local_var = authenticationexternal_reset_authorization_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return authenticationexternal_reset_authorization_v1_response_local_var;
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
