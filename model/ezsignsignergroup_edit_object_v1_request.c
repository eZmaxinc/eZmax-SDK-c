#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_edit_object_v1_request.h"



static ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request_create_internal(
    ezsignsignergroup_request_compound_t *obj_ezsignsignergroup
    ) {
    ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request_local_var = malloc(sizeof(ezsignsignergroup_edit_object_v1_request_t));
    if (!ezsignsignergroup_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsignsignergroup_edit_object_v1_request_local_var->obj_ezsignsignergroup = obj_ezsignsignergroup;

    ezsignsignergroup_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsignsignergroup_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request_create(
    ezsignsignergroup_request_compound_t *obj_ezsignsignergroup
    ) {
    return ezsignsignergroup_edit_object_v1_request_create_internal (
        obj_ezsignsignergroup
        );
}

void ezsignsignergroup_edit_object_v1_request_free(ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request) {
    if(NULL == ezsignsignergroup_edit_object_v1_request){
        return ;
    }
    if(ezsignsignergroup_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroup_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_edit_object_v1_request->obj_ezsignsignergroup) {
        ezsignsignergroup_request_compound_free(ezsignsignergroup_edit_object_v1_request->obj_ezsignsignergroup);
        ezsignsignergroup_edit_object_v1_request->obj_ezsignsignergroup = NULL;
    }
    free(ezsignsignergroup_edit_object_v1_request);
}

cJSON *ezsignsignergroup_edit_object_v1_request_convertToJSON(ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_edit_object_v1_request->obj_ezsignsignergroup
    if (!ezsignsignergroup_edit_object_v1_request->obj_ezsignsignergroup) {
        goto fail;
    }
    cJSON *obj_ezsignsignergroup_local_JSON = ezsignsignergroup_request_compound_convertToJSON(ezsignsignergroup_edit_object_v1_request->obj_ezsignsignergroup);
    if(obj_ezsignsignergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroup", obj_ezsignsignergroup_local_JSON);
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

ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request_parseFromJSON(cJSON *ezsignsignergroup_edit_object_v1_requestJSON){

    ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsignsignergroup_edit_object_v1_request->obj_ezsignsignergroup
    ezsignsignergroup_request_compound_t *obj_ezsignsignergroup_local_nonprim = NULL;

    // ezsignsignergroup_edit_object_v1_request->obj_ezsignsignergroup
    cJSON *obj_ezsignsignergroup = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_edit_object_v1_requestJSON, "objEzsignsignergroup");
    if (cJSON_IsNull(obj_ezsignsignergroup)) {
        obj_ezsignsignergroup = NULL;
    }
    if (!obj_ezsignsignergroup) {
        goto end;
    }

    
    obj_ezsignsignergroup_local_nonprim = ezsignsignergroup_request_compound_parseFromJSON(obj_ezsignsignergroup); //nonprimitive


    ezsignsignergroup_edit_object_v1_request_local_var = ezsignsignergroup_edit_object_v1_request_create_internal (
        obj_ezsignsignergroup_local_nonprim
        );

    return ezsignsignergroup_edit_object_v1_request_local_var;
end:
    if (obj_ezsignsignergroup_local_nonprim) {
        ezsignsignergroup_request_compound_free(obj_ezsignsignergroup_local_nonprim);
        obj_ezsignsignergroup_local_nonprim = NULL;
    }
    return NULL;

}
