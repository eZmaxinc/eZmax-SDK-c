#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupdelegation_create_object_v1_request.h"



usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request_create(
    list_t *a_obj_usergroupdelegation
    ) {
    usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request_local_var = malloc(sizeof(usergroupdelegation_create_object_v1_request_t));
    if (!usergroupdelegation_create_object_v1_request_local_var) {
        return NULL;
    }
    usergroupdelegation_create_object_v1_request_local_var->a_obj_usergroupdelegation = a_obj_usergroupdelegation;

    return usergroupdelegation_create_object_v1_request_local_var;
}


void usergroupdelegation_create_object_v1_request_free(usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request) {
    if(NULL == usergroupdelegation_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation) {
        list_ForEach(listEntry, usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation) {
            usergroupdelegation_request_compound_free(listEntry->data);
        }
        list_freeList(usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation);
        usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation = NULL;
    }
    free(usergroupdelegation_create_object_v1_request);
}

cJSON *usergroupdelegation_create_object_v1_request_convertToJSON(usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation
    if (!usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation) {
        goto fail;
    }
    cJSON *a_obj_usergroupdelegation = cJSON_AddArrayToObject(item, "a_objUsergroupdelegation");
    if(a_obj_usergroupdelegation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupdelegationListEntry;
    if (usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation) {
    list_ForEach(a_obj_usergroupdelegationListEntry, usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation) {
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

usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request_parseFromJSON(cJSON *usergroupdelegation_create_object_v1_requestJSON){

    usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request_local_var = NULL;

    // define the local list for usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation
    list_t *a_obj_usergroupdelegationList = NULL;

    // usergroupdelegation_create_object_v1_request->a_obj_usergroupdelegation
    cJSON *a_obj_usergroupdelegation = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_create_object_v1_requestJSON, "a_objUsergroupdelegation");
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


    usergroupdelegation_create_object_v1_request_local_var = usergroupdelegation_create_object_v1_request_create (
        a_obj_usergroupdelegationList
        );

    return usergroupdelegation_create_object_v1_request_local_var;
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
