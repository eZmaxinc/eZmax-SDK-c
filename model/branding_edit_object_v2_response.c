#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_edit_object_v2_response.h"



static branding_edit_object_v2_response_t *branding_edit_object_v2_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    branding_edit_object_v2_response_t *branding_edit_object_v2_response_local_var = malloc(sizeof(branding_edit_object_v2_response_t));
    if (!branding_edit_object_v2_response_local_var) {
        return NULL;
    }
    branding_edit_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    branding_edit_object_v2_response_local_var->obj_debug = obj_debug;

    branding_edit_object_v2_response_local_var->_library_owned = 1;
    return branding_edit_object_v2_response_local_var;
}

__attribute__((deprecated)) branding_edit_object_v2_response_t *branding_edit_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return branding_edit_object_v2_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void branding_edit_object_v2_response_free(branding_edit_object_v2_response_t *branding_edit_object_v2_response) {
    if(NULL == branding_edit_object_v2_response){
        return ;
    }
    if(branding_edit_object_v2_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_edit_object_v2_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_edit_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(branding_edit_object_v2_response->obj_debug_payload);
        branding_edit_object_v2_response->obj_debug_payload = NULL;
    }
    if (branding_edit_object_v2_response->obj_debug) {
        common_response_obj_debug_free(branding_edit_object_v2_response->obj_debug);
        branding_edit_object_v2_response->obj_debug = NULL;
    }
    free(branding_edit_object_v2_response);
}

cJSON *branding_edit_object_v2_response_convertToJSON(branding_edit_object_v2_response_t *branding_edit_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // branding_edit_object_v2_response->obj_debug_payload
    if (!branding_edit_object_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(branding_edit_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // branding_edit_object_v2_response->obj_debug
    if(branding_edit_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(branding_edit_object_v2_response->obj_debug);
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

branding_edit_object_v2_response_t *branding_edit_object_v2_response_parseFromJSON(cJSON *branding_edit_object_v2_responseJSON){

    branding_edit_object_v2_response_t *branding_edit_object_v2_response_local_var = NULL;

    // define the local variable for branding_edit_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for branding_edit_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // branding_edit_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(branding_edit_object_v2_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // branding_edit_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(branding_edit_object_v2_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    branding_edit_object_v2_response_local_var = branding_edit_object_v2_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return branding_edit_object_v2_response_local_var;
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
