#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modulesection_response_compound_all_of.h"



modulesection_response_compound_all_of_t *modulesection_response_compound_all_of_create(
    list_t *a_obj_permission
    ) {
    modulesection_response_compound_all_of_t *modulesection_response_compound_all_of_local_var = malloc(sizeof(modulesection_response_compound_all_of_t));
    if (!modulesection_response_compound_all_of_local_var) {
        return NULL;
    }
    modulesection_response_compound_all_of_local_var->a_obj_permission = a_obj_permission;

    return modulesection_response_compound_all_of_local_var;
}


void modulesection_response_compound_all_of_free(modulesection_response_compound_all_of_t *modulesection_response_compound_all_of) {
    if(NULL == modulesection_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (modulesection_response_compound_all_of->a_obj_permission) {
        list_ForEach(listEntry, modulesection_response_compound_all_of->a_obj_permission) {
            permission_response_compound_free(listEntry->data);
        }
        list_freeList(modulesection_response_compound_all_of->a_obj_permission);
        modulesection_response_compound_all_of->a_obj_permission = NULL;
    }
    free(modulesection_response_compound_all_of);
}

cJSON *modulesection_response_compound_all_of_convertToJSON(modulesection_response_compound_all_of_t *modulesection_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // modulesection_response_compound_all_of->a_obj_permission
    if(modulesection_response_compound_all_of->a_obj_permission) {
    cJSON *a_obj_permission = cJSON_AddArrayToObject(item, "a_objPermission");
    if(a_obj_permission == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_permissionListEntry;
    if (modulesection_response_compound_all_of->a_obj_permission) {
    list_ForEach(a_obj_permissionListEntry, modulesection_response_compound_all_of->a_obj_permission) {
    cJSON *itemLocal = permission_response_compound_convertToJSON(a_obj_permissionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_permission, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

modulesection_response_compound_all_of_t *modulesection_response_compound_all_of_parseFromJSON(cJSON *modulesection_response_compound_all_ofJSON){

    modulesection_response_compound_all_of_t *modulesection_response_compound_all_of_local_var = NULL;

    // define the local list for modulesection_response_compound_all_of->a_obj_permission
    list_t *a_obj_permissionList = NULL;

    // modulesection_response_compound_all_of->a_obj_permission
    cJSON *a_obj_permission = cJSON_GetObjectItemCaseSensitive(modulesection_response_compound_all_ofJSON, "a_objPermission");
    if (a_obj_permission) { 
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
        permission_response_compound_t *a_obj_permissionItem = permission_response_compound_parseFromJSON(a_obj_permission_local_nonprimitive);

        list_addElement(a_obj_permissionList, a_obj_permissionItem);
    }
    }


    modulesection_response_compound_all_of_local_var = modulesection_response_compound_all_of_create (
        a_obj_permission ? a_obj_permissionList : NULL
        );

    return modulesection_response_compound_all_of_local_var;
end:
    if (a_obj_permissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_permissionList) {
            permission_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_permissionList);
        a_obj_permissionList = NULL;
    }
    return NULL;

}
