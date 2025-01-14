#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpagerecognition_delete_object_v1_response.h"



ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response_local_var = malloc(sizeof(ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t));
    if (!ezsigntemplatedocumentpagerecognition_delete_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpagerecognition_delete_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatedocumentpagerecognition_delete_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsigntemplatedocumentpagerecognition_delete_object_v1_response_local_var;
}


void ezsigntemplatedocumentpagerecognition_delete_object_v1_response_free(ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response) {
    if(NULL == ezsigntemplatedocumentpagerecognition_delete_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug_payload);
        ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug);
        ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplatedocumentpagerecognition_delete_object_v1_response);
}

cJSON *ezsigntemplatedocumentpagerecognition_delete_object_v1_response_convertToJSON(ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug_payload
    if (!ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug
    if(ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug);
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

ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_delete_object_v1_responseJSON){

    ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t *ezsigntemplatedocumentpagerecognition_delete_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_delete_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsigntemplatedocumentpagerecognition_delete_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_delete_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplatedocumentpagerecognition_delete_object_v1_response_local_var = ezsigntemplatedocumentpagerecognition_delete_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplatedocumentpagerecognition_delete_object_v1_response_local_var;
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
