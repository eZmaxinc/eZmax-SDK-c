#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list_save_listpresentation_v1_response.h"



list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response_local_var = malloc(sizeof(list_save_listpresentation_v1_response_t));
    if (!list_save_listpresentation_v1_response_local_var) {
        return NULL;
    }
    list_save_listpresentation_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    list_save_listpresentation_v1_response_local_var->obj_debug = obj_debug;

    return list_save_listpresentation_v1_response_local_var;
}


void list_save_listpresentation_v1_response_free(list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response) {
    if(NULL == list_save_listpresentation_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (list_save_listpresentation_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(list_save_listpresentation_v1_response->obj_debug_payload);
        list_save_listpresentation_v1_response->obj_debug_payload = NULL;
    }
    if (list_save_listpresentation_v1_response->obj_debug) {
        common_response_obj_debug_free(list_save_listpresentation_v1_response->obj_debug);
        list_save_listpresentation_v1_response->obj_debug = NULL;
    }
    free(list_save_listpresentation_v1_response);
}

cJSON *list_save_listpresentation_v1_response_convertToJSON(list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // list_save_listpresentation_v1_response->obj_debug_payload
    if(list_save_listpresentation_v1_response->obj_debug_payload) { 
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(list_save_listpresentation_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // list_save_listpresentation_v1_response->obj_debug
    if(list_save_listpresentation_v1_response->obj_debug) { 
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(list_save_listpresentation_v1_response->obj_debug);
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

list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response_parseFromJSON(cJSON *list_save_listpresentation_v1_responseJSON){

    list_save_listpresentation_v1_response_t *list_save_listpresentation_v1_response_local_var = NULL;

    // define the local variable for list_save_listpresentation_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for list_save_listpresentation_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // list_save_listpresentation_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(list_save_listpresentation_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // list_save_listpresentation_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(list_save_listpresentation_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    list_save_listpresentation_v1_response_local_var = list_save_listpresentation_v1_response_create (
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return list_save_listpresentation_v1_response_local_var;
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
