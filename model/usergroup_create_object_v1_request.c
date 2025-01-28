#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_create_object_v1_request.h"



static usergroup_create_object_v1_request_t *usergroup_create_object_v1_request_create_internal(
    list_t *a_obj_usergroup
    ) {
    usergroup_create_object_v1_request_t *usergroup_create_object_v1_request_local_var = malloc(sizeof(usergroup_create_object_v1_request_t));
    if (!usergroup_create_object_v1_request_local_var) {
        return NULL;
    }
    usergroup_create_object_v1_request_local_var->a_obj_usergroup = a_obj_usergroup;

    usergroup_create_object_v1_request_local_var->_library_owned = 1;
    return usergroup_create_object_v1_request_local_var;
}

__attribute__((deprecated)) usergroup_create_object_v1_request_t *usergroup_create_object_v1_request_create(
    list_t *a_obj_usergroup
    ) {
    return usergroup_create_object_v1_request_create_internal (
        a_obj_usergroup
        );
}

void usergroup_create_object_v1_request_free(usergroup_create_object_v1_request_t *usergroup_create_object_v1_request) {
    if(NULL == usergroup_create_object_v1_request){
        return ;
    }
    if(usergroup_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_create_object_v1_request->a_obj_usergroup) {
        list_ForEach(listEntry, usergroup_create_object_v1_request->a_obj_usergroup) {
            usergroup_request_compound_free(listEntry->data);
        }
        list_freeList(usergroup_create_object_v1_request->a_obj_usergroup);
        usergroup_create_object_v1_request->a_obj_usergroup = NULL;
    }
    free(usergroup_create_object_v1_request);
}

cJSON *usergroup_create_object_v1_request_convertToJSON(usergroup_create_object_v1_request_t *usergroup_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_create_object_v1_request->a_obj_usergroup
    if (!usergroup_create_object_v1_request->a_obj_usergroup) {
        goto fail;
    }
    cJSON *a_obj_usergroup = cJSON_AddArrayToObject(item, "a_objUsergroup");
    if(a_obj_usergroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupListEntry;
    if (usergroup_create_object_v1_request->a_obj_usergroup) {
    list_ForEach(a_obj_usergroupListEntry, usergroup_create_object_v1_request->a_obj_usergroup) {
    cJSON *itemLocal = usergroup_request_compound_convertToJSON(a_obj_usergroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_create_object_v1_request_t *usergroup_create_object_v1_request_parseFromJSON(cJSON *usergroup_create_object_v1_requestJSON){

    usergroup_create_object_v1_request_t *usergroup_create_object_v1_request_local_var = NULL;

    // define the local list for usergroup_create_object_v1_request->a_obj_usergroup
    list_t *a_obj_usergroupList = NULL;

    // usergroup_create_object_v1_request->a_obj_usergroup
    cJSON *a_obj_usergroup = cJSON_GetObjectItemCaseSensitive(usergroup_create_object_v1_requestJSON, "a_objUsergroup");
    if (cJSON_IsNull(a_obj_usergroup)) {
        a_obj_usergroup = NULL;
    }
    if (!a_obj_usergroup) {
        goto end;
    }

    
    cJSON *a_obj_usergroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroup)){
        goto end; //nonprimitive container
    }

    a_obj_usergroupList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroup_local_nonprimitive,a_obj_usergroup )
    {
        if(!cJSON_IsObject(a_obj_usergroup_local_nonprimitive)){
            goto end;
        }
        usergroup_request_compound_t *a_obj_usergroupItem = usergroup_request_compound_parseFromJSON(a_obj_usergroup_local_nonprimitive);

        list_addElement(a_obj_usergroupList, a_obj_usergroupItem);
    }


    usergroup_create_object_v1_request_local_var = usergroup_create_object_v1_request_create_internal (
        a_obj_usergroupList
        );

    return usergroup_create_object_v1_request_local_var;
end:
    if (a_obj_usergroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupList) {
            usergroup_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupList);
        a_obj_usergroupList = NULL;
    }
    return NULL;

}
