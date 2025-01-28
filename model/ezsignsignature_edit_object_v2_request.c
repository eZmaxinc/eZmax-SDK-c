#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_edit_object_v2_request.h"



static ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request_create_internal(
    ezsignsignature_request_compound_v2_t *obj_ezsignsignature
    ) {
    ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request_local_var = malloc(sizeof(ezsignsignature_edit_object_v2_request_t));
    if (!ezsignsignature_edit_object_v2_request_local_var) {
        return NULL;
    }
    ezsignsignature_edit_object_v2_request_local_var->obj_ezsignsignature = obj_ezsignsignature;

    ezsignsignature_edit_object_v2_request_local_var->_library_owned = 1;
    return ezsignsignature_edit_object_v2_request_local_var;
}

__attribute__((deprecated)) ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request_create(
    ezsignsignature_request_compound_v2_t *obj_ezsignsignature
    ) {
    return ezsignsignature_edit_object_v2_request_create_internal (
        obj_ezsignsignature
        );
}

void ezsignsignature_edit_object_v2_request_free(ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request) {
    if(NULL == ezsignsignature_edit_object_v2_request){
        return ;
    }
    if(ezsignsignature_edit_object_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignature_edit_object_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_edit_object_v2_request->obj_ezsignsignature) {
        ezsignsignature_request_compound_v2_free(ezsignsignature_edit_object_v2_request->obj_ezsignsignature);
        ezsignsignature_edit_object_v2_request->obj_ezsignsignature = NULL;
    }
    free(ezsignsignature_edit_object_v2_request);
}

cJSON *ezsignsignature_edit_object_v2_request_convertToJSON(ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_edit_object_v2_request->obj_ezsignsignature
    if (!ezsignsignature_edit_object_v2_request->obj_ezsignsignature) {
        goto fail;
    }
    cJSON *obj_ezsignsignature_local_JSON = ezsignsignature_request_compound_v2_convertToJSON(ezsignsignature_edit_object_v2_request->obj_ezsignsignature);
    if(obj_ezsignsignature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignature", obj_ezsignsignature_local_JSON);
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

ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request_parseFromJSON(cJSON *ezsignsignature_edit_object_v2_requestJSON){

    ezsignsignature_edit_object_v2_request_t *ezsignsignature_edit_object_v2_request_local_var = NULL;

    // define the local variable for ezsignsignature_edit_object_v2_request->obj_ezsignsignature
    ezsignsignature_request_compound_v2_t *obj_ezsignsignature_local_nonprim = NULL;

    // ezsignsignature_edit_object_v2_request->obj_ezsignsignature
    cJSON *obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignsignature_edit_object_v2_requestJSON, "objEzsignsignature");
    if (cJSON_IsNull(obj_ezsignsignature)) {
        obj_ezsignsignature = NULL;
    }
    if (!obj_ezsignsignature) {
        goto end;
    }

    
    obj_ezsignsignature_local_nonprim = ezsignsignature_request_compound_v2_parseFromJSON(obj_ezsignsignature); //nonprimitive


    ezsignsignature_edit_object_v2_request_local_var = ezsignsignature_edit_object_v2_request_create_internal (
        obj_ezsignsignature_local_nonprim
        );

    return ezsignsignature_edit_object_v2_request_local_var;
end:
    if (obj_ezsignsignature_local_nonprim) {
        ezsignsignature_request_compound_v2_free(obj_ezsignsignature_local_nonprim);
        obj_ezsignsignature_local_nonprim = NULL;
    }
    return NULL;

}
