#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateannotation_delete_object_v1_response.h"



static ezsigntemplateannotation_delete_object_v1_response_t *ezsigntemplateannotation_delete_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplateannotation_delete_object_v1_response_t *ezsigntemplateannotation_delete_object_v1_response_local_var = malloc(sizeof(ezsigntemplateannotation_delete_object_v1_response_t));
    if (!ezsigntemplateannotation_delete_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplateannotation_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplateannotation_delete_object_v1_response_local_var->obj_debug = obj_debug;

    ezsigntemplateannotation_delete_object_v1_response_local_var->_library_owned = 1;
    return ezsigntemplateannotation_delete_object_v1_response_local_var;
}

__attribute__((deprecated)) ezsigntemplateannotation_delete_object_v1_response_t *ezsigntemplateannotation_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return ezsigntemplateannotation_delete_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void ezsigntemplateannotation_delete_object_v1_response_free(ezsigntemplateannotation_delete_object_v1_response_t *ezsigntemplateannotation_delete_object_v1_response) {
    if(NULL == ezsigntemplateannotation_delete_object_v1_response){
        return ;
    }
    if(ezsigntemplateannotation_delete_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateannotation_delete_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateannotation_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplateannotation_delete_object_v1_response->obj_debug_payload);
        ezsigntemplateannotation_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplateannotation_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplateannotation_delete_object_v1_response->obj_debug);
        ezsigntemplateannotation_delete_object_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplateannotation_delete_object_v1_response);
}

cJSON *ezsigntemplateannotation_delete_object_v1_response_convertToJSON(ezsigntemplateannotation_delete_object_v1_response_t *ezsigntemplateannotation_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateannotation_delete_object_v1_response->obj_debug_payload
    if (!ezsigntemplateannotation_delete_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplateannotation_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplateannotation_delete_object_v1_response->obj_debug
    if(ezsigntemplateannotation_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplateannotation_delete_object_v1_response->obj_debug);
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

ezsigntemplateannotation_delete_object_v1_response_t *ezsigntemplateannotation_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplateannotation_delete_object_v1_responseJSON){

    ezsigntemplateannotation_delete_object_v1_response_t *ezsigntemplateannotation_delete_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplateannotation_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplateannotation_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_delete_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsigntemplateannotation_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_delete_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplateannotation_delete_object_v1_response_local_var = ezsigntemplateannotation_delete_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplateannotation_delete_object_v1_response_local_var;
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
