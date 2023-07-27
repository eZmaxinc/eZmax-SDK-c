#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_delete_object_v1_response.h"



ezsignsignergroup_delete_object_v1_response_t *ezsignsignergroup_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignsignergroup_delete_object_v1_response_t *ezsignsignergroup_delete_object_v1_response_local_var = malloc(sizeof(ezsignsignergroup_delete_object_v1_response_t));
    if (!ezsignsignergroup_delete_object_v1_response_local_var) {
        return NULL;
    }
    ezsignsignergroup_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignsignergroup_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsignsignergroup_delete_object_v1_response_local_var;
}


void ezsignsignergroup_delete_object_v1_response_free(ezsignsignergroup_delete_object_v1_response_t *ezsignsignergroup_delete_object_v1_response) {
    if(NULL == ezsignsignergroup_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignsignergroup_delete_object_v1_response->obj_debug_payload);
        ezsignsignergroup_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignsignergroup_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignsignergroup_delete_object_v1_response->obj_debug);
        ezsignsignergroup_delete_object_v1_response->obj_debug = NULL;
    }
    free(ezsignsignergroup_delete_object_v1_response);
}

cJSON *ezsignsignergroup_delete_object_v1_response_convertToJSON(ezsignsignergroup_delete_object_v1_response_t *ezsignsignergroup_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_delete_object_v1_response->obj_debug_payload
    if(ezsignsignergroup_delete_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignsignergroup_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignsignergroup_delete_object_v1_response->obj_debug
    if(ezsignsignergroup_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignsignergroup_delete_object_v1_response->obj_debug);
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

ezsignsignergroup_delete_object_v1_response_t *ezsignsignergroup_delete_object_v1_response_parseFromJSON(cJSON *ezsignsignergroup_delete_object_v1_responseJSON){

    ezsignsignergroup_delete_object_v1_response_t *ezsignsignergroup_delete_object_v1_response_local_var = NULL;

    // define the local variable for ezsignsignergroup_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignsignergroup_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignsignergroup_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_delete_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsignsignergroup_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignsignergroup_delete_object_v1_response_local_var = ezsignsignergroup_delete_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignsignergroup_delete_object_v1_response_local_var;
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
