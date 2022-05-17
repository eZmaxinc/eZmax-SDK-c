#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_delete_object_v1_response.h"



ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response_local_var = malloc(sizeof(ezsigntemplatepackagemembership_delete_object_v1_response_t));
    if (!ezsigntemplatepackagemembership_delete_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatepackagemembership_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsigntemplatepackagemembership_delete_object_v1_response_local_var;
}


void ezsigntemplatepackagemembership_delete_object_v1_response_free(ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response) {
    if(NULL == ezsigntemplatepackagemembership_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug_payload);
        ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug);
        ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplatepackagemembership_delete_object_v1_response);
}

cJSON *ezsigntemplatepackagemembership_delete_object_v1_response_convertToJSON(ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug_payload
    if(ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug
    if(ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug);
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

ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackagemembership_delete_object_v1_responseJSON){

    ezsigntemplatepackagemembership_delete_object_v1_response_t *ezsigntemplatepackagemembership_delete_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_delete_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigntemplatepackagemembership_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplatepackagemembership_delete_object_v1_response_local_var = ezsigntemplatepackagemembership_delete_object_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplatepackagemembership_delete_object_v1_response_local_var;
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
