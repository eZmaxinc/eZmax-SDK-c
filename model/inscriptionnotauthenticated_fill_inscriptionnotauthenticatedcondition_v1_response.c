#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response.h"



static inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var = malloc(sizeof(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t));
    if (!inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var) {
        return NULL;
    }
    memset(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var, 0, sizeof(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t));
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var->_library_owned = 1;
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var->obj_debug = obj_debug;
    return inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var;
}

__attribute__((deprecated)) inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t *result = inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
    if (!result) {
    }
    return result;
}

void inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_free(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response) {
    if(NULL == inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response){
        return ;
    }
    if(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug_payload);
        inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug_payload = NULL;
    }
    if (inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug) {
        common_response_obj_debug_free(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug);
        inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug = NULL;
    }
    free(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response);
}

cJSON *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_convertToJSON(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug_payload
    if (!inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug
    if(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug);
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

inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_parseFromJSON(cJSON *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_responseJSON){

    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_t *inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var = NULL;

    // define the local variable for inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }



    inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var = inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    if (!inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var) {
        goto end;
    }

    return inscriptionnotauthenticated_fill_inscriptionnotauthenticatedcondition_v1_response_local_var;
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
