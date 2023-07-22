#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_get_usergroupmemberships_v1_response_m_payload.h"



usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload_create(
    list_t *a_obj_usergroupmembership
    ) {
    usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload_local_var = malloc(sizeof(usergroup_get_usergroupmemberships_v1_response_m_payload_t));
    if (!usergroup_get_usergroupmemberships_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroup_get_usergroupmemberships_v1_response_m_payload_local_var->a_obj_usergroupmembership = a_obj_usergroupmembership;

    return usergroup_get_usergroupmemberships_v1_response_m_payload_local_var;
}


void usergroup_get_usergroupmemberships_v1_response_m_payload_free(usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload) {
    if(NULL == usergroup_get_usergroupmemberships_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership) {
        list_ForEach(listEntry, usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership) {
            usergroupmembership_response_compound_free(listEntry->data);
        }
        list_freeList(usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership);
        usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership = NULL;
    }
    free(usergroup_get_usergroupmemberships_v1_response_m_payload);
}

cJSON *usergroup_get_usergroupmemberships_v1_response_m_payload_convertToJSON(usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership
    if (!usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership) {
        goto fail;
    }
    cJSON *a_obj_usergroupmembership = cJSON_AddArrayToObject(item, "a_objUsergroupmembership");
    if(a_obj_usergroupmembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupmembershipListEntry;
    if (usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership) {
    list_ForEach(a_obj_usergroupmembershipListEntry, usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership) {
    cJSON *itemLocal = usergroupmembership_response_compound_convertToJSON(a_obj_usergroupmembershipListEntry->data);
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

usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload_parseFromJSON(cJSON *usergroup_get_usergroupmemberships_v1_response_m_payloadJSON){

    usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership
    list_t *a_obj_usergroupmembershipList = NULL;

    // usergroup_get_usergroupmemberships_v1_response_m_payload->a_obj_usergroupmembership
    cJSON *a_obj_usergroupmembership = cJSON_GetObjectItemCaseSensitive(usergroup_get_usergroupmemberships_v1_response_m_payloadJSON, "a_objUsergroupmembership");
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
        usergroupmembership_response_compound_t *a_obj_usergroupmembershipItem = usergroupmembership_response_compound_parseFromJSON(a_obj_usergroupmembership_local_nonprimitive);

        list_addElement(a_obj_usergroupmembershipList, a_obj_usergroupmembershipItem);
    }


    usergroup_get_usergroupmemberships_v1_response_m_payload_local_var = usergroup_get_usergroupmemberships_v1_response_m_payload_create (
        a_obj_usergroupmembershipList
        );

    return usergroup_get_usergroupmemberships_v1_response_m_payload_local_var;
end:
    if (a_obj_usergroupmembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupmembershipList) {
            usergroupmembership_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupmembershipList);
        a_obj_usergroupmembershipList = NULL;
    }
    return NULL;

}
