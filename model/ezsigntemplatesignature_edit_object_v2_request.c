#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_edit_object_v2_request.h"



ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request_create(
    ezsigntemplatesignature_request_compound_v2_t *obj_ezsigntemplatesignature
    ) {
    ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request_local_var = malloc(sizeof(ezsigntemplatesignature_edit_object_v2_request_t));
    if (!ezsigntemplatesignature_edit_object_v2_request_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_edit_object_v2_request_local_var->obj_ezsigntemplatesignature = obj_ezsigntemplatesignature;

    return ezsigntemplatesignature_edit_object_v2_request_local_var;
}


void ezsigntemplatesignature_edit_object_v2_request_free(ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request) {
    if(NULL == ezsigntemplatesignature_edit_object_v2_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_edit_object_v2_request->obj_ezsigntemplatesignature) {
        ezsigntemplatesignature_request_compound_v2_free(ezsigntemplatesignature_edit_object_v2_request->obj_ezsigntemplatesignature);
        ezsigntemplatesignature_edit_object_v2_request->obj_ezsigntemplatesignature = NULL;
    }
    free(ezsigntemplatesignature_edit_object_v2_request);
}

cJSON *ezsigntemplatesignature_edit_object_v2_request_convertToJSON(ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_edit_object_v2_request->obj_ezsigntemplatesignature
    if (!ezsigntemplatesignature_edit_object_v2_request->obj_ezsigntemplatesignature) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatesignature_local_JSON = ezsigntemplatesignature_request_compound_v2_convertToJSON(ezsigntemplatesignature_edit_object_v2_request->obj_ezsigntemplatesignature);
    if(obj_ezsigntemplatesignature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatesignature", obj_ezsigntemplatesignature_local_JSON);
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

ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request_parseFromJSON(cJSON *ezsigntemplatesignature_edit_object_v2_requestJSON){

    ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_edit_object_v2_request->obj_ezsigntemplatesignature
    ezsigntemplatesignature_request_compound_v2_t *obj_ezsigntemplatesignature_local_nonprim = NULL;

    // ezsigntemplatesignature_edit_object_v2_request->obj_ezsigntemplatesignature
    cJSON *obj_ezsigntemplatesignature = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_edit_object_v2_requestJSON, "objEzsigntemplatesignature");
    if (!obj_ezsigntemplatesignature) {
        goto end;
    }

    
    obj_ezsigntemplatesignature_local_nonprim = ezsigntemplatesignature_request_compound_v2_parseFromJSON(obj_ezsigntemplatesignature); //nonprimitive


    ezsigntemplatesignature_edit_object_v2_request_local_var = ezsigntemplatesignature_edit_object_v2_request_create (
        obj_ezsigntemplatesignature_local_nonprim
        );

    return ezsigntemplatesignature_edit_object_v2_request_local_var;
end:
    if (obj_ezsigntemplatesignature_local_nonprim) {
        ezsigntemplatesignature_request_compound_v2_free(obj_ezsigntemplatesignature_local_nonprim);
        obj_ezsigntemplatesignature_local_nonprim = NULL;
    }
    return NULL;

}
