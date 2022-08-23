#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_send_v2_response.h"



ezsignfolder_send_v2_response_t *ezsignfolder_send_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignfolder_send_v2_response_t *ezsignfolder_send_v2_response_local_var = malloc(sizeof(ezsignfolder_send_v2_response_t));
    if (!ezsignfolder_send_v2_response_local_var) {
        return NULL;
    }
    ezsignfolder_send_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignfolder_send_v2_response_local_var->obj_debug = obj_debug;

    return ezsignfolder_send_v2_response_local_var;
}


void ezsignfolder_send_v2_response_free(ezsignfolder_send_v2_response_t *ezsignfolder_send_v2_response) {
    if(NULL == ezsignfolder_send_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_send_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignfolder_send_v2_response->obj_debug_payload);
        ezsignfolder_send_v2_response->obj_debug_payload = NULL;
    }
    if (ezsignfolder_send_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsignfolder_send_v2_response->obj_debug);
        ezsignfolder_send_v2_response->obj_debug = NULL;
    }
    free(ezsignfolder_send_v2_response);
}

cJSON *ezsignfolder_send_v2_response_convertToJSON(ezsignfolder_send_v2_response_t *ezsignfolder_send_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_send_v2_response->obj_debug_payload
    if(ezsignfolder_send_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignfolder_send_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfolder_send_v2_response->obj_debug
    if(ezsignfolder_send_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignfolder_send_v2_response->obj_debug);
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

ezsignfolder_send_v2_response_t *ezsignfolder_send_v2_response_parseFromJSON(cJSON *ezsignfolder_send_v2_responseJSON){

    ezsignfolder_send_v2_response_t *ezsignfolder_send_v2_response_local_var = NULL;

    // define the local variable for ezsignfolder_send_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignfolder_send_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignfolder_send_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsignfolder_send_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignfolder_send_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignfolder_send_v2_response_local_var = ezsignfolder_send_v2_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignfolder_send_v2_response_local_var;
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
