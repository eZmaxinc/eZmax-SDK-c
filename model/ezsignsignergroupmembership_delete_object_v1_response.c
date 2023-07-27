#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_delete_object_v1_response.h"



ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response_local_var = malloc(sizeof(ezsignsignergroupmembership_delete_object_v1_response_t));
    if (!ezsignsignergroupmembership_delete_object_v1_response_local_var) {
        return NULL;
    }
    ezsignsignergroupmembership_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignsignergroupmembership_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsignsignergroupmembership_delete_object_v1_response_local_var;
}


void ezsignsignergroupmembership_delete_object_v1_response_free(ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response) {
    if(NULL == ezsignsignergroupmembership_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroupmembership_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignsignergroupmembership_delete_object_v1_response->obj_debug_payload);
        ezsignsignergroupmembership_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignsignergroupmembership_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignsignergroupmembership_delete_object_v1_response->obj_debug);
        ezsignsignergroupmembership_delete_object_v1_response->obj_debug = NULL;
    }
    free(ezsignsignergroupmembership_delete_object_v1_response);
}

cJSON *ezsignsignergroupmembership_delete_object_v1_response_convertToJSON(ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_delete_object_v1_response->obj_debug_payload
    if(ezsignsignergroupmembership_delete_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignsignergroupmembership_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignsignergroupmembership_delete_object_v1_response->obj_debug
    if(ezsignsignergroupmembership_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignsignergroupmembership_delete_object_v1_response->obj_debug);
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

ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response_parseFromJSON(cJSON *ezsignsignergroupmembership_delete_object_v1_responseJSON){

    ezsignsignergroupmembership_delete_object_v1_response_t *ezsignsignergroupmembership_delete_object_v1_response_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignsignergroupmembership_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignsignergroupmembership_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_delete_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsignsignergroupmembership_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignsignergroupmembership_delete_object_v1_response_local_var = ezsignsignergroupmembership_delete_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignsignergroupmembership_delete_object_v1_response_local_var;
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
