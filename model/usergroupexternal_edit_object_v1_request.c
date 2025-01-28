#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_edit_object_v1_request.h"



static usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request_create_internal(
    usergroupexternal_request_compound_t *obj_usergroupexternal
    ) {
    usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request_local_var = malloc(sizeof(usergroupexternal_edit_object_v1_request_t));
    if (!usergroupexternal_edit_object_v1_request_local_var) {
        return NULL;
    }
    usergroupexternal_edit_object_v1_request_local_var->obj_usergroupexternal = obj_usergroupexternal;

    usergroupexternal_edit_object_v1_request_local_var->_library_owned = 1;
    return usergroupexternal_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request_create(
    usergroupexternal_request_compound_t *obj_usergroupexternal
    ) {
    return usergroupexternal_edit_object_v1_request_create_internal (
        obj_usergroupexternal
        );
}

void usergroupexternal_edit_object_v1_request_free(usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request) {
    if(NULL == usergroupexternal_edit_object_v1_request){
        return ;
    }
    if(usergroupexternal_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupexternal_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_edit_object_v1_request->obj_usergroupexternal) {
        usergroupexternal_request_compound_free(usergroupexternal_edit_object_v1_request->obj_usergroupexternal);
        usergroupexternal_edit_object_v1_request->obj_usergroupexternal = NULL;
    }
    free(usergroupexternal_edit_object_v1_request);
}

cJSON *usergroupexternal_edit_object_v1_request_convertToJSON(usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_edit_object_v1_request->obj_usergroupexternal
    if (!usergroupexternal_edit_object_v1_request->obj_usergroupexternal) {
        goto fail;
    }
    cJSON *obj_usergroupexternal_local_JSON = usergroupexternal_request_compound_convertToJSON(usergroupexternal_edit_object_v1_request->obj_usergroupexternal);
    if(obj_usergroupexternal_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroupexternal", obj_usergroupexternal_local_JSON);
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

usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request_parseFromJSON(cJSON *usergroupexternal_edit_object_v1_requestJSON){

    usergroupexternal_edit_object_v1_request_t *usergroupexternal_edit_object_v1_request_local_var = NULL;

    // define the local variable for usergroupexternal_edit_object_v1_request->obj_usergroupexternal
    usergroupexternal_request_compound_t *obj_usergroupexternal_local_nonprim = NULL;

    // usergroupexternal_edit_object_v1_request->obj_usergroupexternal
    cJSON *obj_usergroupexternal = cJSON_GetObjectItemCaseSensitive(usergroupexternal_edit_object_v1_requestJSON, "objUsergroupexternal");
    if (cJSON_IsNull(obj_usergroupexternal)) {
        obj_usergroupexternal = NULL;
    }
    if (!obj_usergroupexternal) {
        goto end;
    }

    
    obj_usergroupexternal_local_nonprim = usergroupexternal_request_compound_parseFromJSON(obj_usergroupexternal); //nonprimitive


    usergroupexternal_edit_object_v1_request_local_var = usergroupexternal_edit_object_v1_request_create_internal (
        obj_usergroupexternal_local_nonprim
        );

    return usergroupexternal_edit_object_v1_request_local_var;
end:
    if (obj_usergroupexternal_local_nonprim) {
        usergroupexternal_request_compound_free(obj_usergroupexternal_local_nonprim);
        obj_usergroupexternal_local_nonprim = NULL;
    }
    return NULL;

}
