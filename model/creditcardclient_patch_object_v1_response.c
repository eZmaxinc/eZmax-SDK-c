#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_patch_object_v1_response.h"



creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response_local_var = malloc(sizeof(creditcardclient_patch_object_v1_response_t));
    if (!creditcardclient_patch_object_v1_response_local_var) {
        return NULL;
    }
    creditcardclient_patch_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    creditcardclient_patch_object_v1_response_local_var->obj_debug = obj_debug;

    return creditcardclient_patch_object_v1_response_local_var;
}


void creditcardclient_patch_object_v1_response_free(creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response) {
    if(NULL == creditcardclient_patch_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_patch_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(creditcardclient_patch_object_v1_response->obj_debug_payload);
        creditcardclient_patch_object_v1_response->obj_debug_payload = NULL;
    }
    if (creditcardclient_patch_object_v1_response->obj_debug) {
        common_response_obj_debug_free(creditcardclient_patch_object_v1_response->obj_debug);
        creditcardclient_patch_object_v1_response->obj_debug = NULL;
    }
    free(creditcardclient_patch_object_v1_response);
}

cJSON *creditcardclient_patch_object_v1_response_convertToJSON(creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_patch_object_v1_response->obj_debug_payload
    if (!creditcardclient_patch_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(creditcardclient_patch_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // creditcardclient_patch_object_v1_response->obj_debug
    if(creditcardclient_patch_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(creditcardclient_patch_object_v1_response->obj_debug);
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

creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response_parseFromJSON(cJSON *creditcardclient_patch_object_v1_responseJSON){

    creditcardclient_patch_object_v1_response_t *creditcardclient_patch_object_v1_response_local_var = NULL;

    // define the local variable for creditcardclient_patch_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for creditcardclient_patch_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // creditcardclient_patch_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(creditcardclient_patch_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // creditcardclient_patch_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(creditcardclient_patch_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    creditcardclient_patch_object_v1_response_local_var = creditcardclient_patch_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return creditcardclient_patch_object_v1_response_local_var;
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
