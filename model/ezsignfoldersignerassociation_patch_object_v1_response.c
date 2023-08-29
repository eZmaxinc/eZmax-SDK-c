#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_patch_object_v1_response.h"



ezsignfoldersignerassociation_patch_object_v1_response_t *ezsignfoldersignerassociation_patch_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignfoldersignerassociation_patch_object_v1_response_t *ezsignfoldersignerassociation_patch_object_v1_response_local_var = malloc(sizeof(ezsignfoldersignerassociation_patch_object_v1_response_t));
    if (!ezsignfoldersignerassociation_patch_object_v1_response_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_patch_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignfoldersignerassociation_patch_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsignfoldersignerassociation_patch_object_v1_response_local_var;
}


void ezsignfoldersignerassociation_patch_object_v1_response_free(ezsignfoldersignerassociation_patch_object_v1_response_t *ezsignfoldersignerassociation_patch_object_v1_response) {
    if(NULL == ezsignfoldersignerassociation_patch_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_patch_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignfoldersignerassociation_patch_object_v1_response->obj_debug_payload);
        ezsignfoldersignerassociation_patch_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignfoldersignerassociation_patch_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignfoldersignerassociation_patch_object_v1_response->obj_debug);
        ezsignfoldersignerassociation_patch_object_v1_response->obj_debug = NULL;
    }
    free(ezsignfoldersignerassociation_patch_object_v1_response);
}

cJSON *ezsignfoldersignerassociation_patch_object_v1_response_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_response_t *ezsignfoldersignerassociation_patch_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_patch_object_v1_response->obj_debug_payload
    if (!ezsignfoldersignerassociation_patch_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldersignerassociation_patch_object_v1_response->obj_debug
    if(ezsignfoldersignerassociation_patch_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_response->obj_debug);
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

ezsignfoldersignerassociation_patch_object_v1_response_t *ezsignfoldersignerassociation_patch_object_v1_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_patch_object_v1_responseJSON){

    ezsignfoldersignerassociation_patch_object_v1_response_t *ezsignfoldersignerassociation_patch_object_v1_response_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_patch_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_patch_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignfoldersignerassociation_patch_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_patch_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignfoldersignerassociation_patch_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_patch_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignfoldersignerassociation_patch_object_v1_response_local_var = ezsignfoldersignerassociation_patch_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_patch_object_v1_response_local_var;
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
