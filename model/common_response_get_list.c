#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_get_list.h"



common_response_get_list_t *common_response_get_list_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    common_response_get_list_t *common_response_get_list_local_var = malloc(sizeof(common_response_get_list_t));
    if (!common_response_get_list_local_var) {
        return NULL;
    }
    common_response_get_list_local_var->obj_debug_payload = obj_debug_payload;
    common_response_get_list_local_var->obj_debug = obj_debug;

    return common_response_get_list_local_var;
}


void common_response_get_list_free(common_response_get_list_t *common_response_get_list) {
    if(NULL == common_response_get_list){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_get_list->obj_debug_payload) {
        common_response_obj_debug_payload_get_list_free(common_response_get_list->obj_debug_payload);
        common_response_get_list->obj_debug_payload = NULL;
    }
    if (common_response_get_list->obj_debug) {
        common_response_obj_debug_free(common_response_get_list->obj_debug);
        common_response_get_list->obj_debug = NULL;
    }
    free(common_response_get_list);
}

cJSON *common_response_get_list_convertToJSON(common_response_get_list_t *common_response_get_list) {
    cJSON *item = cJSON_CreateObject();

    // common_response_get_list->obj_debug_payload
    if(common_response_get_list->obj_debug_payload) { 
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_get_list_convertToJSON(common_response_get_list->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // common_response_get_list->obj_debug
    if(common_response_get_list->obj_debug) { 
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(common_response_get_list->obj_debug);
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

common_response_get_list_t *common_response_get_list_parseFromJSON(cJSON *common_response_get_listJSON){

    common_response_get_list_t *common_response_get_list_local_var = NULL;

    // define the local variable for common_response_get_list->obj_debug_payload
    common_response_obj_debug_payload_get_list_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for common_response_get_list->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // common_response_get_list->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(common_response_get_listJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_get_list_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // common_response_get_list->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(common_response_get_listJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    common_response_get_list_local_var = common_response_get_list_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return common_response_get_list_local_var;
end:
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_get_list_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    return NULL;

}
