#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response.h"



static common_response_t *common_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    common_response_t *common_response_local_var = malloc(sizeof(common_response_t));
    if (!common_response_local_var) {
        return NULL;
    }
    common_response_local_var->obj_debug_payload = obj_debug_payload;
    common_response_local_var->obj_debug = obj_debug;

    common_response_local_var->_library_owned = 1;
    return common_response_local_var;
}

__attribute__((deprecated)) common_response_t *common_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return common_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void common_response_free(common_response_t *common_response) {
    if(NULL == common_response){
        return ;
    }
    if(common_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(common_response->obj_debug_payload);
        common_response->obj_debug_payload = NULL;
    }
    if (common_response->obj_debug) {
        common_response_obj_debug_free(common_response->obj_debug);
        common_response->obj_debug = NULL;
    }
    free(common_response);
}

cJSON *common_response_convertToJSON(common_response_t *common_response) {
    cJSON *item = cJSON_CreateObject();

    // common_response->obj_debug_payload
    if (!common_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(common_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_response->obj_debug
    if(common_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(common_response->obj_debug);
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

common_response_t *common_response_parseFromJSON(cJSON *common_responseJSON){

    common_response_t *common_response_local_var = NULL;

    // define the local variable for common_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for common_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // common_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(common_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // common_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(common_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    common_response_local_var = common_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return common_response_local_var;
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
