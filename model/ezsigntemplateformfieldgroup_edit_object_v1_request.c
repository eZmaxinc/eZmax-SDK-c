#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_edit_object_v1_request.h"



static ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request_create_internal(
    ezsigntemplateformfieldgroup_request_compound_t *obj_ezsigntemplateformfieldgroup
    ) {
    ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_edit_object_v1_request_t));
    if (!ezsigntemplateformfieldgroup_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_edit_object_v1_request_local_var->obj_ezsigntemplateformfieldgroup = obj_ezsigntemplateformfieldgroup;

    ezsigntemplateformfieldgroup_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplateformfieldgroup_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request_create(
    ezsigntemplateformfieldgroup_request_compound_t *obj_ezsigntemplateformfieldgroup
    ) {
    return ezsigntemplateformfieldgroup_edit_object_v1_request_create_internal (
        obj_ezsigntemplateformfieldgroup
        );
}

void ezsigntemplateformfieldgroup_edit_object_v1_request_free(ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request) {
    if(NULL == ezsigntemplateformfieldgroup_edit_object_v1_request){
        return ;
    }
    if(ezsigntemplateformfieldgroup_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateformfieldgroup_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_edit_object_v1_request->obj_ezsigntemplateformfieldgroup) {
        ezsigntemplateformfieldgroup_request_compound_free(ezsigntemplateformfieldgroup_edit_object_v1_request->obj_ezsigntemplateformfieldgroup);
        ezsigntemplateformfieldgroup_edit_object_v1_request->obj_ezsigntemplateformfieldgroup = NULL;
    }
    free(ezsigntemplateformfieldgroup_edit_object_v1_request);
}

cJSON *ezsigntemplateformfieldgroup_edit_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_edit_object_v1_request->obj_ezsigntemplateformfieldgroup
    if (!ezsigntemplateformfieldgroup_edit_object_v1_request->obj_ezsigntemplateformfieldgroup) {
        goto fail;
    }
    cJSON *obj_ezsigntemplateformfieldgroup_local_JSON = ezsigntemplateformfieldgroup_request_compound_convertToJSON(ezsigntemplateformfieldgroup_edit_object_v1_request->obj_ezsigntemplateformfieldgroup);
    if(obj_ezsigntemplateformfieldgroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplateformfieldgroup", obj_ezsigntemplateformfieldgroup_local_JSON);
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

ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_edit_object_v1_requestJSON){

    ezsigntemplateformfieldgroup_edit_object_v1_request_t *ezsigntemplateformfieldgroup_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_edit_object_v1_request->obj_ezsigntemplateformfieldgroup
    ezsigntemplateformfieldgroup_request_compound_t *obj_ezsigntemplateformfieldgroup_local_nonprim = NULL;

    // ezsigntemplateformfieldgroup_edit_object_v1_request->obj_ezsigntemplateformfieldgroup
    cJSON *obj_ezsigntemplateformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_edit_object_v1_requestJSON, "objEzsigntemplateformfieldgroup");
    if (cJSON_IsNull(obj_ezsigntemplateformfieldgroup)) {
        obj_ezsigntemplateformfieldgroup = NULL;
    }
    if (!obj_ezsigntemplateformfieldgroup) {
        goto end;
    }

    
    obj_ezsigntemplateformfieldgroup_local_nonprim = ezsigntemplateformfieldgroup_request_compound_parseFromJSON(obj_ezsigntemplateformfieldgroup); //nonprimitive


    ezsigntemplateformfieldgroup_edit_object_v1_request_local_var = ezsigntemplateformfieldgroup_edit_object_v1_request_create_internal (
        obj_ezsigntemplateformfieldgroup_local_nonprim
        );

    return ezsigntemplateformfieldgroup_edit_object_v1_request_local_var;
end:
    if (obj_ezsigntemplateformfieldgroup_local_nonprim) {
        ezsigntemplateformfieldgroup_request_compound_free(obj_ezsigntemplateformfieldgroup_local_nonprim);
        obj_ezsigntemplateformfieldgroup_local_nonprim = NULL;
    }
    return NULL;

}
