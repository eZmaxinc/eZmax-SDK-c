#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxcase_patch_object_v1_request.h"



static ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request_create_internal(
    ezmaxcase_request_patch_t *obj_ezmaxcase
    ) {
    ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request_local_var = malloc(sizeof(ezmaxcase_patch_object_v1_request_t));
    if (!ezmaxcase_patch_object_v1_request_local_var) {
        return NULL;
    }
    ezmaxcase_patch_object_v1_request_local_var->obj_ezmaxcase = obj_ezmaxcase;

    ezmaxcase_patch_object_v1_request_local_var->_library_owned = 1;
    return ezmaxcase_patch_object_v1_request_local_var;
}

__attribute__((deprecated)) ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request_create(
    ezmaxcase_request_patch_t *obj_ezmaxcase
    ) {
    return ezmaxcase_patch_object_v1_request_create_internal (
        obj_ezmaxcase
        );
}

void ezmaxcase_patch_object_v1_request_free(ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request) {
    if(NULL == ezmaxcase_patch_object_v1_request){
        return ;
    }
    if(ezmaxcase_patch_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxcase_patch_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxcase_patch_object_v1_request->obj_ezmaxcase) {
        ezmaxcase_request_patch_free(ezmaxcase_patch_object_v1_request->obj_ezmaxcase);
        ezmaxcase_patch_object_v1_request->obj_ezmaxcase = NULL;
    }
    free(ezmaxcase_patch_object_v1_request);
}

cJSON *ezmaxcase_patch_object_v1_request_convertToJSON(ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxcase_patch_object_v1_request->obj_ezmaxcase
    if (!ezmaxcase_patch_object_v1_request->obj_ezmaxcase) {
        goto fail;
    }
    cJSON *obj_ezmaxcase_local_JSON = ezmaxcase_request_patch_convertToJSON(ezmaxcase_patch_object_v1_request->obj_ezmaxcase);
    if(obj_ezmaxcase_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxcase", obj_ezmaxcase_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request_parseFromJSON(cJSON *ezmaxcase_patch_object_v1_requestJSON){

    ezmaxcase_patch_object_v1_request_t *ezmaxcase_patch_object_v1_request_local_var = NULL;

    // define the local variable for ezmaxcase_patch_object_v1_request->obj_ezmaxcase
    ezmaxcase_request_patch_t *obj_ezmaxcase_local_nonprim = NULL;

    // ezmaxcase_patch_object_v1_request->obj_ezmaxcase
    cJSON *obj_ezmaxcase = cJSON_GetObjectItemCaseSensitive(ezmaxcase_patch_object_v1_requestJSON, "objEzmaxcase");
    if (cJSON_IsNull(obj_ezmaxcase)) {
        obj_ezmaxcase = NULL;
    }
    if (!obj_ezmaxcase) {
        goto end;
    }

    
    obj_ezmaxcase_local_nonprim = ezmaxcase_request_patch_parseFromJSON(obj_ezmaxcase); //nonprimitive


    ezmaxcase_patch_object_v1_request_local_var = ezmaxcase_patch_object_v1_request_create_internal (
        obj_ezmaxcase_local_nonprim
        );

    return ezmaxcase_patch_object_v1_request_local_var;
end:
    if (obj_ezmaxcase_local_nonprim) {
        ezmaxcase_request_patch_free(obj_ezmaxcase_local_nonprim);
        obj_ezmaxcase_local_nonprim = NULL;
    }
    return NULL;

}
