#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_edit_usergroupdelegations_v1_request.h"



static usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request_create_internal(
    list_t *a_obj_usergroupdelegation
    ) {
    usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request_local_var = malloc(sizeof(usergroup_edit_usergroupdelegations_v1_request_t));
    if (!usergroup_edit_usergroupdelegations_v1_request_local_var) {
        return NULL;
    }
    usergroup_edit_usergroupdelegations_v1_request_local_var->a_obj_usergroupdelegation = a_obj_usergroupdelegation;

    usergroup_edit_usergroupdelegations_v1_request_local_var->_library_owned = 1;
    return usergroup_edit_usergroupdelegations_v1_request_local_var;
}

__attribute__((deprecated)) usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request_create(
    list_t *a_obj_usergroupdelegation
    ) {
    return usergroup_edit_usergroupdelegations_v1_request_create_internal (
        a_obj_usergroupdelegation
        );
}

void usergroup_edit_usergroupdelegations_v1_request_free(usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request) {
    if(NULL == usergroup_edit_usergroupdelegations_v1_request){
        return ;
    }
    if(usergroup_edit_usergroupdelegations_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_edit_usergroupdelegations_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation) {
        list_ForEach(listEntry, usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation) {
            usergroupdelegation_request_compound_free(listEntry->data);
        }
        list_freeList(usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation);
        usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation = NULL;
    }
    free(usergroup_edit_usergroupdelegations_v1_request);
}

cJSON *usergroup_edit_usergroupdelegations_v1_request_convertToJSON(usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation
    if (!usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation) {
        goto fail;
    }
    cJSON *a_obj_usergroupdelegation = cJSON_AddArrayToObject(item, "a_objUsergroupdelegation");
    if(a_obj_usergroupdelegation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupdelegationListEntry;
    if (usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation) {
    list_ForEach(a_obj_usergroupdelegationListEntry, usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation) {
    cJSON *itemLocal = usergroupdelegation_request_compound_convertToJSON(a_obj_usergroupdelegationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroupdelegation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request_parseFromJSON(cJSON *usergroup_edit_usergroupdelegations_v1_requestJSON){

    usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request_local_var = NULL;

    // define the local list for usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation
    list_t *a_obj_usergroupdelegationList = NULL;

    // usergroup_edit_usergroupdelegations_v1_request->a_obj_usergroupdelegation
    cJSON *a_obj_usergroupdelegation = cJSON_GetObjectItemCaseSensitive(usergroup_edit_usergroupdelegations_v1_requestJSON, "a_objUsergroupdelegation");
    if (cJSON_IsNull(a_obj_usergroupdelegation)) {
        a_obj_usergroupdelegation = NULL;
    }
    if (!a_obj_usergroupdelegation) {
        goto end;
    }

    
    cJSON *a_obj_usergroupdelegation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroupdelegation)){
        goto end; //nonprimitive container
    }

    a_obj_usergroupdelegationList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroupdelegation_local_nonprimitive,a_obj_usergroupdelegation )
    {
        if(!cJSON_IsObject(a_obj_usergroupdelegation_local_nonprimitive)){
            goto end;
        }
        usergroupdelegation_request_compound_t *a_obj_usergroupdelegationItem = usergroupdelegation_request_compound_parseFromJSON(a_obj_usergroupdelegation_local_nonprimitive);

        list_addElement(a_obj_usergroupdelegationList, a_obj_usergroupdelegationItem);
    }


    usergroup_edit_usergroupdelegations_v1_request_local_var = usergroup_edit_usergroupdelegations_v1_request_create_internal (
        a_obj_usergroupdelegationList
        );

    return usergroup_edit_usergroupdelegations_v1_request_local_var;
end:
    if (a_obj_usergroupdelegationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupdelegationList) {
            usergroupdelegation_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupdelegationList);
        a_obj_usergroupdelegationList = NULL;
    }
    return NULL;

}
