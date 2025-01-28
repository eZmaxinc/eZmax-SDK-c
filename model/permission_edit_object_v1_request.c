#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_edit_object_v1_request.h"



static permission_edit_object_v1_request_t *permission_edit_object_v1_request_create_internal(
    permission_request_compound_t *obj_permission
    ) {
    permission_edit_object_v1_request_t *permission_edit_object_v1_request_local_var = malloc(sizeof(permission_edit_object_v1_request_t));
    if (!permission_edit_object_v1_request_local_var) {
        return NULL;
    }
    permission_edit_object_v1_request_local_var->obj_permission = obj_permission;

    permission_edit_object_v1_request_local_var->_library_owned = 1;
    return permission_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) permission_edit_object_v1_request_t *permission_edit_object_v1_request_create(
    permission_request_compound_t *obj_permission
    ) {
    return permission_edit_object_v1_request_create_internal (
        obj_permission
        );
}

void permission_edit_object_v1_request_free(permission_edit_object_v1_request_t *permission_edit_object_v1_request) {
    if(NULL == permission_edit_object_v1_request){
        return ;
    }
    if(permission_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "permission_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (permission_edit_object_v1_request->obj_permission) {
        permission_request_compound_free(permission_edit_object_v1_request->obj_permission);
        permission_edit_object_v1_request->obj_permission = NULL;
    }
    free(permission_edit_object_v1_request);
}

cJSON *permission_edit_object_v1_request_convertToJSON(permission_edit_object_v1_request_t *permission_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // permission_edit_object_v1_request->obj_permission
    if (!permission_edit_object_v1_request->obj_permission) {
        goto fail;
    }
    cJSON *obj_permission_local_JSON = permission_request_compound_convertToJSON(permission_edit_object_v1_request->obj_permission);
    if(obj_permission_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPermission", obj_permission_local_JSON);
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

permission_edit_object_v1_request_t *permission_edit_object_v1_request_parseFromJSON(cJSON *permission_edit_object_v1_requestJSON){

    permission_edit_object_v1_request_t *permission_edit_object_v1_request_local_var = NULL;

    // define the local variable for permission_edit_object_v1_request->obj_permission
    permission_request_compound_t *obj_permission_local_nonprim = NULL;

    // permission_edit_object_v1_request->obj_permission
    cJSON *obj_permission = cJSON_GetObjectItemCaseSensitive(permission_edit_object_v1_requestJSON, "objPermission");
    if (cJSON_IsNull(obj_permission)) {
        obj_permission = NULL;
    }
    if (!obj_permission) {
        goto end;
    }

    
    obj_permission_local_nonprim = permission_request_compound_parseFromJSON(obj_permission); //nonprimitive


    permission_edit_object_v1_request_local_var = permission_edit_object_v1_request_create_internal (
        obj_permission_local_nonprim
        );

    return permission_edit_object_v1_request_local_var;
end:
    if (obj_permission_local_nonprim) {
        permission_request_compound_free(obj_permission_local_nonprim);
        obj_permission_local_nonprim = NULL;
    }
    return NULL;

}
