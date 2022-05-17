#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_edit_object_v1_response.h"



ezsigntemplateformfieldgroup_edit_object_v1_response_t *ezsigntemplateformfieldgroup_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplateformfieldgroup_edit_object_v1_response_t *ezsigntemplateformfieldgroup_edit_object_v1_response_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_edit_object_v1_response_t));
    if (!ezsigntemplateformfieldgroup_edit_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplateformfieldgroup_edit_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsigntemplateformfieldgroup_edit_object_v1_response_local_var;
}


void ezsigntemplateformfieldgroup_edit_object_v1_response_free(ezsigntemplateformfieldgroup_edit_object_v1_response_t *ezsigntemplateformfieldgroup_edit_object_v1_response) {
    if(NULL == ezsigntemplateformfieldgroup_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug_payload);
        ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug);
        ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplateformfieldgroup_edit_object_v1_response);
}

cJSON *ezsigntemplateformfieldgroup_edit_object_v1_response_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_response_t *ezsigntemplateformfieldgroup_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug_payload
    if(ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug
    if(ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug);
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

ezsigntemplateformfieldgroup_edit_object_v1_response_t *ezsigntemplateformfieldgroup_edit_object_v1_response_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_edit_object_v1_responseJSON){

    ezsigntemplateformfieldgroup_edit_object_v1_response_t *ezsigntemplateformfieldgroup_edit_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_edit_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigntemplateformfieldgroup_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplateformfieldgroup_edit_object_v1_response_local_var = ezsigntemplateformfieldgroup_edit_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplateformfieldgroup_edit_object_v1_response_local_var;
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
