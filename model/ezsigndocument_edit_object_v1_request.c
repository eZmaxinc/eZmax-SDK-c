#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_edit_object_v1_request.h"



static ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_create_internal(
    ezsigndocument_request_compound_t *obj_ezsigndocument
    ) {
    ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_local_var = malloc(sizeof(ezsigndocument_edit_object_v1_request_t));
    if (!ezsigndocument_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_edit_object_v1_request_local_var->obj_ezsigndocument = obj_ezsigndocument;

    ezsigndocument_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsigndocument_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_create(
    ezsigndocument_request_compound_t *obj_ezsigndocument
    ) {
    return ezsigndocument_edit_object_v1_request_create_internal (
        obj_ezsigndocument
        );
}

void ezsigndocument_edit_object_v1_request_free(ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request) {
    if(NULL == ezsigndocument_edit_object_v1_request){
        return ;
    }
    if(ezsigndocument_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_edit_object_v1_request->obj_ezsigndocument) {
        ezsigndocument_request_compound_free(ezsigndocument_edit_object_v1_request->obj_ezsigndocument);
        ezsigndocument_edit_object_v1_request->obj_ezsigndocument = NULL;
    }
    free(ezsigndocument_edit_object_v1_request);
}

cJSON *ezsigndocument_edit_object_v1_request_convertToJSON(ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_edit_object_v1_request->obj_ezsigndocument
    if (!ezsigndocument_edit_object_v1_request->obj_ezsigndocument) {
        goto fail;
    }
    cJSON *obj_ezsigndocument_local_JSON = ezsigndocument_request_compound_convertToJSON(ezsigndocument_edit_object_v1_request->obj_ezsigndocument);
    if(obj_ezsigndocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigndocument", obj_ezsigndocument_local_JSON);
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

ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_parseFromJSON(cJSON *ezsigndocument_edit_object_v1_requestJSON){

    ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsigndocument_edit_object_v1_request->obj_ezsigndocument
    ezsigndocument_request_compound_t *obj_ezsigndocument_local_nonprim = NULL;

    // ezsigndocument_edit_object_v1_request->obj_ezsigndocument
    cJSON *obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsigndocument_edit_object_v1_requestJSON, "objEzsigndocument");
    if (cJSON_IsNull(obj_ezsigndocument)) {
        obj_ezsigndocument = NULL;
    }
    if (!obj_ezsigndocument) {
        goto end;
    }

    
    obj_ezsigndocument_local_nonprim = ezsigndocument_request_compound_parseFromJSON(obj_ezsigndocument); //nonprimitive


    ezsigndocument_edit_object_v1_request_local_var = ezsigndocument_edit_object_v1_request_create_internal (
        obj_ezsigndocument_local_nonprim
        );

    return ezsigndocument_edit_object_v1_request_local_var;
end:
    if (obj_ezsigndocument_local_nonprim) {
        ezsigndocument_request_compound_free(obj_ezsigndocument_local_nonprim);
        obj_ezsigndocument_local_nonprim = NULL;
    }
    return NULL;

}
