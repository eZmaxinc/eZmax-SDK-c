#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_edit_object_v1_response.h"



ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response_local_var = malloc(sizeof(ezsignsigningreason_edit_object_v1_response_t));
    if (!ezsignsigningreason_edit_object_v1_response_local_var) {
        return NULL;
    }
    ezsignsigningreason_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignsigningreason_edit_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsignsigningreason_edit_object_v1_response_local_var;
}


void ezsignsigningreason_edit_object_v1_response_free(ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response) {
    if(NULL == ezsignsigningreason_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignsigningreason_edit_object_v1_response->obj_debug_payload);
        ezsignsigningreason_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignsigningreason_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignsigningreason_edit_object_v1_response->obj_debug);
        ezsignsigningreason_edit_object_v1_response->obj_debug = NULL;
    }
    free(ezsignsigningreason_edit_object_v1_response);
}

cJSON *ezsignsigningreason_edit_object_v1_response_convertToJSON(ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_edit_object_v1_response->obj_debug_payload
    if (!ezsignsigningreason_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignsigningreason_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsigningreason_edit_object_v1_response->obj_debug
    if(ezsignsigningreason_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignsigningreason_edit_object_v1_response->obj_debug);
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

ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response_parseFromJSON(cJSON *ezsignsigningreason_edit_object_v1_responseJSON){

    ezsignsigningreason_edit_object_v1_response_t *ezsignsigningreason_edit_object_v1_response_local_var = NULL;

    // define the local variable for ezsignsigningreason_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignsigningreason_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignsigningreason_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_edit_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignsigningreason_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignsigningreason_edit_object_v1_response_local_var = ezsignsigningreason_edit_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignsigningreason_edit_object_v1_response_local_var;
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
