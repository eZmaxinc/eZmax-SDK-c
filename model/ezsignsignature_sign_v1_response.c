#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_sign_v1_response.h"



ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response_local_var = malloc(sizeof(ezsignsignature_sign_v1_response_t));
    if (!ezsignsignature_sign_v1_response_local_var) {
        return NULL;
    }
    ezsignsignature_sign_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignsignature_sign_v1_response_local_var->obj_debug = obj_debug;

    return ezsignsignature_sign_v1_response_local_var;
}


void ezsignsignature_sign_v1_response_free(ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response) {
    if(NULL == ezsignsignature_sign_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_sign_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignsignature_sign_v1_response->obj_debug_payload);
        ezsignsignature_sign_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignsignature_sign_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignsignature_sign_v1_response->obj_debug);
        ezsignsignature_sign_v1_response->obj_debug = NULL;
    }
    free(ezsignsignature_sign_v1_response);
}

cJSON *ezsignsignature_sign_v1_response_convertToJSON(ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_sign_v1_response->obj_debug_payload
    if(ezsignsignature_sign_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignsignature_sign_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignsignature_sign_v1_response->obj_debug
    if(ezsignsignature_sign_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignsignature_sign_v1_response->obj_debug);
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

ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response_parseFromJSON(cJSON *ezsignsignature_sign_v1_responseJSON){

    ezsignsignature_sign_v1_response_t *ezsignsignature_sign_v1_response_local_var = NULL;

    // define the local variable for ezsignsignature_sign_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignsignature_sign_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignsignature_sign_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsignsignature_sign_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignsignature_sign_v1_response_local_var = ezsignsignature_sign_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignsignature_sign_v1_response_local_var;
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
