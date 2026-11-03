#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_synchronization_documenttype_v1_response.h"



static inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response_local_var = malloc(sizeof(inscription_synchronization_documenttype_v1_response_t));
    if (!inscription_synchronization_documenttype_v1_response_local_var) {
        return NULL;
    }
    memset(inscription_synchronization_documenttype_v1_response_local_var, 0, sizeof(inscription_synchronization_documenttype_v1_response_t));
    inscription_synchronization_documenttype_v1_response_local_var->_library_owned = 1;
    inscription_synchronization_documenttype_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    inscription_synchronization_documenttype_v1_response_local_var->obj_debug = obj_debug;
    return inscription_synchronization_documenttype_v1_response_local_var;
}

__attribute__((deprecated)) inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    inscription_synchronization_documenttype_v1_response_t *result = inscription_synchronization_documenttype_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
    if (!result) {
    }
    return result;
}

void inscription_synchronization_documenttype_v1_response_free(inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response) {
    if(NULL == inscription_synchronization_documenttype_v1_response){
        return ;
    }
    if(inscription_synchronization_documenttype_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_synchronization_documenttype_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_synchronization_documenttype_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(inscription_synchronization_documenttype_v1_response->obj_debug_payload);
        inscription_synchronization_documenttype_v1_response->obj_debug_payload = NULL;
    }
    if (inscription_synchronization_documenttype_v1_response->obj_debug) {
        common_response_obj_debug_free(inscription_synchronization_documenttype_v1_response->obj_debug);
        inscription_synchronization_documenttype_v1_response->obj_debug = NULL;
    }
    free(inscription_synchronization_documenttype_v1_response);
}

cJSON *inscription_synchronization_documenttype_v1_response_convertToJSON(inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // inscription_synchronization_documenttype_v1_response->obj_debug_payload
    if (!inscription_synchronization_documenttype_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(inscription_synchronization_documenttype_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inscription_synchronization_documenttype_v1_response->obj_debug
    if(inscription_synchronization_documenttype_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(inscription_synchronization_documenttype_v1_response->obj_debug);
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

inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response_parseFromJSON(cJSON *inscription_synchronization_documenttype_v1_responseJSON){

    inscription_synchronization_documenttype_v1_response_t *inscription_synchronization_documenttype_v1_response_local_var = NULL;

    // define the local variable for inscription_synchronization_documenttype_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for inscription_synchronization_documenttype_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // inscription_synchronization_documenttype_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(inscription_synchronization_documenttype_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // inscription_synchronization_documenttype_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(inscription_synchronization_documenttype_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }



    inscription_synchronization_documenttype_v1_response_local_var = inscription_synchronization_documenttype_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    if (!inscription_synchronization_documenttype_v1_response_local_var) {
        goto end;
    }

    return inscription_synchronization_documenttype_v1_response_local_var;
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
