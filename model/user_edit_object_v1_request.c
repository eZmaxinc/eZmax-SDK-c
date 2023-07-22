#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_edit_object_v1_request.h"



user_edit_object_v1_request_t *user_edit_object_v1_request_create(
    user_request_compound_t *obj_user
    ) {
    user_edit_object_v1_request_t *user_edit_object_v1_request_local_var = malloc(sizeof(user_edit_object_v1_request_t));
    if (!user_edit_object_v1_request_local_var) {
        return NULL;
    }
    user_edit_object_v1_request_local_var->obj_user = obj_user;

    return user_edit_object_v1_request_local_var;
}


void user_edit_object_v1_request_free(user_edit_object_v1_request_t *user_edit_object_v1_request) {
    if(NULL == user_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (user_edit_object_v1_request->obj_user) {
        user_request_compound_free(user_edit_object_v1_request->obj_user);
        user_edit_object_v1_request->obj_user = NULL;
    }
    free(user_edit_object_v1_request);
}

cJSON *user_edit_object_v1_request_convertToJSON(user_edit_object_v1_request_t *user_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // user_edit_object_v1_request->obj_user
    if (!user_edit_object_v1_request->obj_user) {
        goto fail;
    }
    cJSON *obj_user_local_JSON = user_request_compound_convertToJSON(user_edit_object_v1_request->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
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

user_edit_object_v1_request_t *user_edit_object_v1_request_parseFromJSON(cJSON *user_edit_object_v1_requestJSON){

    user_edit_object_v1_request_t *user_edit_object_v1_request_local_var = NULL;

    // define the local variable for user_edit_object_v1_request->obj_user
    user_request_compound_t *obj_user_local_nonprim = NULL;

    // user_edit_object_v1_request->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(user_edit_object_v1_requestJSON, "objUser");
    if (!obj_user) {
        goto end;
    }

    
    obj_user_local_nonprim = user_request_compound_parseFromJSON(obj_user); //nonprimitive


    user_edit_object_v1_request_local_var = user_edit_object_v1_request_create (
        obj_user_local_nonprim
        );

    return user_edit_object_v1_request_local_var;
end:
    if (obj_user_local_nonprim) {
        user_request_compound_free(obj_user_local_nonprim);
        obj_user_local_nonprim = NULL;
    }
    return NULL;

}
