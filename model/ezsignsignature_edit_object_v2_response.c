#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_edit_object_v2_response.h"



ezsignsignature_edit_object_v2_response_t *ezsignsignature_edit_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignsignature_edit_object_v2_response_t *ezsignsignature_edit_object_v2_response_local_var = malloc(sizeof(ezsignsignature_edit_object_v2_response_t));
    if (!ezsignsignature_edit_object_v2_response_local_var) {
        return NULL;
    }
    ezsignsignature_edit_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignsignature_edit_object_v2_response_local_var->obj_debug = obj_debug;

    return ezsignsignature_edit_object_v2_response_local_var;
}


void ezsignsignature_edit_object_v2_response_free(ezsignsignature_edit_object_v2_response_t *ezsignsignature_edit_object_v2_response) {
    if(NULL == ezsignsignature_edit_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_edit_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignsignature_edit_object_v2_response->obj_debug_payload);
        ezsignsignature_edit_object_v2_response->obj_debug_payload = NULL;
    }
    if (ezsignsignature_edit_object_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsignsignature_edit_object_v2_response->obj_debug);
        ezsignsignature_edit_object_v2_response->obj_debug = NULL;
    }
    free(ezsignsignature_edit_object_v2_response);
}

cJSON *ezsignsignature_edit_object_v2_response_convertToJSON(ezsignsignature_edit_object_v2_response_t *ezsignsignature_edit_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_edit_object_v2_response->obj_debug_payload
    if (!ezsignsignature_edit_object_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignsignature_edit_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsignature_edit_object_v2_response->obj_debug
    if(ezsignsignature_edit_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignsignature_edit_object_v2_response->obj_debug);
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

ezsignsignature_edit_object_v2_response_t *ezsignsignature_edit_object_v2_response_parseFromJSON(cJSON *ezsignsignature_edit_object_v2_responseJSON){

    ezsignsignature_edit_object_v2_response_t *ezsignsignature_edit_object_v2_response_local_var = NULL;

    // define the local variable for ezsignsignature_edit_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignsignature_edit_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignsignature_edit_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignature_edit_object_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignsignature_edit_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignsignature_edit_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignsignature_edit_object_v2_response_local_var = ezsignsignature_edit_object_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignsignature_edit_object_v2_response_local_var;
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
