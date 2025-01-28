#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_edit_object_v1_request.h"



static ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request_create_internal(
    ezsigntemplatesigner_request_compound_t *obj_ezsigntemplatesigner
    ) {
    ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request_local_var = malloc(sizeof(ezsigntemplatesigner_edit_object_v1_request_t));
    if (!ezsigntemplatesigner_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_edit_object_v1_request_local_var->obj_ezsigntemplatesigner = obj_ezsigntemplatesigner;

    ezsigntemplatesigner_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatesigner_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request_create(
    ezsigntemplatesigner_request_compound_t *obj_ezsigntemplatesigner
    ) {
    return ezsigntemplatesigner_edit_object_v1_request_create_internal (
        obj_ezsigntemplatesigner
        );
}

void ezsigntemplatesigner_edit_object_v1_request_free(ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request) {
    if(NULL == ezsigntemplatesigner_edit_object_v1_request){
        return ;
    }
    if(ezsigntemplatesigner_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesigner_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_edit_object_v1_request->obj_ezsigntemplatesigner) {
        ezsigntemplatesigner_request_compound_free(ezsigntemplatesigner_edit_object_v1_request->obj_ezsigntemplatesigner);
        ezsigntemplatesigner_edit_object_v1_request->obj_ezsigntemplatesigner = NULL;
    }
    free(ezsigntemplatesigner_edit_object_v1_request);
}

cJSON *ezsigntemplatesigner_edit_object_v1_request_convertToJSON(ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_edit_object_v1_request->obj_ezsigntemplatesigner
    if (!ezsigntemplatesigner_edit_object_v1_request->obj_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatesigner_local_JSON = ezsigntemplatesigner_request_compound_convertToJSON(ezsigntemplatesigner_edit_object_v1_request->obj_ezsigntemplatesigner);
    if(obj_ezsigntemplatesigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatesigner", obj_ezsigntemplatesigner_local_JSON);
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

ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatesigner_edit_object_v1_requestJSON){

    ezsigntemplatesigner_edit_object_v1_request_t *ezsigntemplatesigner_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_edit_object_v1_request->obj_ezsigntemplatesigner
    ezsigntemplatesigner_request_compound_t *obj_ezsigntemplatesigner_local_nonprim = NULL;

    // ezsigntemplatesigner_edit_object_v1_request->obj_ezsigntemplatesigner
    cJSON *obj_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_edit_object_v1_requestJSON, "objEzsigntemplatesigner");
    if (cJSON_IsNull(obj_ezsigntemplatesigner)) {
        obj_ezsigntemplatesigner = NULL;
    }
    if (!obj_ezsigntemplatesigner) {
        goto end;
    }

    
    obj_ezsigntemplatesigner_local_nonprim = ezsigntemplatesigner_request_compound_parseFromJSON(obj_ezsigntemplatesigner); //nonprimitive


    ezsigntemplatesigner_edit_object_v1_request_local_var = ezsigntemplatesigner_edit_object_v1_request_create_internal (
        obj_ezsigntemplatesigner_local_nonprim
        );

    return ezsigntemplatesigner_edit_object_v1_request_local_var;
end:
    if (obj_ezsigntemplatesigner_local_nonprim) {
        ezsigntemplatesigner_request_compound_free(obj_ezsigntemplatesigner_local_nonprim);
        obj_ezsigntemplatesigner_local_nonprim = NULL;
    }
    return NULL;

}
