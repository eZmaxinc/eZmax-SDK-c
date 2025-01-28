#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_get_usergroupdelegations_v1_response_m_payload.h"



static usergroup_get_usergroupdelegations_v1_response_m_payload_t *usergroup_get_usergroupdelegations_v1_response_m_payload_create_internal(
    list_t *a_obj_usergroupdelegation
    ) {
    usergroup_get_usergroupdelegations_v1_response_m_payload_t *usergroup_get_usergroupdelegations_v1_response_m_payload_local_var = malloc(sizeof(usergroup_get_usergroupdelegations_v1_response_m_payload_t));
    if (!usergroup_get_usergroupdelegations_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroup_get_usergroupdelegations_v1_response_m_payload_local_var->a_obj_usergroupdelegation = a_obj_usergroupdelegation;

    usergroup_get_usergroupdelegations_v1_response_m_payload_local_var->_library_owned = 1;
    return usergroup_get_usergroupdelegations_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroup_get_usergroupdelegations_v1_response_m_payload_t *usergroup_get_usergroupdelegations_v1_response_m_payload_create(
    list_t *a_obj_usergroupdelegation
    ) {
    return usergroup_get_usergroupdelegations_v1_response_m_payload_create_internal (
        a_obj_usergroupdelegation
        );
}

void usergroup_get_usergroupdelegations_v1_response_m_payload_free(usergroup_get_usergroupdelegations_v1_response_m_payload_t *usergroup_get_usergroupdelegations_v1_response_m_payload) {
    if(NULL == usergroup_get_usergroupdelegations_v1_response_m_payload){
        return ;
    }
    if(usergroup_get_usergroupdelegations_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_get_usergroupdelegations_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation) {
        list_ForEach(listEntry, usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation) {
            usergroupdelegation_response_compound_free(listEntry->data);
        }
        list_freeList(usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation);
        usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation = NULL;
    }
    free(usergroup_get_usergroupdelegations_v1_response_m_payload);
}

cJSON *usergroup_get_usergroupdelegations_v1_response_m_payload_convertToJSON(usergroup_get_usergroupdelegations_v1_response_m_payload_t *usergroup_get_usergroupdelegations_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation
    if (!usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation) {
        goto fail;
    }
    cJSON *a_obj_usergroupdelegation = cJSON_AddArrayToObject(item, "a_objUsergroupdelegation");
    if(a_obj_usergroupdelegation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupdelegationListEntry;
    if (usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation) {
    list_ForEach(a_obj_usergroupdelegationListEntry, usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation) {
    cJSON *itemLocal = usergroupdelegation_response_compound_convertToJSON(a_obj_usergroupdelegationListEntry->data);
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

usergroup_get_usergroupdelegations_v1_response_m_payload_t *usergroup_get_usergroupdelegations_v1_response_m_payload_parseFromJSON(cJSON *usergroup_get_usergroupdelegations_v1_response_m_payloadJSON){

    usergroup_get_usergroupdelegations_v1_response_m_payload_t *usergroup_get_usergroupdelegations_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation
    list_t *a_obj_usergroupdelegationList = NULL;

    // usergroup_get_usergroupdelegations_v1_response_m_payload->a_obj_usergroupdelegation
    cJSON *a_obj_usergroupdelegation = cJSON_GetObjectItemCaseSensitive(usergroup_get_usergroupdelegations_v1_response_m_payloadJSON, "a_objUsergroupdelegation");
    if (cJSON_IsNull(a_obj_usergroupdelegation)) {
        a_obj_usergroupdelegation = NULL;
    }
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
        usergroupdelegation_response_compound_t *a_obj_usergroupdelegationItem = usergroupdelegation_response_compound_parseFromJSON(a_obj_usergroupdelegation_local_nonprimitive);

        list_addElement(a_obj_usergroupdelegationList, a_obj_usergroupdelegationItem);
    }


    usergroup_get_usergroupdelegations_v1_response_m_payload_local_var = usergroup_get_usergroupdelegations_v1_response_m_payload_create_internal (
        a_obj_usergroupdelegationList
        );

    return usergroup_get_usergroupdelegations_v1_response_m_payload_local_var;
end:
    if (a_obj_usergroupdelegationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_usergroupdelegationList) {
            usergroupdelegation_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_usergroupdelegationList);
        a_obj_usergroupdelegationList = NULL;
    }
    return NULL;

}
