#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_create_object_v1_request.h"



static discussion_create_object_v1_request_t *discussion_create_object_v1_request_create_internal(
    list_t *a_obj_discussion
    ) {
    discussion_create_object_v1_request_t *discussion_create_object_v1_request_local_var = malloc(sizeof(discussion_create_object_v1_request_t));
    if (!discussion_create_object_v1_request_local_var) {
        return NULL;
    }
    discussion_create_object_v1_request_local_var->a_obj_discussion = a_obj_discussion;

    discussion_create_object_v1_request_local_var->_library_owned = 1;
    return discussion_create_object_v1_request_local_var;
}

__attribute__((deprecated)) discussion_create_object_v1_request_t *discussion_create_object_v1_request_create(
    list_t *a_obj_discussion
    ) {
    return discussion_create_object_v1_request_create_internal (
        a_obj_discussion
        );
}

void discussion_create_object_v1_request_free(discussion_create_object_v1_request_t *discussion_create_object_v1_request) {
    if(NULL == discussion_create_object_v1_request){
        return ;
    }
    if(discussion_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussion_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_create_object_v1_request->a_obj_discussion) {
        list_ForEach(listEntry, discussion_create_object_v1_request->a_obj_discussion) {
            discussion_request_compound_free(listEntry->data);
        }
        list_freeList(discussion_create_object_v1_request->a_obj_discussion);
        discussion_create_object_v1_request->a_obj_discussion = NULL;
    }
    free(discussion_create_object_v1_request);
}

cJSON *discussion_create_object_v1_request_convertToJSON(discussion_create_object_v1_request_t *discussion_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // discussion_create_object_v1_request->a_obj_discussion
    if (!discussion_create_object_v1_request->a_obj_discussion) {
        goto fail;
    }
    cJSON *a_obj_discussion = cJSON_AddArrayToObject(item, "a_objDiscussion");
    if(a_obj_discussion == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_discussionListEntry;
    if (discussion_create_object_v1_request->a_obj_discussion) {
    list_ForEach(a_obj_discussionListEntry, discussion_create_object_v1_request->a_obj_discussion) {
    cJSON *itemLocal = discussion_request_compound_convertToJSON(a_obj_discussionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_discussion, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussion_create_object_v1_request_t *discussion_create_object_v1_request_parseFromJSON(cJSON *discussion_create_object_v1_requestJSON){

    discussion_create_object_v1_request_t *discussion_create_object_v1_request_local_var = NULL;

    // define the local list for discussion_create_object_v1_request->a_obj_discussion
    list_t *a_obj_discussionList = NULL;

    // discussion_create_object_v1_request->a_obj_discussion
    cJSON *a_obj_discussion = cJSON_GetObjectItemCaseSensitive(discussion_create_object_v1_requestJSON, "a_objDiscussion");
    if (cJSON_IsNull(a_obj_discussion)) {
        a_obj_discussion = NULL;
    }
    if (!a_obj_discussion) {
        goto end;
    }

    
    cJSON *a_obj_discussion_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_discussion)){
        goto end; //nonprimitive container
    }

    a_obj_discussionList = list_createList();

    cJSON_ArrayForEach(a_obj_discussion_local_nonprimitive,a_obj_discussion )
    {
        if(!cJSON_IsObject(a_obj_discussion_local_nonprimitive)){
            goto end;
        }
        discussion_request_compound_t *a_obj_discussionItem = discussion_request_compound_parseFromJSON(a_obj_discussion_local_nonprimitive);

        list_addElement(a_obj_discussionList, a_obj_discussionItem);
    }


    discussion_create_object_v1_request_local_var = discussion_create_object_v1_request_create_internal (
        a_obj_discussionList
        );

    return discussion_create_object_v1_request_local_var;
end:
    if (a_obj_discussionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_discussionList) {
            discussion_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_discussionList);
        a_obj_discussionList = NULL;
    }
    return NULL;

}
