#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_delete_object_v1_response.h"



ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response_local_var = malloc(sizeof(ezsignbulksendsignermapping_delete_object_v1_response_t));
    if (!ezsignbulksendsignermapping_delete_object_v1_response_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignbulksendsignermapping_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsignbulksendsignermapping_delete_object_v1_response_local_var;
}


void ezsignbulksendsignermapping_delete_object_v1_response_free(ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response) {
    if(NULL == ezsignbulksendsignermapping_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignbulksendsignermapping_delete_object_v1_response->obj_debug_payload);
        ezsignbulksendsignermapping_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignbulksendsignermapping_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignbulksendsignermapping_delete_object_v1_response->obj_debug);
        ezsignbulksendsignermapping_delete_object_v1_response->obj_debug = NULL;
    }
    free(ezsignbulksendsignermapping_delete_object_v1_response);
}

cJSON *ezsignbulksendsignermapping_delete_object_v1_response_convertToJSON(ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_delete_object_v1_response->obj_debug_payload
    if(ezsignbulksendsignermapping_delete_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignbulksendsignermapping_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignbulksendsignermapping_delete_object_v1_response->obj_debug
    if(ezsignbulksendsignermapping_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignbulksendsignermapping_delete_object_v1_response->obj_debug);
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

ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response_parseFromJSON(cJSON *ezsignbulksendsignermapping_delete_object_v1_responseJSON){

    ezsignbulksendsignermapping_delete_object_v1_response_t *ezsignbulksendsignermapping_delete_object_v1_response_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignbulksendsignermapping_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignbulksendsignermapping_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_delete_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsignbulksendsignermapping_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignbulksendsignermapping_delete_object_v1_response_local_var = ezsignbulksendsignermapping_delete_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignbulksendsignermapping_delete_object_v1_response_local_var;
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
