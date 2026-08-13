#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_edit_object_v2_request.h"



static ezsigntemplatesigner_edit_object_v2_request_t *ezsigntemplatesigner_edit_object_v2_request_create_internal(
    ezsigntemplatesigner_request_compound_v2_t *obj_ezsigntemplatesigner
    ) {
    ezsigntemplatesigner_edit_object_v2_request_t *ezsigntemplatesigner_edit_object_v2_request_local_var = malloc(sizeof(ezsigntemplatesigner_edit_object_v2_request_t));
    if (!ezsigntemplatesigner_edit_object_v2_request_local_var) {
        return NULL;
    }
    memset(ezsigntemplatesigner_edit_object_v2_request_local_var, 0, sizeof(ezsigntemplatesigner_edit_object_v2_request_t));
    ezsigntemplatesigner_edit_object_v2_request_local_var->_library_owned = 1;
    ezsigntemplatesigner_edit_object_v2_request_local_var->obj_ezsigntemplatesigner = obj_ezsigntemplatesigner;
    return ezsigntemplatesigner_edit_object_v2_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatesigner_edit_object_v2_request_t *ezsigntemplatesigner_edit_object_v2_request_create(
    ezsigntemplatesigner_request_compound_v2_t *obj_ezsigntemplatesigner
    ) {
    ezsigntemplatesigner_edit_object_v2_request_t *result = ezsigntemplatesigner_edit_object_v2_request_create_internal (
        obj_ezsigntemplatesigner
        );
    if (!result) {
    }
    return result;
}

void ezsigntemplatesigner_edit_object_v2_request_free(ezsigntemplatesigner_edit_object_v2_request_t *ezsigntemplatesigner_edit_object_v2_request) {
    if(NULL == ezsigntemplatesigner_edit_object_v2_request){
        return ;
    }
    if(ezsigntemplatesigner_edit_object_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesigner_edit_object_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_edit_object_v2_request->obj_ezsigntemplatesigner) {
        ezsigntemplatesigner_request_compound_v2_free(ezsigntemplatesigner_edit_object_v2_request->obj_ezsigntemplatesigner);
        ezsigntemplatesigner_edit_object_v2_request->obj_ezsigntemplatesigner = NULL;
    }
    free(ezsigntemplatesigner_edit_object_v2_request);
}

cJSON *ezsigntemplatesigner_edit_object_v2_request_convertToJSON(ezsigntemplatesigner_edit_object_v2_request_t *ezsigntemplatesigner_edit_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_edit_object_v2_request->obj_ezsigntemplatesigner
    if (!ezsigntemplatesigner_edit_object_v2_request->obj_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatesigner_local_JSON = ezsigntemplatesigner_request_compound_v2_convertToJSON(ezsigntemplatesigner_edit_object_v2_request->obj_ezsigntemplatesigner);
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

ezsigntemplatesigner_edit_object_v2_request_t *ezsigntemplatesigner_edit_object_v2_request_parseFromJSON(cJSON *ezsigntemplatesigner_edit_object_v2_requestJSON){

    ezsigntemplatesigner_edit_object_v2_request_t *ezsigntemplatesigner_edit_object_v2_request_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_edit_object_v2_request->obj_ezsigntemplatesigner
    ezsigntemplatesigner_request_compound_v2_t *obj_ezsigntemplatesigner_local_nonprim = NULL;

    // ezsigntemplatesigner_edit_object_v2_request->obj_ezsigntemplatesigner
    cJSON *obj_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_edit_object_v2_requestJSON, "objEzsigntemplatesigner");
    if (cJSON_IsNull(obj_ezsigntemplatesigner)) {
        obj_ezsigntemplatesigner = NULL;
    }
    if (!obj_ezsigntemplatesigner) {
        goto end;
    }

    
    obj_ezsigntemplatesigner_local_nonprim = ezsigntemplatesigner_request_compound_v2_parseFromJSON(obj_ezsigntemplatesigner); //nonprimitive



    ezsigntemplatesigner_edit_object_v2_request_local_var = ezsigntemplatesigner_edit_object_v2_request_create_internal (
        obj_ezsigntemplatesigner_local_nonprim
        );

    if (!ezsigntemplatesigner_edit_object_v2_request_local_var) {
        goto end;
    }

    return ezsigntemplatesigner_edit_object_v2_request_local_var;
end:
    if (obj_ezsigntemplatesigner_local_nonprim) {
        ezsigntemplatesigner_request_compound_v2_free(obj_ezsigntemplatesigner_local_nonprim);
        obj_ezsigntemplatesigner_local_nonprim = NULL;
    }
    return NULL;

}
