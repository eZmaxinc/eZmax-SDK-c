#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupexternal_get_usergroups_v1_response_m_payload.h"



usergroupexternal_get_usergroups_v1_response_m_payload_t *usergroupexternal_get_usergroups_v1_response_m_payload_create(
    list_t *a_obj_usergroup
    ) {
    usergroupexternal_get_usergroups_v1_response_m_payload_t *usergroupexternal_get_usergroups_v1_response_m_payload_local_var = malloc(sizeof(usergroupexternal_get_usergroups_v1_response_m_payload_t));
    if (!usergroupexternal_get_usergroups_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroupexternal_get_usergroups_v1_response_m_payload_local_var->a_obj_usergroup = a_obj_usergroup;

    return usergroupexternal_get_usergroups_v1_response_m_payload_local_var;
}


void usergroupexternal_get_usergroups_v1_response_m_payload_free(usergroupexternal_get_usergroups_v1_response_m_payload_t *usergroupexternal_get_usergroups_v1_response_m_payload) {
    if(NULL == usergroupexternal_get_usergroups_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
        list_ForEach(listEntry, usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
            usergroup_response_compound_free(listEntry->data);
        }
        list_freeList(usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup);
        usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup = NULL;
    }
    free(usergroupexternal_get_usergroups_v1_response_m_payload);
}

cJSON *usergroupexternal_get_usergroups_v1_response_m_payload_convertToJSON(usergroupexternal_get_usergroups_v1_response_m_payload_t *usergroupexternal_get_usergroups_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup
    if (!usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
        goto fail;
    }
    cJSON *a_obj_usergroup = cJSON_AddArrayToObject(item, "a_objUsergroup");
    if(a_obj_usergroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupListEntry;
    if (usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
    list_ForEach(a_obj_usergroupListEntry, usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup) {
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

usergroupexternal_get_usergroups_v1_response_m_payload_t *usergroupexternal_get_usergroups_v1_response_m_payload_parseFromJSON(cJSON *usergroupexternal_get_usergroups_v1_response_m_payloadJSON){

    usergroupexternal_get_usergroups_v1_response_m_payload_t *usergroupexternal_get_usergroups_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup
    list_t *a_obj_usergroupList = NULL;

    // usergroupexternal_get_usergroups_v1_response_m_payload->a_obj_usergroup
    cJSON *a_obj_usergroup = cJSON_GetObjectItemCaseSensitive(usergroupexternal_get_usergroups_v1_response_m_payloadJSON, "a_objUsergroup");
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


    usergroupexternal_get_usergroups_v1_response_m_payload_local_var = usergroupexternal_get_usergroups_v1_response_m_payload_create (
        a_obj_usergroupList
        );

    return usergroupexternal_get_usergroups_v1_response_m_payload_local_var;
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
