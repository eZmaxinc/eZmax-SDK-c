#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfiguration_edit_object_v1_response.h"



static systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response_local_var = malloc(sizeof(systemconfiguration_edit_object_v1_response_t));
    if (!systemconfiguration_edit_object_v1_response_local_var) {
        return NULL;
    }
    systemconfiguration_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    systemconfiguration_edit_object_v1_response_local_var->obj_debug = obj_debug;

    systemconfiguration_edit_object_v1_response_local_var->_library_owned = 1;
    return systemconfiguration_edit_object_v1_response_local_var;
}

__attribute__((deprecated)) systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return systemconfiguration_edit_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void systemconfiguration_edit_object_v1_response_free(systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response) {
    if(NULL == systemconfiguration_edit_object_v1_response){
        return ;
    }
    if(systemconfiguration_edit_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "systemconfiguration_edit_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfiguration_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(systemconfiguration_edit_object_v1_response->obj_debug_payload);
        systemconfiguration_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (systemconfiguration_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(systemconfiguration_edit_object_v1_response->obj_debug);
        systemconfiguration_edit_object_v1_response->obj_debug = NULL;
    }
    free(systemconfiguration_edit_object_v1_response);
}

cJSON *systemconfiguration_edit_object_v1_response_convertToJSON(systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // systemconfiguration_edit_object_v1_response->obj_debug_payload
    if (!systemconfiguration_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(systemconfiguration_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // systemconfiguration_edit_object_v1_response->obj_debug
    if(systemconfiguration_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(systemconfiguration_edit_object_v1_response->obj_debug);
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

systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response_parseFromJSON(cJSON *systemconfiguration_edit_object_v1_responseJSON){

    systemconfiguration_edit_object_v1_response_t *systemconfiguration_edit_object_v1_response_local_var = NULL;

    // define the local variable for systemconfiguration_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for systemconfiguration_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // systemconfiguration_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(systemconfiguration_edit_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // systemconfiguration_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(systemconfiguration_edit_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    systemconfiguration_edit_object_v1_response_local_var = systemconfiguration_edit_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return systemconfiguration_edit_object_v1_response_local_var;
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
