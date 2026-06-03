#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxcustomer_patch_object_v1_response.h"



static ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response_local_var = malloc(sizeof(ezmaxcustomer_patch_object_v1_response_t));
    if (!ezmaxcustomer_patch_object_v1_response_local_var) {
        return NULL;
    }
    memset(ezmaxcustomer_patch_object_v1_response_local_var, 0, sizeof(ezmaxcustomer_patch_object_v1_response_t));
    ezmaxcustomer_patch_object_v1_response_local_var->_library_owned = 1;
    ezmaxcustomer_patch_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezmaxcustomer_patch_object_v1_response_local_var->obj_debug = obj_debug;
    return ezmaxcustomer_patch_object_v1_response_local_var;
}

__attribute__((deprecated)) ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezmaxcustomer_patch_object_v1_response_t *result = ezmaxcustomer_patch_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
    if (!result) {
    }
    return result;
}

void ezmaxcustomer_patch_object_v1_response_free(ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response) {
    if(NULL == ezmaxcustomer_patch_object_v1_response){
        return ;
    }
    if(ezmaxcustomer_patch_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxcustomer_patch_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxcustomer_patch_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezmaxcustomer_patch_object_v1_response->obj_debug_payload);
        ezmaxcustomer_patch_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezmaxcustomer_patch_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezmaxcustomer_patch_object_v1_response->obj_debug);
        ezmaxcustomer_patch_object_v1_response->obj_debug = NULL;
    }
    free(ezmaxcustomer_patch_object_v1_response);
}

cJSON *ezmaxcustomer_patch_object_v1_response_convertToJSON(ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxcustomer_patch_object_v1_response->obj_debug_payload
    if (!ezmaxcustomer_patch_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezmaxcustomer_patch_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxcustomer_patch_object_v1_response->obj_debug
    if(ezmaxcustomer_patch_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezmaxcustomer_patch_object_v1_response->obj_debug);
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

ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response_parseFromJSON(cJSON *ezmaxcustomer_patch_object_v1_responseJSON){

    ezmaxcustomer_patch_object_v1_response_t *ezmaxcustomer_patch_object_v1_response_local_var = NULL;

    // define the local variable for ezmaxcustomer_patch_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezmaxcustomer_patch_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezmaxcustomer_patch_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezmaxcustomer_patch_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezmaxcustomer_patch_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezmaxcustomer_patch_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }



    ezmaxcustomer_patch_object_v1_response_local_var = ezmaxcustomer_patch_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    if (!ezmaxcustomer_patch_object_v1_response_local_var) {
        goto end;
    }

    return ezmaxcustomer_patch_object_v1_response_local_var;
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
