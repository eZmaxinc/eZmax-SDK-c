#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_get_colleagues_v2_response_m_payload.h"



user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload_create(
    list_t *a_obj_colleague,
    list_t *a_obj_colleague_clonable
    ) {
    user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload_local_var = malloc(sizeof(user_get_colleagues_v2_response_m_payload_t));
    if (!user_get_colleagues_v2_response_m_payload_local_var) {
        return NULL;
    }
    user_get_colleagues_v2_response_m_payload_local_var->a_obj_colleague = a_obj_colleague;
    user_get_colleagues_v2_response_m_payload_local_var->a_obj_colleague_clonable = a_obj_colleague_clonable;

    return user_get_colleagues_v2_response_m_payload_local_var;
}


void user_get_colleagues_v2_response_m_payload_free(user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload) {
    if(NULL == user_get_colleagues_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (user_get_colleagues_v2_response_m_payload->a_obj_colleague) {
        list_ForEach(listEntry, user_get_colleagues_v2_response_m_payload->a_obj_colleague) {
            colleague_response_compound_v2_free(listEntry->data);
        }
        list_freeList(user_get_colleagues_v2_response_m_payload->a_obj_colleague);
        user_get_colleagues_v2_response_m_payload->a_obj_colleague = NULL;
    }
    if (user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable) {
        list_ForEach(listEntry, user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable) {
            colleague_response_compound_v2_free(listEntry->data);
        }
        list_freeList(user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable);
        user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable = NULL;
    }
    free(user_get_colleagues_v2_response_m_payload);
}

cJSON *user_get_colleagues_v2_response_m_payload_convertToJSON(user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_get_colleagues_v2_response_m_payload->a_obj_colleague
    if (!user_get_colleagues_v2_response_m_payload->a_obj_colleague) {
        goto fail;
    }
    cJSON *a_obj_colleague = cJSON_AddArrayToObject(item, "a_objColleague");
    if(a_obj_colleague == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_colleagueListEntry;
    if (user_get_colleagues_v2_response_m_payload->a_obj_colleague) {
    list_ForEach(a_obj_colleagueListEntry, user_get_colleagues_v2_response_m_payload->a_obj_colleague) {
    cJSON *itemLocal = colleague_response_compound_v2_convertToJSON(a_obj_colleagueListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_colleague, itemLocal);
    }
    }


    // user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable
    if (!user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable) {
        goto fail;
    }
    cJSON *a_obj_colleague_clonable = cJSON_AddArrayToObject(item, "a_objColleagueClonable");
    if(a_obj_colleague_clonable == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_colleague_clonableListEntry;
    if (user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable) {
    list_ForEach(a_obj_colleague_clonableListEntry, user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable) {
    cJSON *itemLocal = colleague_response_compound_v2_convertToJSON(a_obj_colleague_clonableListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_colleague_clonable, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload_parseFromJSON(cJSON *user_get_colleagues_v2_response_m_payloadJSON){

    user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload_local_var = NULL;

    // define the local list for user_get_colleagues_v2_response_m_payload->a_obj_colleague
    list_t *a_obj_colleagueList = NULL;

    // define the local list for user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable
    list_t *a_obj_colleague_clonableList = NULL;

    // user_get_colleagues_v2_response_m_payload->a_obj_colleague
    cJSON *a_obj_colleague = cJSON_GetObjectItemCaseSensitive(user_get_colleagues_v2_response_m_payloadJSON, "a_objColleague");
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
        colleague_response_compound_v2_t *a_obj_colleagueItem = colleague_response_compound_v2_parseFromJSON(a_obj_colleague_local_nonprimitive);

        list_addElement(a_obj_colleagueList, a_obj_colleagueItem);
    }

    // user_get_colleagues_v2_response_m_payload->a_obj_colleague_clonable
    cJSON *a_obj_colleague_clonable = cJSON_GetObjectItemCaseSensitive(user_get_colleagues_v2_response_m_payloadJSON, "a_objColleagueClonable");
    if (!a_obj_colleague_clonable) {
        goto end;
    }

    
    cJSON *a_obj_colleague_clonable_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_colleague_clonable)){
        goto end; //nonprimitive container
    }

    a_obj_colleague_clonableList = list_createList();

    cJSON_ArrayForEach(a_obj_colleague_clonable_local_nonprimitive,a_obj_colleague_clonable )
    {
        if(!cJSON_IsObject(a_obj_colleague_clonable_local_nonprimitive)){
            goto end;
        }
        colleague_response_compound_v2_t *a_obj_colleague_clonableItem = colleague_response_compound_v2_parseFromJSON(a_obj_colleague_clonable_local_nonprimitive);

        list_addElement(a_obj_colleague_clonableList, a_obj_colleague_clonableItem);
    }


    user_get_colleagues_v2_response_m_payload_local_var = user_get_colleagues_v2_response_m_payload_create (
        a_obj_colleagueList,
        a_obj_colleague_clonableList
        );

    return user_get_colleagues_v2_response_m_payload_local_var;
end:
    if (a_obj_colleagueList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_colleagueList) {
            colleague_response_compound_v2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_colleagueList);
        a_obj_colleagueList = NULL;
    }
    if (a_obj_colleague_clonableList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_colleague_clonableList) {
            colleague_response_compound_v2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_colleague_clonableList);
        a_obj_colleague_clonableList = NULL;
    }
    return NULL;

}
