#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_edit_usergroupmemberships_v1_request.h"



static usergroup_edit_usergroupmemberships_v1_request_t *usergroup_edit_usergroupmemberships_v1_request_create_internal(
    list_t *a_obj_usergroupmembership
    ) {
    usergroup_edit_usergroupmemberships_v1_request_t *usergroup_edit_usergroupmemberships_v1_request_local_var = malloc(sizeof(usergroup_edit_usergroupmemberships_v1_request_t));
    if (!usergroup_edit_usergroupmemberships_v1_request_local_var) {
        return NULL;
    }
    usergroup_edit_usergroupmemberships_v1_request_local_var->a_obj_usergroupmembership = a_obj_usergroupmembership;

    usergroup_edit_usergroupmemberships_v1_request_local_var->_library_owned = 1;
    return usergroup_edit_usergroupmemberships_v1_request_local_var;
}

__attribute__((deprecated)) usergroup_edit_usergroupmemberships_v1_request_t *usergroup_edit_usergroupmemberships_v1_request_create(
    list_t *a_obj_usergroupmembership
    ) {
    return usergroup_edit_usergroupmemberships_v1_request_create_internal (
        a_obj_usergroupmembership
        );
}

void usergroup_edit_usergroupmemberships_v1_request_free(usergroup_edit_usergroupmemberships_v1_request_t *usergroup_edit_usergroupmemberships_v1_request) {
    if(NULL == usergroup_edit_usergroupmemberships_v1_request){
        return ;
    }
    if(usergroup_edit_usergroupmemberships_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_edit_usergroupmemberships_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership) {
        list_ForEach(listEntry, usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership) {
            usergroupmembership_request_compound_free(listEntry->data);
        }
        list_freeList(usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership);
        usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership = NULL;
    }
    free(usergroup_edit_usergroupmemberships_v1_request);
}

cJSON *usergroup_edit_usergroupmemberships_v1_request_convertToJSON(usergroup_edit_usergroupmemberships_v1_request_t *usergroup_edit_usergroupmemberships_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership
    if (!usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership) {
        goto fail;
    }
    cJSON *a_obj_usergroupmembership = cJSON_AddArrayToObject(item, "a_objUsergroupmembership");
    if(a_obj_usergroupmembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupmembershipListEntry;
    if (usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership) {
    list_ForEach(a_obj_usergroupmembershipListEntry, usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership) {
    cJSON *itemLocal = usergroupmembership_request_compound_convertToJSON(a_obj_usergroupmembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroupmembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_edit_usergroupmemberships_v1_request_t *usergroup_edit_usergroupmemberships_v1_request_parseFromJSON(cJSON *usergroup_edit_usergroupmemberships_v1_requestJSON){

    usergroup_edit_usergroupmemberships_v1_request_t *usergroup_edit_usergroupmemberships_v1_request_local_var = NULL;

    // define the local list for usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership
    list_t *a_obj_usergroupmembershipList = NULL;

    // usergroup_edit_usergroupmemberships_v1_request->a_obj_usergroupmembership
    cJSON *a_obj_usergroupmembership = cJSON_GetObjectItemCaseSensitive(usergroup_edit_usergroupmemberships_v1_requestJSON, "a_objUsergroupmembership");
    if (cJSON_IsNull(a_obj_usergroupmembership)) {
        a_obj_usergroupmembership = NULL;
    }
    if (!a_obj_usergroupmembership) {
        goto end;
    }

    
    cJSON *a_obj_usergroupmembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroupmembership)){
        goto end; //nonprimitive container
    }

    a_obj_usergroupmembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroupmembership_local_nonprimitive,a_obj_usergroupmembership )
    {
        if(!cJSON_IsObject(a_obj_usergroupmembership_local_nonprimitive)){
            goto end;
        }
        usergroupmembership_request_compound_t *a_obj_usergroupmembershipItem = usergroupmembership_request_compound_parseFromJSON(a_obj_usergroupmembership_local_nonprimitive);

        list_addElement(a_obj_usergroupmembershipList, a_obj_usergroupmembershipItem);
    }


    usergroup_edit_usergroupmemberships_v1_request_local_var = usergroup_edit_usergroupmemberships_v1_request_create_internal (
        a_obj_usergroupmembershipList
        );

    return usergroup_edit_usergroupmemberships_v1_request_local_var;
end:
    if (a_obj_usergroupmembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupmembershipList) {
            usergroupmembership_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupmembershipList);
        a_obj_usergroupmembershipList = NULL;
    }
    return NULL;

}
