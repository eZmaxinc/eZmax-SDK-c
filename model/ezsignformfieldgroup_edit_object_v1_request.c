#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_edit_object_v1_request.h"



static ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request_create_internal(
    ezsignformfieldgroup_request_compound_t *obj_ezsignformfieldgroup
    ) {
    ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request_local_var = malloc(sizeof(ezsignformfieldgroup_edit_object_v1_request_t));
    if (!ezsignformfieldgroup_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_edit_object_v1_request_local_var->obj_ezsignformfieldgroup = obj_ezsignformfieldgroup;

    ezsignformfieldgroup_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsignformfieldgroup_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request_create(
    ezsignformfieldgroup_request_compound_t *obj_ezsignformfieldgroup
    ) {
    return ezsignformfieldgroup_edit_object_v1_request_create_internal (
        obj_ezsignformfieldgroup
        );
}

void ezsignformfieldgroup_edit_object_v1_request_free(ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request) {
    if(NULL == ezsignformfieldgroup_edit_object_v1_request){
        return ;
    }
    if(ezsignformfieldgroup_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignformfieldgroup_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_edit_object_v1_request->obj_ezsignformfieldgroup) {
        ezsignformfieldgroup_request_compound_free(ezsignformfieldgroup_edit_object_v1_request->obj_ezsignformfieldgroup);
        ezsignformfieldgroup_edit_object_v1_request->obj_ezsignformfieldgroup = NULL;
    }
    free(ezsignformfieldgroup_edit_object_v1_request);
}

cJSON *ezsignformfieldgroup_edit_object_v1_request_convertToJSON(ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_edit_object_v1_request->obj_ezsignformfieldgroup
    if (!ezsignformfieldgroup_edit_object_v1_request->obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *obj_ezsignformfieldgroup_local_JSON = ezsignformfieldgroup_request_compound_convertToJSON(ezsignformfieldgroup_edit_object_v1_request->obj_ezsignformfieldgroup);
    if(obj_ezsignformfieldgroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignformfieldgroup", obj_ezsignformfieldgroup_local_JSON);
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

ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request_parseFromJSON(cJSON *ezsignformfieldgroup_edit_object_v1_requestJSON){

    ezsignformfieldgroup_edit_object_v1_request_t *ezsignformfieldgroup_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsignformfieldgroup_edit_object_v1_request->obj_ezsignformfieldgroup
    ezsignformfieldgroup_request_compound_t *obj_ezsignformfieldgroup_local_nonprim = NULL;

    // ezsignformfieldgroup_edit_object_v1_request->obj_ezsignformfieldgroup
    cJSON *obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_edit_object_v1_requestJSON, "objEzsignformfieldgroup");
    if (cJSON_IsNull(obj_ezsignformfieldgroup)) {
        obj_ezsignformfieldgroup = NULL;
    }
    if (!obj_ezsignformfieldgroup) {
        goto end;
    }

    
    obj_ezsignformfieldgroup_local_nonprim = ezsignformfieldgroup_request_compound_parseFromJSON(obj_ezsignformfieldgroup); //nonprimitive


    ezsignformfieldgroup_edit_object_v1_request_local_var = ezsignformfieldgroup_edit_object_v1_request_create_internal (
        obj_ezsignformfieldgroup_local_nonprim
        );

    return ezsignformfieldgroup_edit_object_v1_request_local_var;
end:
    if (obj_ezsignformfieldgroup_local_nonprim) {
        ezsignformfieldgroup_request_compound_free(obj_ezsignformfieldgroup_local_nonprim);
        obj_ezsignformfieldgroup_local_nonprim = NULL;
    }
    return NULL;

}
