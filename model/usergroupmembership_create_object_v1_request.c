#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_create_object_v1_request.h"



usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request_create(
    list_t *a_obj_usergroupmembership
    ) {
    usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request_local_var = malloc(sizeof(usergroupmembership_create_object_v1_request_t));
    if (!usergroupmembership_create_object_v1_request_local_var) {
        return NULL;
    }
    usergroupmembership_create_object_v1_request_local_var->a_obj_usergroupmembership = a_obj_usergroupmembership;

    return usergroupmembership_create_object_v1_request_local_var;
}


void usergroupmembership_create_object_v1_request_free(usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request) {
    if(NULL == usergroupmembership_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_create_object_v1_request->a_obj_usergroupmembership) {
        list_ForEach(listEntry, usergroupmembership_create_object_v1_request->a_obj_usergroupmembership) {
            usergroupmembership_request_compound_free(listEntry->data);
        }
        list_freeList(usergroupmembership_create_object_v1_request->a_obj_usergroupmembership);
        usergroupmembership_create_object_v1_request->a_obj_usergroupmembership = NULL;
    }
    free(usergroupmembership_create_object_v1_request);
}

cJSON *usergroupmembership_create_object_v1_request_convertToJSON(usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_create_object_v1_request->a_obj_usergroupmembership
    if (!usergroupmembership_create_object_v1_request->a_obj_usergroupmembership) {
        goto fail;
    }
    cJSON *a_obj_usergroupmembership = cJSON_AddArrayToObject(item, "a_objUsergroupmembership");
    if(a_obj_usergroupmembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupmembershipListEntry;
    if (usergroupmembership_create_object_v1_request->a_obj_usergroupmembership) {
    list_ForEach(a_obj_usergroupmembershipListEntry, usergroupmembership_create_object_v1_request->a_obj_usergroupmembership) {
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

usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request_parseFromJSON(cJSON *usergroupmembership_create_object_v1_requestJSON){

    usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request_local_var = NULL;

    // define the local list for usergroupmembership_create_object_v1_request->a_obj_usergroupmembership
    list_t *a_obj_usergroupmembershipList = NULL;

    // usergroupmembership_create_object_v1_request->a_obj_usergroupmembership
    cJSON *a_obj_usergroupmembership = cJSON_GetObjectItemCaseSensitive(usergroupmembership_create_object_v1_requestJSON, "a_objUsergroupmembership");
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


    usergroupmembership_create_object_v1_request_local_var = usergroupmembership_create_object_v1_request_create (
        a_obj_usergroupmembershipList
        );

    return usergroupmembership_create_object_v1_request_local_var;
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
