#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_delete_object_v1_response.h"



supply_delete_object_v1_response_t *supply_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    supply_delete_object_v1_response_t *supply_delete_object_v1_response_local_var = malloc(sizeof(supply_delete_object_v1_response_t));
    if (!supply_delete_object_v1_response_local_var) {
        return NULL;
    }
    supply_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    supply_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return supply_delete_object_v1_response_local_var;
}


void supply_delete_object_v1_response_free(supply_delete_object_v1_response_t *supply_delete_object_v1_response) {
    if(NULL == supply_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (supply_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(supply_delete_object_v1_response->obj_debug_payload);
        supply_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (supply_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(supply_delete_object_v1_response->obj_debug);
        supply_delete_object_v1_response->obj_debug = NULL;
    }
    free(supply_delete_object_v1_response);
}

cJSON *supply_delete_object_v1_response_convertToJSON(supply_delete_object_v1_response_t *supply_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // supply_delete_object_v1_response->obj_debug_payload
    if (!supply_delete_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(supply_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // supply_delete_object_v1_response->obj_debug
    if(supply_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(supply_delete_object_v1_response->obj_debug);
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

supply_delete_object_v1_response_t *supply_delete_object_v1_response_parseFromJSON(cJSON *supply_delete_object_v1_responseJSON){

    supply_delete_object_v1_response_t *supply_delete_object_v1_response_local_var = NULL;

    // define the local variable for supply_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for supply_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // supply_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(supply_delete_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // supply_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(supply_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    supply_delete_object_v1_response_local_var = supply_delete_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return supply_delete_object_v1_response_local_var;
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
