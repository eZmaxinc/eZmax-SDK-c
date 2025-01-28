#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_edit_object_v1_response.h"



static ezsignbulksend_edit_object_v1_response_t *ezsignbulksend_edit_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignbulksend_edit_object_v1_response_t *ezsignbulksend_edit_object_v1_response_local_var = malloc(sizeof(ezsignbulksend_edit_object_v1_response_t));
    if (!ezsignbulksend_edit_object_v1_response_local_var) {
        return NULL;
    }
    ezsignbulksend_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignbulksend_edit_object_v1_response_local_var->obj_debug = obj_debug;

    ezsignbulksend_edit_object_v1_response_local_var->_library_owned = 1;
    return ezsignbulksend_edit_object_v1_response_local_var;
}

__attribute__((deprecated)) ezsignbulksend_edit_object_v1_response_t *ezsignbulksend_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return ezsignbulksend_edit_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void ezsignbulksend_edit_object_v1_response_free(ezsignbulksend_edit_object_v1_response_t *ezsignbulksend_edit_object_v1_response) {
    if(NULL == ezsignbulksend_edit_object_v1_response){
        return ;
    }
    if(ezsignbulksend_edit_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_edit_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignbulksend_edit_object_v1_response->obj_debug_payload);
        ezsignbulksend_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignbulksend_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignbulksend_edit_object_v1_response->obj_debug);
        ezsignbulksend_edit_object_v1_response->obj_debug = NULL;
    }
    free(ezsignbulksend_edit_object_v1_response);
}

cJSON *ezsignbulksend_edit_object_v1_response_convertToJSON(ezsignbulksend_edit_object_v1_response_t *ezsignbulksend_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_edit_object_v1_response->obj_debug_payload
    if (!ezsignbulksend_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignbulksend_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignbulksend_edit_object_v1_response->obj_debug
    if(ezsignbulksend_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignbulksend_edit_object_v1_response->obj_debug);
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

ezsignbulksend_edit_object_v1_response_t *ezsignbulksend_edit_object_v1_response_parseFromJSON(cJSON *ezsignbulksend_edit_object_v1_responseJSON){

    ezsignbulksend_edit_object_v1_response_t *ezsignbulksend_edit_object_v1_response_local_var = NULL;

    // define the local variable for ezsignbulksend_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignbulksend_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignbulksend_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_edit_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignbulksend_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_edit_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignbulksend_edit_object_v1_response_local_var = ezsignbulksend_edit_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignbulksend_edit_object_v1_response_local_var;
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
