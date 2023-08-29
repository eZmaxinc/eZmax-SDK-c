#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignpage_consult_v1_response.h"



ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response_local_var = malloc(sizeof(ezsignpage_consult_v1_response_t));
    if (!ezsignpage_consult_v1_response_local_var) {
        return NULL;
    }
    ezsignpage_consult_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignpage_consult_v1_response_local_var->obj_debug = obj_debug;

    return ezsignpage_consult_v1_response_local_var;
}


void ezsignpage_consult_v1_response_free(ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response) {
    if(NULL == ezsignpage_consult_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignpage_consult_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignpage_consult_v1_response->obj_debug_payload);
        ezsignpage_consult_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignpage_consult_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignpage_consult_v1_response->obj_debug);
        ezsignpage_consult_v1_response->obj_debug = NULL;
    }
    free(ezsignpage_consult_v1_response);
}

cJSON *ezsignpage_consult_v1_response_convertToJSON(ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignpage_consult_v1_response->obj_debug_payload
    if (!ezsignpage_consult_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignpage_consult_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignpage_consult_v1_response->obj_debug
    if(ezsignpage_consult_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignpage_consult_v1_response->obj_debug);
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

ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response_parseFromJSON(cJSON *ezsignpage_consult_v1_responseJSON){

    ezsignpage_consult_v1_response_t *ezsignpage_consult_v1_response_local_var = NULL;

    // define the local variable for ezsignpage_consult_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignpage_consult_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignpage_consult_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignpage_consult_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignpage_consult_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignpage_consult_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignpage_consult_v1_response_local_var = ezsignpage_consult_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignpage_consult_v1_response_local_var;
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
