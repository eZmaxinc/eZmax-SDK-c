#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_flatten_v1_response.h"



static ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response_local_var = malloc(sizeof(ezsigntemplatedocument_flatten_v1_response_t));
    if (!ezsigntemplatedocument_flatten_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_flatten_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatedocument_flatten_v1_response_local_var->obj_debug = obj_debug;

    ezsigntemplatedocument_flatten_v1_response_local_var->_library_owned = 1;
    return ezsigntemplatedocument_flatten_v1_response_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return ezsigntemplatedocument_flatten_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void ezsigntemplatedocument_flatten_v1_response_free(ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response) {
    if(NULL == ezsigntemplatedocument_flatten_v1_response){
        return ;
    }
    if(ezsigntemplatedocument_flatten_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_flatten_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_flatten_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatedocument_flatten_v1_response->obj_debug_payload);
        ezsigntemplatedocument_flatten_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatedocument_flatten_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatedocument_flatten_v1_response->obj_debug);
        ezsigntemplatedocument_flatten_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplatedocument_flatten_v1_response);
}

cJSON *ezsigntemplatedocument_flatten_v1_response_convertToJSON(ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_flatten_v1_response->obj_debug_payload
    if (!ezsigntemplatedocument_flatten_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatedocument_flatten_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatedocument_flatten_v1_response->obj_debug
    if(ezsigntemplatedocument_flatten_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatedocument_flatten_v1_response->obj_debug);
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

ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response_parseFromJSON(cJSON *ezsigntemplatedocument_flatten_v1_responseJSON){

    ezsigntemplatedocument_flatten_v1_response_t *ezsigntemplatedocument_flatten_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplatedocument_flatten_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatedocument_flatten_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplatedocument_flatten_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_flatten_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsigntemplatedocument_flatten_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_flatten_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplatedocument_flatten_v1_response_local_var = ezsigntemplatedocument_flatten_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplatedocument_flatten_v1_response_local_var;
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
