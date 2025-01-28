#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_patch_object_v1_response.h"



static ezsigndocument_patch_object_v1_response_t *ezsigndocument_patch_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigndocument_patch_object_v1_response_t *ezsigndocument_patch_object_v1_response_local_var = malloc(sizeof(ezsigndocument_patch_object_v1_response_t));
    if (!ezsigndocument_patch_object_v1_response_local_var) {
        return NULL;
    }
    ezsigndocument_patch_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigndocument_patch_object_v1_response_local_var->obj_debug = obj_debug;

    ezsigndocument_patch_object_v1_response_local_var->_library_owned = 1;
    return ezsigndocument_patch_object_v1_response_local_var;
}

__attribute__((deprecated)) ezsigndocument_patch_object_v1_response_t *ezsigndocument_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return ezsigndocument_patch_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void ezsigndocument_patch_object_v1_response_free(ezsigndocument_patch_object_v1_response_t *ezsigndocument_patch_object_v1_response) {
    if(NULL == ezsigndocument_patch_object_v1_response){
        return ;
    }
    if(ezsigndocument_patch_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_patch_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_patch_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigndocument_patch_object_v1_response->obj_debug_payload);
        ezsigndocument_patch_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigndocument_patch_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigndocument_patch_object_v1_response->obj_debug);
        ezsigndocument_patch_object_v1_response->obj_debug = NULL;
    }
    free(ezsigndocument_patch_object_v1_response);
}

cJSON *ezsigndocument_patch_object_v1_response_convertToJSON(ezsigndocument_patch_object_v1_response_t *ezsigndocument_patch_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_patch_object_v1_response->obj_debug_payload
    if (!ezsigndocument_patch_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigndocument_patch_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigndocument_patch_object_v1_response->obj_debug
    if(ezsigndocument_patch_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigndocument_patch_object_v1_response->obj_debug);
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

ezsigndocument_patch_object_v1_response_t *ezsigndocument_patch_object_v1_response_parseFromJSON(cJSON *ezsigndocument_patch_object_v1_responseJSON){

    ezsigndocument_patch_object_v1_response_t *ezsigndocument_patch_object_v1_response_local_var = NULL;

    // define the local variable for ezsigndocument_patch_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigndocument_patch_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigndocument_patch_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigndocument_patch_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsigndocument_patch_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigndocument_patch_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigndocument_patch_object_v1_response_local_var = ezsigndocument_patch_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigndocument_patch_object_v1_response_local_var;
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
