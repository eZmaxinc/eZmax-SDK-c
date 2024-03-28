#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_get_usergroups_v1_response_m_payload.h"



user_get_usergroups_v1_response_m_payload_t *user_get_usergroups_v1_response_m_payload_create(
    list_t *a_obj_usergroup
    ) {
    user_get_usergroups_v1_response_m_payload_t *user_get_usergroups_v1_response_m_payload_local_var = malloc(sizeof(user_get_usergroups_v1_response_m_payload_t));
    if (!user_get_usergroups_v1_response_m_payload_local_var) {
        return NULL;
    }
    user_get_usergroups_v1_response_m_payload_local_var->a_obj_usergroup = a_obj_usergroup;

    return user_get_usergroups_v1_response_m_payload_local_var;
}


void user_get_usergroups_v1_response_m_payload_free(user_get_usergroups_v1_response_m_payload_t *user_get_usergroups_v1_response_m_payload) {
    if(NULL == user_get_usergroups_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (user_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
        list_ForEach(listEntry, user_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
            usergroup_response_compound_free(listEntry->data);
        }
        list_freeList(user_get_usergroups_v1_response_m_payload->a_obj_usergroup);
        user_get_usergroups_v1_response_m_payload->a_obj_usergroup = NULL;
    }
    free(user_get_usergroups_v1_response_m_payload);
}

cJSON *user_get_usergroups_v1_response_m_payload_convertToJSON(user_get_usergroups_v1_response_m_payload_t *user_get_usergroups_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_get_usergroups_v1_response_m_payload->a_obj_usergroup
    if (!user_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
        goto fail;
    }
    cJSON *a_obj_usergroup = cJSON_AddArrayToObject(item, "a_objUsergroup");
    if(a_obj_usergroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupListEntry;
    if (user_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
    list_ForEach(a_obj_usergroupListEntry, user_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
    cJSON *itemLocal = usergroup_response_compound_convertToJSON(a_obj_usergroupListEntry->data);
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

user_get_usergroups_v1_response_m_payload_t *user_get_usergroups_v1_response_m_payload_parseFromJSON(cJSON *user_get_usergroups_v1_response_m_payloadJSON){

    user_get_usergroups_v1_response_m_payload_t *user_get_usergroups_v1_response_m_payload_local_var = NULL;

    // define the local list for user_get_usergroups_v1_response_m_payload->a_obj_usergroup
    list_t *a_obj_usergroupList = NULL;

    // user_get_usergroups_v1_response_m_payload->a_obj_usergroup
    cJSON *a_obj_usergroup = cJSON_GetObjectItemCaseSensitive(user_get_usergroups_v1_response_m_payloadJSON, "a_objUsergroup");
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
        usergroup_response_compound_t *a_obj_usergroupItem = usergroup_response_compound_parseFromJSON(a_obj_usergroup_local_nonprimitive);

        list_addElement(a_obj_usergroupList, a_obj_usergroupItem);
    }


    user_get_usergroups_v1_response_m_payload_local_var = user_get_usergroups_v1_response_m_payload_create (
        a_obj_usergroupList
        );

    return user_get_usergroups_v1_response_m_payload_local_var;
end:
    if (a_obj_usergroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupList) {
            usergroup_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupList);
        a_obj_usergroupList = NULL;
    }
    return NULL;

}
