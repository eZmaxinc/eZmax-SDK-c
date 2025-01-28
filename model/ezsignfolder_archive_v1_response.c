#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_archive_v1_response.h"



static ezsignfolder_archive_v1_response_t *ezsignfolder_archive_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignfolder_archive_v1_response_t *ezsignfolder_archive_v1_response_local_var = malloc(sizeof(ezsignfolder_archive_v1_response_t));
    if (!ezsignfolder_archive_v1_response_local_var) {
        return NULL;
    }
    ezsignfolder_archive_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignfolder_archive_v1_response_local_var->obj_debug = obj_debug;

    ezsignfolder_archive_v1_response_local_var->_library_owned = 1;
    return ezsignfolder_archive_v1_response_local_var;
}

__attribute__((deprecated)) ezsignfolder_archive_v1_response_t *ezsignfolder_archive_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    return ezsignfolder_archive_v1_response_create_internal (
        obj_debug_payload,
        obj_debug
        );
}

void ezsignfolder_archive_v1_response_free(ezsignfolder_archive_v1_response_t *ezsignfolder_archive_v1_response) {
    if(NULL == ezsignfolder_archive_v1_response){
        return ;
    }
    if(ezsignfolder_archive_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_archive_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_archive_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignfolder_archive_v1_response->obj_debug_payload);
        ezsignfolder_archive_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignfolder_archive_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignfolder_archive_v1_response->obj_debug);
        ezsignfolder_archive_v1_response->obj_debug = NULL;
    }
    free(ezsignfolder_archive_v1_response);
}

cJSON *ezsignfolder_archive_v1_response_convertToJSON(ezsignfolder_archive_v1_response_t *ezsignfolder_archive_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_archive_v1_response->obj_debug_payload
    if (!ezsignfolder_archive_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignfolder_archive_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfolder_archive_v1_response->obj_debug
    if(ezsignfolder_archive_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignfolder_archive_v1_response->obj_debug);
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

ezsignfolder_archive_v1_response_t *ezsignfolder_archive_v1_response_parseFromJSON(cJSON *ezsignfolder_archive_v1_responseJSON){

    ezsignfolder_archive_v1_response_t *ezsignfolder_archive_v1_response_local_var = NULL;

    // define the local variable for ezsignfolder_archive_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignfolder_archive_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignfolder_archive_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignfolder_archive_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignfolder_archive_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignfolder_archive_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignfolder_archive_v1_response_local_var = ezsignfolder_archive_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignfolder_archive_v1_response_local_var;
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
