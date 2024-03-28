#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_edit_object_v2_response.h"



ezsignfoldertype_edit_object_v2_response_t *ezsignfoldertype_edit_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignfoldertype_edit_object_v2_response_t *ezsignfoldertype_edit_object_v2_response_local_var = malloc(sizeof(ezsignfoldertype_edit_object_v2_response_t));
    if (!ezsignfoldertype_edit_object_v2_response_local_var) {
        return NULL;
    }
    ezsignfoldertype_edit_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignfoldertype_edit_object_v2_response_local_var->obj_debug = obj_debug;

    return ezsignfoldertype_edit_object_v2_response_local_var;
}


void ezsignfoldertype_edit_object_v2_response_free(ezsignfoldertype_edit_object_v2_response_t *ezsignfoldertype_edit_object_v2_response) {
    if(NULL == ezsignfoldertype_edit_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_edit_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignfoldertype_edit_object_v2_response->obj_debug_payload);
        ezsignfoldertype_edit_object_v2_response->obj_debug_payload = NULL;
    }
    if (ezsignfoldertype_edit_object_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsignfoldertype_edit_object_v2_response->obj_debug);
        ezsignfoldertype_edit_object_v2_response->obj_debug = NULL;
    }
    free(ezsignfoldertype_edit_object_v2_response);
}

cJSON *ezsignfoldertype_edit_object_v2_response_convertToJSON(ezsignfoldertype_edit_object_v2_response_t *ezsignfoldertype_edit_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_edit_object_v2_response->obj_debug_payload
    if (!ezsignfoldertype_edit_object_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignfoldertype_edit_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldertype_edit_object_v2_response->obj_debug
    if(ezsignfoldertype_edit_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignfoldertype_edit_object_v2_response->obj_debug);
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

ezsignfoldertype_edit_object_v2_response_t *ezsignfoldertype_edit_object_v2_response_parseFromJSON(cJSON *ezsignfoldertype_edit_object_v2_responseJSON){

    ezsignfoldertype_edit_object_v2_response_t *ezsignfoldertype_edit_object_v2_response_local_var = NULL;

    // define the local variable for ezsignfoldertype_edit_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_edit_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignfoldertype_edit_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_edit_object_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignfoldertype_edit_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_edit_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignfoldertype_edit_object_v2_response_local_var = ezsignfoldertype_edit_object_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignfoldertype_edit_object_v2_response_local_var;
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