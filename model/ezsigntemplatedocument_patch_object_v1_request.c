#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_patch_object_v1_request.h"



static ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request_create_internal(
    ezsigntemplatedocument_request_patch_t *obj_ezsigntemplatedocument
    ) {
    ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request_local_var = malloc(sizeof(ezsigntemplatedocument_patch_object_v1_request_t));
    if (!ezsigntemplatedocument_patch_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_patch_object_v1_request_local_var->obj_ezsigntemplatedocument = obj_ezsigntemplatedocument;

    ezsigntemplatedocument_patch_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatedocument_patch_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request_create(
    ezsigntemplatedocument_request_patch_t *obj_ezsigntemplatedocument
    ) {
    return ezsigntemplatedocument_patch_object_v1_request_create_internal (
        obj_ezsigntemplatedocument
        );
}

void ezsigntemplatedocument_patch_object_v1_request_free(ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request) {
    if(NULL == ezsigntemplatedocument_patch_object_v1_request){
        return ;
    }
    if(ezsigntemplatedocument_patch_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_patch_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_patch_object_v1_request->obj_ezsigntemplatedocument) {
        ezsigntemplatedocument_request_patch_free(ezsigntemplatedocument_patch_object_v1_request->obj_ezsigntemplatedocument);
        ezsigntemplatedocument_patch_object_v1_request->obj_ezsigntemplatedocument = NULL;
    }
    free(ezsigntemplatedocument_patch_object_v1_request);
}

cJSON *ezsigntemplatedocument_patch_object_v1_request_convertToJSON(ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_patch_object_v1_request->obj_ezsigntemplatedocument
    if (!ezsigntemplatedocument_patch_object_v1_request->obj_ezsigntemplatedocument) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatedocument_local_JSON = ezsigntemplatedocument_request_patch_convertToJSON(ezsigntemplatedocument_patch_object_v1_request->obj_ezsigntemplatedocument);
    if(obj_ezsigntemplatedocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatedocument", obj_ezsigntemplatedocument_local_JSON);
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

ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_patch_object_v1_requestJSON){

    ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request_local_var = NULL;

    // define the local variable for ezsigntemplatedocument_patch_object_v1_request->obj_ezsigntemplatedocument
    ezsigntemplatedocument_request_patch_t *obj_ezsigntemplatedocument_local_nonprim = NULL;

    // ezsigntemplatedocument_patch_object_v1_request->obj_ezsigntemplatedocument
    cJSON *obj_ezsigntemplatedocument = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_patch_object_v1_requestJSON, "objEzsigntemplatedocument");
    if (cJSON_IsNull(obj_ezsigntemplatedocument)) {
        obj_ezsigntemplatedocument = NULL;
    }
    if (!obj_ezsigntemplatedocument) {
        goto end;
    }

    
    obj_ezsigntemplatedocument_local_nonprim = ezsigntemplatedocument_request_patch_parseFromJSON(obj_ezsigntemplatedocument); //nonprimitive


    ezsigntemplatedocument_patch_object_v1_request_local_var = ezsigntemplatedocument_patch_object_v1_request_create_internal (
        obj_ezsigntemplatedocument_local_nonprim
        );

    return ezsigntemplatedocument_patch_object_v1_request_local_var;
end:
    if (obj_ezsigntemplatedocument_local_nonprim) {
        ezsigntemplatedocument_request_patch_free(obj_ezsigntemplatedocument_local_nonprim);
        obj_ezsigntemplatedocument_local_nonprim = NULL;
    }
    return NULL;

}
