#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmessage_create_object_v1_request.h"



discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request_create(
    list_t *a_obj_discussionmessage
    ) {
    discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request_local_var = malloc(sizeof(discussionmessage_create_object_v1_request_t));
    if (!discussionmessage_create_object_v1_request_local_var) {
        return NULL;
    }
    discussionmessage_create_object_v1_request_local_var->a_obj_discussionmessage = a_obj_discussionmessage;

    return discussionmessage_create_object_v1_request_local_var;
}


void discussionmessage_create_object_v1_request_free(discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request) {
    if(NULL == discussionmessage_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmessage_create_object_v1_request->a_obj_discussionmessage) {
        list_ForEach(listEntry, discussionmessage_create_object_v1_request->a_obj_discussionmessage) {
            discussionmessage_request_compound_free(listEntry->data);
        }
        list_freeList(discussionmessage_create_object_v1_request->a_obj_discussionmessage);
        discussionmessage_create_object_v1_request->a_obj_discussionmessage = NULL;
    }
    free(discussionmessage_create_object_v1_request);
}

cJSON *discussionmessage_create_object_v1_request_convertToJSON(discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // discussionmessage_create_object_v1_request->a_obj_discussionmessage
    if (!discussionmessage_create_object_v1_request->a_obj_discussionmessage) {
        goto fail;
    }
    cJSON *a_obj_discussionmessage = cJSON_AddArrayToObject(item, "a_objDiscussionmessage");
    if(a_obj_discussionmessage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_discussionmessageListEntry;
    if (discussionmessage_create_object_v1_request->a_obj_discussionmessage) {
    list_ForEach(a_obj_discussionmessageListEntry, discussionmessage_create_object_v1_request->a_obj_discussionmessage) {
    cJSON *itemLocal = discussionmessage_request_compound_convertToJSON(a_obj_discussionmessageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_discussionmessage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request_parseFromJSON(cJSON *discussionmessage_create_object_v1_requestJSON){

    discussionmessage_create_object_v1_request_t *discussionmessage_create_object_v1_request_local_var = NULL;

    // define the local list for discussionmessage_create_object_v1_request->a_obj_discussionmessage
    list_t *a_obj_discussionmessageList = NULL;

    // discussionmessage_create_object_v1_request->a_obj_discussionmessage
    cJSON *a_obj_discussionmessage = cJSON_GetObjectItemCaseSensitive(discussionmessage_create_object_v1_requestJSON, "a_objDiscussionmessage");
    if (!a_obj_discussionmessage) {
        goto end;
    }

    
    cJSON *a_obj_discussionmessage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_discussionmessage)){
        goto end; //nonprimitive container
    }

    a_obj_discussionmessageList = list_createList();

    cJSON_ArrayForEach(a_obj_discussionmessage_local_nonprimitive,a_obj_discussionmessage )
    {
        if(!cJSON_IsObject(a_obj_discussionmessage_local_nonprimitive)){
            goto end;
        }
        discussionmessage_request_compound_t *a_obj_discussionmessageItem = discussionmessage_request_compound_parseFromJSON(a_obj_discussionmessage_local_nonprimitive);

        list_addElement(a_obj_discussionmessageList, a_obj_discussionmessageItem);
    }


    discussionmessage_create_object_v1_request_local_var = discussionmessage_create_object_v1_request_create (
        a_obj_discussionmessageList
        );

    return discussionmessage_create_object_v1_request_local_var;
end:
    if (a_obj_discussionmessageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_discussionmessageList) {
            discussionmessage_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_discussionmessageList);
        a_obj_discussionmessageList = NULL;
    }
    return NULL;

}
