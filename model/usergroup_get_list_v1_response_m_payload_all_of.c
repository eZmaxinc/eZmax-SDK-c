#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_get_list_v1_response_m_payload_all_of.h"



usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_usergroup
    ) {
    usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(usergroup_get_list_v1_response_m_payload_all_of_t));
    if (!usergroup_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    usergroup_get_list_v1_response_m_payload_all_of_local_var->a_obj_usergroup = a_obj_usergroup;

    return usergroup_get_list_v1_response_m_payload_all_of_local_var;
}


void usergroup_get_list_v1_response_m_payload_all_of_free(usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of) {
    if(NULL == usergroup_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup) {
        list_ForEach(listEntry, usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup) {
            usergroup_list_element_free(listEntry->data);
        }
        list_freeList(usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup);
        usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup = NULL;
    }
    free(usergroup_get_list_v1_response_m_payload_all_of);
}

cJSON *usergroup_get_list_v1_response_m_payload_all_of_convertToJSON(usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup
    if (!usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup) {
        goto fail;
    }
    cJSON *a_obj_usergroup = cJSON_AddArrayToObject(item, "a_objUsergroup");
    if(a_obj_usergroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupListEntry;
    if (usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup) {
    list_ForEach(a_obj_usergroupListEntry, usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup) {
    cJSON *itemLocal = usergroup_list_element_convertToJSON(a_obj_usergroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *usergroup_get_list_v1_response_m_payload_all_ofJSON){

    usergroup_get_list_v1_response_m_payload_all_of_t *usergroup_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup
    list_t *a_obj_usergroupList = NULL;

    // usergroup_get_list_v1_response_m_payload_all_of->a_obj_usergroup
    cJSON *a_obj_usergroup = cJSON_GetObjectItemCaseSensitive(usergroup_get_list_v1_response_m_payload_all_ofJSON, "a_objUsergroup");
    if (!a_obj_usergroup) {
        goto end;
    }

    
    cJSON *a_obj_usergroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_usergroup)){
        goto end; //nonprimitive container
    }

    a_obj_usergroupList = list_createList();

    cJSON_ArrayForEach(a_obj_usergroup_local_nonprimitive,a_obj_usergroup )
    {
        if(!cJSON_IsObject(a_obj_usergroup_local_nonprimitive)){
            goto end;
        }
        usergroup_list_element_t *a_obj_usergroupItem = usergroup_list_element_parseFromJSON(a_obj_usergroup_local_nonprimitive);

        list_addElement(a_obj_usergroupList, a_obj_usergroupItem);
    }


    usergroup_get_list_v1_response_m_payload_all_of_local_var = usergroup_get_list_v1_response_m_payload_all_of_create (
        a_obj_usergroupList
        );

    return usergroup_get_list_v1_response_m_payload_all_of_local_var;
end:
    if (a_obj_usergroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupList) {
            usergroup_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupList);
        a_obj_usergroupList = NULL;
    }
    return NULL;

}
