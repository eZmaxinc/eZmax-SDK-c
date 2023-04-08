#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_edit_object_v1_request.h"



usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request_create(
    usergroup_request_compound_t *obj_usergroup
    ) {
    usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request_local_var = malloc(sizeof(usergroup_edit_object_v1_request_t));
    if (!usergroup_edit_object_v1_request_local_var) {
        return NULL;
    }
    usergroup_edit_object_v1_request_local_var->obj_usergroup = obj_usergroup;

    return usergroup_edit_object_v1_request_local_var;
}


void usergroup_edit_object_v1_request_free(usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request) {
    if(NULL == usergroup_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_edit_object_v1_request->obj_usergroup) {
        usergroup_request_compound_free(usergroup_edit_object_v1_request->obj_usergroup);
        usergroup_edit_object_v1_request->obj_usergroup = NULL;
    }
    free(usergroup_edit_object_v1_request);
}

cJSON *usergroup_edit_object_v1_request_convertToJSON(usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_edit_object_v1_request->obj_usergroup
    if (!usergroup_edit_object_v1_request->obj_usergroup) {
        goto fail;
    }
    cJSON *obj_usergroup_local_JSON = usergroup_request_compound_convertToJSON(usergroup_edit_object_v1_request->obj_usergroup);
    if(obj_usergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroup", obj_usergroup_local_JSON);
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

usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request_parseFromJSON(cJSON *usergroup_edit_object_v1_requestJSON){

    usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request_local_var = NULL;

    // define the local variable for usergroup_edit_object_v1_request->obj_usergroup
    usergroup_request_compound_t *obj_usergroup_local_nonprim = NULL;

    // usergroup_edit_object_v1_request->obj_usergroup
    cJSON *obj_usergroup = cJSON_GetObjectItemCaseSensitive(usergroup_edit_object_v1_requestJSON, "objUsergroup");
    if (!obj_usergroup) {
        goto end;
    }

    
    obj_usergroup_local_nonprim = usergroup_request_compound_parseFromJSON(obj_usergroup); //nonprimitive


    usergroup_edit_object_v1_request_local_var = usergroup_edit_object_v1_request_create (
        obj_usergroup_local_nonprim
        );

    return usergroup_edit_object_v1_request_local_var;
end:
    if (obj_usergroup_local_nonprim) {
        usergroup_request_compound_free(obj_usergroup_local_nonprim);
        obj_usergroup_local_nonprim = NULL;
    }
    return NULL;

}
