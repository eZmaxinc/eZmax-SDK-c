#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_delete_object_v1_response.h"



ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response_local_var = malloc(sizeof(ezsignbulksend_delete_object_v1_response_t));
    if (!ezsignbulksend_delete_object_v1_response_local_var) {
        return NULL;
    }
    ezsignbulksend_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignbulksend_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsignbulksend_delete_object_v1_response_local_var;
}


void ezsignbulksend_delete_object_v1_response_free(ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response) {
    if(NULL == ezsignbulksend_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignbulksend_delete_object_v1_response->obj_debug_payload);
        ezsignbulksend_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignbulksend_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignbulksend_delete_object_v1_response->obj_debug);
        ezsignbulksend_delete_object_v1_response->obj_debug = NULL;
    }
    free(ezsignbulksend_delete_object_v1_response);
}

cJSON *ezsignbulksend_delete_object_v1_response_convertToJSON(ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_delete_object_v1_response->obj_debug_payload
    if (!ezsignbulksend_delete_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignbulksend_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignbulksend_delete_object_v1_response->obj_debug
    if(ezsignbulksend_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignbulksend_delete_object_v1_response->obj_debug);
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

ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response_parseFromJSON(cJSON *ezsignbulksend_delete_object_v1_responseJSON){

    ezsignbulksend_delete_object_v1_response_t *ezsignbulksend_delete_object_v1_response_local_var = NULL;

    // define the local variable for ezsignbulksend_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignbulksend_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignbulksend_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_delete_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignbulksend_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignbulksend_delete_object_v1_response_local_var = ezsignbulksend_delete_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignbulksend_delete_object_v1_response_local_var;
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
