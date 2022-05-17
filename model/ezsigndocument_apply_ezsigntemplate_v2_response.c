#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_apply_ezsigntemplate_v2_response.h"



ezsigndocument_apply_ezsigntemplate_v2_response_t *ezsigndocument_apply_ezsigntemplate_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigndocument_apply_ezsigntemplate_v2_response_t *ezsigndocument_apply_ezsigntemplate_v2_response_local_var = malloc(sizeof(ezsigndocument_apply_ezsigntemplate_v2_response_t));
    if (!ezsigndocument_apply_ezsigntemplate_v2_response_local_var) {
        return NULL;
    }
    ezsigndocument_apply_ezsigntemplate_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigndocument_apply_ezsigntemplate_v2_response_local_var->obj_debug = obj_debug;

    return ezsigndocument_apply_ezsigntemplate_v2_response_local_var;
}


void ezsigndocument_apply_ezsigntemplate_v2_response_free(ezsigndocument_apply_ezsigntemplate_v2_response_t *ezsigndocument_apply_ezsigntemplate_v2_response) {
    if(NULL == ezsigndocument_apply_ezsigntemplate_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug_payload);
        ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug_payload = NULL;
    }
    if (ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug);
        ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug = NULL;
    }
    free(ezsigndocument_apply_ezsigntemplate_v2_response);
}

cJSON *ezsigndocument_apply_ezsigntemplate_v2_response_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_response_t *ezsigndocument_apply_ezsigntemplate_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug_payload
    if(ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug
    if(ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug);
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

ezsigndocument_apply_ezsigntemplate_v2_response_t *ezsigndocument_apply_ezsigntemplate_v2_response_parseFromJSON(cJSON *ezsigndocument_apply_ezsigntemplate_v2_responseJSON){

    ezsigndocument_apply_ezsigntemplate_v2_response_t *ezsigndocument_apply_ezsigntemplate_v2_response_local_var = NULL;

    // define the local variable for ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigndocument_apply_ezsigntemplate_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigndocument_apply_ezsigntemplate_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigndocument_apply_ezsigntemplate_v2_response_local_var = ezsigndocument_apply_ezsigntemplate_v2_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigndocument_apply_ezsigntemplate_v2_response_local_var;
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
