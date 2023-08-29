#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_edit_object_v1_response.h"



user_edit_object_v1_response_t *user_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    user_edit_object_v1_response_t *user_edit_object_v1_response_local_var = malloc(sizeof(user_edit_object_v1_response_t));
    if (!user_edit_object_v1_response_local_var) {
        return NULL;
    }
    user_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    user_edit_object_v1_response_local_var->obj_debug = obj_debug;

    return user_edit_object_v1_response_local_var;
}


void user_edit_object_v1_response_free(user_edit_object_v1_response_t *user_edit_object_v1_response) {
    if(NULL == user_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (user_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(user_edit_object_v1_response->obj_debug_payload);
        user_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (user_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(user_edit_object_v1_response->obj_debug);
        user_edit_object_v1_response->obj_debug = NULL;
    }
    free(user_edit_object_v1_response);
}

cJSON *user_edit_object_v1_response_convertToJSON(user_edit_object_v1_response_t *user_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // user_edit_object_v1_response->obj_debug_payload
    if (!user_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(user_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // user_edit_object_v1_response->obj_debug
    if(user_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(user_edit_object_v1_response->obj_debug);
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

user_edit_object_v1_response_t *user_edit_object_v1_response_parseFromJSON(cJSON *user_edit_object_v1_responseJSON){

    user_edit_object_v1_response_t *user_edit_object_v1_response_local_var = NULL;

    // define the local variable for user_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for user_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // user_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(user_edit_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // user_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(user_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    user_edit_object_v1_response_local_var = user_edit_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return user_edit_object_v1_response_local_var;
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
