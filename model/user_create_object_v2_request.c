#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_create_object_v2_request.h"



user_create_object_v2_request_t *user_create_object_v2_request_create(
    list_t *a_obj_user
    ) {
    user_create_object_v2_request_t *user_create_object_v2_request_local_var = malloc(sizeof(user_create_object_v2_request_t));
    if (!user_create_object_v2_request_local_var) {
        return NULL;
    }
    user_create_object_v2_request_local_var->a_obj_user = a_obj_user;

    return user_create_object_v2_request_local_var;
}


void user_create_object_v2_request_free(user_create_object_v2_request_t *user_create_object_v2_request) {
    if(NULL == user_create_object_v2_request){
        return ;
    }
    listEntry_t *listEntry;
    if (user_create_object_v2_request->a_obj_user) {
        list_ForEach(listEntry, user_create_object_v2_request->a_obj_user) {
            user_request_compound_v2_free(listEntry->data);
        }
        list_freeList(user_create_object_v2_request->a_obj_user);
        user_create_object_v2_request->a_obj_user = NULL;
    }
    free(user_create_object_v2_request);
}

cJSON *user_create_object_v2_request_convertToJSON(user_create_object_v2_request_t *user_create_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // user_create_object_v2_request->a_obj_user
    if (!user_create_object_v2_request->a_obj_user) {
        goto fail;
    }
    cJSON *a_obj_user = cJSON_AddArrayToObject(item, "a_objUser");
    if(a_obj_user == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_userListEntry;
    if (user_create_object_v2_request->a_obj_user) {
    list_ForEach(a_obj_userListEntry, user_create_object_v2_request->a_obj_user) {
    cJSON *itemLocal = user_request_compound_v2_convertToJSON(a_obj_userListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_user, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_create_object_v2_request_t *user_create_object_v2_request_parseFromJSON(cJSON *user_create_object_v2_requestJSON){

    user_create_object_v2_request_t *user_create_object_v2_request_local_var = NULL;

    // define the local list for user_create_object_v2_request->a_obj_user
    list_t *a_obj_userList = NULL;

    // user_create_object_v2_request->a_obj_user
    cJSON *a_obj_user = cJSON_GetObjectItemCaseSensitive(user_create_object_v2_requestJSON, "a_objUser");
    if (!a_obj_user) {
        goto end;
    }

    
    cJSON *a_obj_user_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_user)){
        goto end; //nonprimitive container
    }

    a_obj_userList = list_createList();

    cJSON_ArrayForEach(a_obj_user_local_nonprimitive,a_obj_user )
    {
        if(!cJSON_IsObject(a_obj_user_local_nonprimitive)){
            goto end;
        }
        user_request_compound_v2_t *a_obj_userItem = user_request_compound_v2_parseFromJSON(a_obj_user_local_nonprimitive);

        list_addElement(a_obj_userList, a_obj_userItem);
    }


    user_create_object_v2_request_local_var = user_create_object_v2_request_create (
        a_obj_userList
        );

    return user_create_object_v2_request_local_var;
end:
    if (a_obj_userList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_userList) {
            user_request_compound_v2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_userList);
        a_obj_userList = NULL;
    }
    return NULL;

}
