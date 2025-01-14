#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_edit_colleagues_v2_request.h"



user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request_create(
    list_t *a_obj_colleague
    ) {
    user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request_local_var = malloc(sizeof(user_edit_colleagues_v2_request_t));
    if (!user_edit_colleagues_v2_request_local_var) {
        return NULL;
    }
    user_edit_colleagues_v2_request_local_var->a_obj_colleague = a_obj_colleague;

    return user_edit_colleagues_v2_request_local_var;
}


void user_edit_colleagues_v2_request_free(user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request) {
    if(NULL == user_edit_colleagues_v2_request){
        return ;
    }
    listEntry_t *listEntry;
    if (user_edit_colleagues_v2_request->a_obj_colleague) {
        list_ForEach(listEntry, user_edit_colleagues_v2_request->a_obj_colleague) {
            colleague_request_compound_v2_free(listEntry->data);
        }
        list_freeList(user_edit_colleagues_v2_request->a_obj_colleague);
        user_edit_colleagues_v2_request->a_obj_colleague = NULL;
    }
    free(user_edit_colleagues_v2_request);
}

cJSON *user_edit_colleagues_v2_request_convertToJSON(user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // user_edit_colleagues_v2_request->a_obj_colleague
    if (!user_edit_colleagues_v2_request->a_obj_colleague) {
        goto fail;
    }
    cJSON *a_obj_colleague = cJSON_AddArrayToObject(item, "a_objColleague");
    if(a_obj_colleague == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_colleagueListEntry;
    if (user_edit_colleagues_v2_request->a_obj_colleague) {
    list_ForEach(a_obj_colleagueListEntry, user_edit_colleagues_v2_request->a_obj_colleague) {
    cJSON *itemLocal = colleague_request_compound_v2_convertToJSON(a_obj_colleagueListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_colleague, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request_parseFromJSON(cJSON *user_edit_colleagues_v2_requestJSON){

    user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request_local_var = NULL;

    // define the local list for user_edit_colleagues_v2_request->a_obj_colleague
    list_t *a_obj_colleagueList = NULL;

    // user_edit_colleagues_v2_request->a_obj_colleague
    cJSON *a_obj_colleague = cJSON_GetObjectItemCaseSensitive(user_edit_colleagues_v2_requestJSON, "a_objColleague");
    if (!a_obj_colleague) {
        goto end;
    }

    
    cJSON *a_obj_colleague_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_colleague)){
        goto end; //nonprimitive container
    }

    a_obj_colleagueList = list_createList();

    cJSON_ArrayForEach(a_obj_colleague_local_nonprimitive,a_obj_colleague )
    {
        if(!cJSON_IsObject(a_obj_colleague_local_nonprimitive)){
            goto end;
        }
        colleague_request_compound_v2_t *a_obj_colleagueItem = colleague_request_compound_v2_parseFromJSON(a_obj_colleague_local_nonprimitive);

        list_addElement(a_obj_colleagueList, a_obj_colleagueItem);
    }


    user_edit_colleagues_v2_request_local_var = user_edit_colleagues_v2_request_create (
        a_obj_colleagueList
        );

    return user_edit_colleagues_v2_request_local_var;
end:
    if (a_obj_colleagueList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_colleagueList) {
            colleague_request_compound_v2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_colleagueList);
        a_obj_colleagueList = NULL;
    }
    return NULL;

}
