#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_edit_permissions_v1_request.h"



apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request_create(
    list_t *a_obj_permission
    ) {
    apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request_local_var = malloc(sizeof(apikey_edit_permissions_v1_request_t));
    if (!apikey_edit_permissions_v1_request_local_var) {
        return NULL;
    }
    apikey_edit_permissions_v1_request_local_var->a_obj_permission = a_obj_permission;

    return apikey_edit_permissions_v1_request_local_var;
}


void apikey_edit_permissions_v1_request_free(apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request) {
    if(NULL == apikey_edit_permissions_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_edit_permissions_v1_request->a_obj_permission) {
        list_ForEach(listEntry, apikey_edit_permissions_v1_request->a_obj_permission) {
            permission_request_compound_free(listEntry->data);
        }
        list_freeList(apikey_edit_permissions_v1_request->a_obj_permission);
        apikey_edit_permissions_v1_request->a_obj_permission = NULL;
    }
    free(apikey_edit_permissions_v1_request);
}

cJSON *apikey_edit_permissions_v1_request_convertToJSON(apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // apikey_edit_permissions_v1_request->a_obj_permission
    if (!apikey_edit_permissions_v1_request->a_obj_permission) {
        goto fail;
    }
    cJSON *a_obj_permission = cJSON_AddArrayToObject(item, "a_objPermission");
    if(a_obj_permission == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_permissionListEntry;
    if (apikey_edit_permissions_v1_request->a_obj_permission) {
    list_ForEach(a_obj_permissionListEntry, apikey_edit_permissions_v1_request->a_obj_permission) {
    cJSON *itemLocal = permission_request_compound_convertToJSON(a_obj_permissionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_permission, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request_parseFromJSON(cJSON *apikey_edit_permissions_v1_requestJSON){

    apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request_local_var = NULL;

    // define the local list for apikey_edit_permissions_v1_request->a_obj_permission
    list_t *a_obj_permissionList = NULL;

    // apikey_edit_permissions_v1_request->a_obj_permission
    cJSON *a_obj_permission = cJSON_GetObjectItemCaseSensitive(apikey_edit_permissions_v1_requestJSON, "a_objPermission");
    if (!a_obj_permission) {
        goto end;
    }

    
    cJSON *a_obj_permission_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_permission)){
        goto end; //nonprimitive container
    }

    a_obj_permissionList = list_createList();

    cJSON_ArrayForEach(a_obj_permission_local_nonprimitive,a_obj_permission )
    {
        if(!cJSON_IsObject(a_obj_permission_local_nonprimitive)){
            goto end;
        }
        permission_request_compound_t *a_obj_permissionItem = permission_request_compound_parseFromJSON(a_obj_permission_local_nonprimitive);

        list_addElement(a_obj_permissionList, a_obj_permissionItem);
    }


    apikey_edit_permissions_v1_request_local_var = apikey_edit_permissions_v1_request_create (
        a_obj_permissionList
        );

    return apikey_edit_permissions_v1_request_local_var;
end:
    if (a_obj_permissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_permissionList) {
            permission_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_permissionList);
        a_obj_permissionList = NULL;
    }
    return NULL;

}
