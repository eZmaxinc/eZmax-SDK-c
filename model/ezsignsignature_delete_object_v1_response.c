#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_delete_object_v1_response.h"



static ezsignsignature_delete_object_v1_response_t *ezsignsignature_delete_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignsignature_delete_object_v1_response_t *ezsignsignature_delete_object_v1_response_local_var = malloc(sizeof(ezsignsignature_delete_object_v1_response_t));
    if (!ezsignsignature_delete_object_v1_response_local_var) {
        return NULL;
    }
    ezsignsignature_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignsignature_delete_object_v1_response_local_var->obj_debug = obj_debug;

    ezsignsignature_delete_object_v1_response_local_var->_library_owned = 1;
    return ezsignsignature_delete_object_v1_response_local_var;
}

__attribute__((deprecated)) ezsignsignature_delete_object_v1_response_t *ezsignsignature_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return ezsignsignature_delete_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void ezsignsignature_delete_object_v1_response_free(ezsignsignature_delete_object_v1_response_t *ezsignsignature_delete_object_v1_response) {
    if(NULL == ezsignsignature_delete_object_v1_response){
        return ;
    }
    if(ezsignsignature_delete_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_delete_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignsignature_delete_object_v1_response->obj_debug_payload);
        ezsignsignature_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignsignature_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignsignature_delete_object_v1_response->obj_debug);
        ezsignsignature_delete_object_v1_response->obj_debug = NULL;
    }
    free(ezsignsignature_delete_object_v1_response);
}

cJSON *ezsignsignature_delete_object_v1_response_convertToJSON(ezsignsignature_delete_object_v1_response_t *ezsignsignature_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_delete_object_v1_response->obj_debug_payload
    if (!ezsignsignature_delete_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignsignature_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsignature_delete_object_v1_response->obj_debug
    if(ezsignsignature_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignsignature_delete_object_v1_response->obj_debug);
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

ezsignsignature_delete_object_v1_response_t *ezsignsignature_delete_object_v1_response_parseFromJSON(cJSON *ezsignsignature_delete_object_v1_responseJSON){

    ezsignsignature_delete_object_v1_response_t *ezsignsignature_delete_object_v1_response_local_var = NULL;

    // define the local variable for ezsignsignature_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignsignature_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignsignature_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignature_delete_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignsignature_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignsignature_delete_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignsignature_delete_object_v1_response_local_var = ezsignsignature_delete_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignsignature_delete_object_v1_response_local_var;
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
