#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_edit_object_v1_response.h"



ezsigntemplate_edit_object_v1_response_t *ezsigntemplate_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplate_edit_object_v1_response_t *ezsigntemplate_edit_object_v1_response_local_var = malloc(sizeof(ezsigntemplate_edit_object_v1_response_t));
    if (!ezsigntemplate_edit_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplate_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplate_edit_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsigntemplate_edit_object_v1_response_local_var;
}


void ezsigntemplate_edit_object_v1_response_free(ezsigntemplate_edit_object_v1_response_t *ezsigntemplate_edit_object_v1_response) {
    if(NULL == ezsigntemplate_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplate_edit_object_v1_response->obj_debug_payload);
        ezsigntemplate_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplate_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplate_edit_object_v1_response->obj_debug);
        ezsigntemplate_edit_object_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplate_edit_object_v1_response);
}

cJSON *ezsigntemplate_edit_object_v1_response_convertToJSON(ezsigntemplate_edit_object_v1_response_t *ezsigntemplate_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_edit_object_v1_response->obj_debug_payload
    if(ezsigntemplate_edit_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplate_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplate_edit_object_v1_response->obj_debug
    if(ezsigntemplate_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplate_edit_object_v1_response->obj_debug);
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

ezsigntemplate_edit_object_v1_response_t *ezsigntemplate_edit_object_v1_response_parseFromJSON(cJSON *ezsigntemplate_edit_object_v1_responseJSON){

    ezsigntemplate_edit_object_v1_response_t *ezsigntemplate_edit_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplate_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplate_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplate_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_edit_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigntemplate_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplate_edit_object_v1_response_local_var = ezsigntemplate_edit_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplate_edit_object_v1_response_local_var;
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
