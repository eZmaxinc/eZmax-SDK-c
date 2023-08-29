#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_edit_object_v1_response.h"



ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response_local_var = malloc(sizeof(ezsigntemplatepackagesigner_edit_object_v1_response_t));
    if (!ezsigntemplatepackagesigner_edit_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_edit_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatepackagesigner_edit_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsigntemplatepackagesigner_edit_object_v1_response_local_var;
}


void ezsigntemplatepackagesigner_edit_object_v1_response_free(ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response) {
    if(NULL == ezsigntemplatepackagesigner_edit_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug_payload);
        ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug);
        ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplatepackagesigner_edit_object_v1_response);
}

cJSON *ezsigntemplatepackagesigner_edit_object_v1_response_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug_payload
    if (!ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug
    if(ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug);
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

ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagesigner_edit_object_v1_responseJSON){

    ezsigntemplatepackagesigner_edit_object_v1_response_t *ezsigntemplatepackagesigner_edit_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_edit_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsigntemplatepackagesigner_edit_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_edit_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplatepackagesigner_edit_object_v1_response_local_var = ezsigntemplatepackagesigner_edit_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplatepackagesigner_edit_object_v1_response_local_var;
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
