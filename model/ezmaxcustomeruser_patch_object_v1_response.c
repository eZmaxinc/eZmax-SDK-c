#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxcustomeruser_patch_object_v1_response.h"



static ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response_local_var = malloc(sizeof(ezmaxcustomeruser_patch_object_v1_response_t));
    if (!ezmaxcustomeruser_patch_object_v1_response_local_var) {
        return NULL;
    }
    ezmaxcustomeruser_patch_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezmaxcustomeruser_patch_object_v1_response_local_var->obj_debug = obj_debug;

    ezmaxcustomeruser_patch_object_v1_response_local_var->_library_owned = 1;
    return ezmaxcustomeruser_patch_object_v1_response_local_var;
}

__attribute__((deprecated)) ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return ezmaxcustomeruser_patch_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void ezmaxcustomeruser_patch_object_v1_response_free(ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response) {
    if(NULL == ezmaxcustomeruser_patch_object_v1_response){
        return ;
    }
    if(ezmaxcustomeruser_patch_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxcustomeruser_patch_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxcustomeruser_patch_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezmaxcustomeruser_patch_object_v1_response->obj_debug_payload);
        ezmaxcustomeruser_patch_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezmaxcustomeruser_patch_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezmaxcustomeruser_patch_object_v1_response->obj_debug);
        ezmaxcustomeruser_patch_object_v1_response->obj_debug = NULL;
    }
    free(ezmaxcustomeruser_patch_object_v1_response);
}

cJSON *ezmaxcustomeruser_patch_object_v1_response_convertToJSON(ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxcustomeruser_patch_object_v1_response->obj_debug_payload
    if (!ezmaxcustomeruser_patch_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezmaxcustomeruser_patch_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxcustomeruser_patch_object_v1_response->obj_debug
    if(ezmaxcustomeruser_patch_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezmaxcustomeruser_patch_object_v1_response->obj_debug);
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

ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response_parseFromJSON(cJSON *ezmaxcustomeruser_patch_object_v1_responseJSON){

    ezmaxcustomeruser_patch_object_v1_response_t *ezmaxcustomeruser_patch_object_v1_response_local_var = NULL;

    // define the local variable for ezmaxcustomeruser_patch_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezmaxcustomeruser_patch_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezmaxcustomeruser_patch_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezmaxcustomeruser_patch_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezmaxcustomeruser_patch_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezmaxcustomeruser_patch_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezmaxcustomeruser_patch_object_v1_response_local_var = ezmaxcustomeruser_patch_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezmaxcustomeruser_patch_object_v1_response_local_var;
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
