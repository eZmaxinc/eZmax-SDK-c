#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmembership_create_object_v1_request.h"



static discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request_create_internal(
    list_t *a_obj_discussionmembership
    ) {
    discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request_local_var = malloc(sizeof(discussionmembership_create_object_v1_request_t));
    if (!discussionmembership_create_object_v1_request_local_var) {
        return NULL;
    }
    discussionmembership_create_object_v1_request_local_var->a_obj_discussionmembership = a_obj_discussionmembership;

    discussionmembership_create_object_v1_request_local_var->_library_owned = 1;
    return discussionmembership_create_object_v1_request_local_var;
}

__attribute__((deprecated)) discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request_create(
    list_t *a_obj_discussionmembership
    ) {
    return discussionmembership_create_object_v1_request_create_internal (
        a_obj_discussionmembership
        );
}

void discussionmembership_create_object_v1_request_free(discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request) {
    if(NULL == discussionmembership_create_object_v1_request){
        return ;
    }
    if(discussionmembership_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussionmembership_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmembership_create_object_v1_request->a_obj_discussionmembership) {
        list_ForEach(listEntry, discussionmembership_create_object_v1_request->a_obj_discussionmembership) {
            discussionmembership_request_compound_free(listEntry->data);
        }
        list_freeList(discussionmembership_create_object_v1_request->a_obj_discussionmembership);
        discussionmembership_create_object_v1_request->a_obj_discussionmembership = NULL;
    }
    free(discussionmembership_create_object_v1_request);
}

cJSON *discussionmembership_create_object_v1_request_convertToJSON(discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // discussionmembership_create_object_v1_request->a_obj_discussionmembership
    if (!discussionmembership_create_object_v1_request->a_obj_discussionmembership) {
        goto fail;
    }
    cJSON *a_obj_discussionmembership = cJSON_AddArrayToObject(item, "a_objDiscussionmembership");
    if(a_obj_discussionmembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_discussionmembershipListEntry;
    if (discussionmembership_create_object_v1_request->a_obj_discussionmembership) {
    list_ForEach(a_obj_discussionmembershipListEntry, discussionmembership_create_object_v1_request->a_obj_discussionmembership) {
    cJSON *itemLocal = discussionmembership_request_compound_convertToJSON(a_obj_discussionmembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_discussionmembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request_parseFromJSON(cJSON *discussionmembership_create_object_v1_requestJSON){

    discussionmembership_create_object_v1_request_t *discussionmembership_create_object_v1_request_local_var = NULL;

    // define the local list for discussionmembership_create_object_v1_request->a_obj_discussionmembership
    list_t *a_obj_discussionmembershipList = NULL;

    // discussionmembership_create_object_v1_request->a_obj_discussionmembership
    cJSON *a_obj_discussionmembership = cJSON_GetObjectItemCaseSensitive(discussionmembership_create_object_v1_requestJSON, "a_objDiscussionmembership");
    if (cJSON_IsNull(a_obj_discussionmembership)) {
        a_obj_discussionmembership = NULL;
    }
    if (!a_obj_discussionmembership) {
        goto end;
    }

    
    cJSON *a_obj_discussionmembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_discussionmembership)){
        goto end; //nonprimitive container
    }

    a_obj_discussionmembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_discussionmembership_local_nonprimitive,a_obj_discussionmembership )
    {
        if(!cJSON_IsObject(a_obj_discussionmembership_local_nonprimitive)){
            goto end;
        }
        discussionmembership_request_compound_t *a_obj_discussionmembershipItem = discussionmembership_request_compound_parseFromJSON(a_obj_discussionmembership_local_nonprimitive);

        list_addElement(a_obj_discussionmembershipList, a_obj_discussionmembershipItem);
    }


    discussionmembership_create_object_v1_request_local_var = discussionmembership_create_object_v1_request_create_internal (
        a_obj_discussionmembershipList
        );

    return discussionmembership_create_object_v1_request_local_var;
end:
    if (a_obj_discussionmembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_discussionmembershipList) {
            discussionmembership_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_discussionmembershipList);
        a_obj_discussionmembershipList = NULL;
    }
    return NULL;

}
