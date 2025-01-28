#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupdelegation_edit_object_v1_request.h"



static usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request_create_internal(
    usergroupdelegation_request_compound_t *obj_usergroupdelegation
    ) {
    usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request_local_var = malloc(sizeof(usergroupdelegation_edit_object_v1_request_t));
    if (!usergroupdelegation_edit_object_v1_request_local_var) {
        return NULL;
    }
    usergroupdelegation_edit_object_v1_request_local_var->obj_usergroupdelegation = obj_usergroupdelegation;

    usergroupdelegation_edit_object_v1_request_local_var->_library_owned = 1;
    return usergroupdelegation_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request_create(
    usergroupdelegation_request_compound_t *obj_usergroupdelegation
    ) {
    return usergroupdelegation_edit_object_v1_request_create_internal (
        obj_usergroupdelegation
        );
}

void usergroupdelegation_edit_object_v1_request_free(usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request) {
    if(NULL == usergroupdelegation_edit_object_v1_request){
        return ;
    }
    if(usergroupdelegation_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupdelegation_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupdelegation_edit_object_v1_request->obj_usergroupdelegation) {
        usergroupdelegation_request_compound_free(usergroupdelegation_edit_object_v1_request->obj_usergroupdelegation);
        usergroupdelegation_edit_object_v1_request->obj_usergroupdelegation = NULL;
    }
    free(usergroupdelegation_edit_object_v1_request);
}

cJSON *usergroupdelegation_edit_object_v1_request_convertToJSON(usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroupdelegation_edit_object_v1_request->obj_usergroupdelegation
    if (!usergroupdelegation_edit_object_v1_request->obj_usergroupdelegation) {
        goto fail;
    }
    cJSON *obj_usergroupdelegation_local_JSON = usergroupdelegation_request_compound_convertToJSON(usergroupdelegation_edit_object_v1_request->obj_usergroupdelegation);
    if(obj_usergroupdelegation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroupdelegation", obj_usergroupdelegation_local_JSON);
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

usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request_parseFromJSON(cJSON *usergroupdelegation_edit_object_v1_requestJSON){

    usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request_local_var = NULL;

    // define the local variable for usergroupdelegation_edit_object_v1_request->obj_usergroupdelegation
    usergroupdelegation_request_compound_t *obj_usergroupdelegation_local_nonprim = NULL;

    // usergroupdelegation_edit_object_v1_request->obj_usergroupdelegation
    cJSON *obj_usergroupdelegation = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_edit_object_v1_requestJSON, "objUsergroupdelegation");
    if (cJSON_IsNull(obj_usergroupdelegation)) {
        obj_usergroupdelegation = NULL;
    }
    if (!obj_usergroupdelegation) {
        goto end;
    }

    
    obj_usergroupdelegation_local_nonprim = usergroupdelegation_request_compound_parseFromJSON(obj_usergroupdelegation); //nonprimitive


    usergroupdelegation_edit_object_v1_request_local_var = usergroupdelegation_edit_object_v1_request_create_internal (
        obj_usergroupdelegation_local_nonprim
        );

    return usergroupdelegation_edit_object_v1_request_local_var;
end:
    if (obj_usergroupdelegation_local_nonprim) {
        usergroupdelegation_request_compound_free(obj_usergroupdelegation_local_nonprim);
        obj_usergroupdelegation_local_nonprim = NULL;
    }
    return NULL;

}
