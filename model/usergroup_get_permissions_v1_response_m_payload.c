#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_get_permissions_v1_response_m_payload.h"



static usergroup_get_permissions_v1_response_m_payload_t *usergroup_get_permissions_v1_response_m_payload_create_internal(
    list_t *a_obj_modulegroup
    ) {
    usergroup_get_permissions_v1_response_m_payload_t *usergroup_get_permissions_v1_response_m_payload_local_var = malloc(sizeof(usergroup_get_permissions_v1_response_m_payload_t));
    if (!usergroup_get_permissions_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroup_get_permissions_v1_response_m_payload_local_var->a_obj_modulegroup = a_obj_modulegroup;

    usergroup_get_permissions_v1_response_m_payload_local_var->_library_owned = 1;
    return usergroup_get_permissions_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroup_get_permissions_v1_response_m_payload_t *usergroup_get_permissions_v1_response_m_payload_create(
    list_t *a_obj_modulegroup
    ) {
    return usergroup_get_permissions_v1_response_m_payload_create_internal (
        a_obj_modulegroup
        );
}

void usergroup_get_permissions_v1_response_m_payload_free(usergroup_get_permissions_v1_response_m_payload_t *usergroup_get_permissions_v1_response_m_payload) {
    if(NULL == usergroup_get_permissions_v1_response_m_payload){
        return ;
    }
    if(usergroup_get_permissions_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_get_permissions_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
        list_ForEach(listEntry, usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
            modulegroup_response_compound_free(listEntry->data);
        }
        list_freeList(usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup);
        usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup = NULL;
    }
    free(usergroup_get_permissions_v1_response_m_payload);
}

cJSON *usergroup_get_permissions_v1_response_m_payload_convertToJSON(usergroup_get_permissions_v1_response_m_payload_t *usergroup_get_permissions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup
    if (!usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
        goto fail;
    }
    cJSON *a_obj_modulegroup = cJSON_AddArrayToObject(item, "a_objModulegroup");
    if(a_obj_modulegroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_modulegroupListEntry;
    if (usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
    list_ForEach(a_obj_modulegroupListEntry, usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup) {
    cJSON *itemLocal = modulegroup_response_compound_convertToJSON(a_obj_modulegroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_modulegroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_get_permissions_v1_response_m_payload_t *usergroup_get_permissions_v1_response_m_payload_parseFromJSON(cJSON *usergroup_get_permissions_v1_response_m_payloadJSON){

    usergroup_get_permissions_v1_response_m_payload_t *usergroup_get_permissions_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup
    list_t *a_obj_modulegroupList = NULL;

    // usergroup_get_permissions_v1_response_m_payload->a_obj_modulegroup
    cJSON *a_obj_modulegroup = cJSON_GetObjectItemCaseSensitive(usergroup_get_permissions_v1_response_m_payloadJSON, "a_objModulegroup");
    if (cJSON_IsNull(a_obj_modulegroup)) {
        a_obj_modulegroup = NULL;
    }
    if (!a_obj_modulegroup) {
        goto end;
    }

    
    cJSON *a_obj_modulegroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_modulegroup)){
        goto end; //nonprimitive container
    }

    a_obj_modulegroupList = list_createList();

    cJSON_ArrayForEach(a_obj_modulegroup_local_nonprimitive,a_obj_modulegroup )
    {
        if(!cJSON_IsObject(a_obj_modulegroup_local_nonprimitive)){
            goto end;
        }
        modulegroup_response_compound_t *a_obj_modulegroupItem = modulegroup_response_compound_parseFromJSON(a_obj_modulegroup_local_nonprimitive);

        list_addElement(a_obj_modulegroupList, a_obj_modulegroupItem);
    }


    usergroup_get_permissions_v1_response_m_payload_local_var = usergroup_get_permissions_v1_response_m_payload_create_internal (
        a_obj_modulegroupList
        );

    return usergroup_get_permissions_v1_response_m_payload_local_var;
end:
    if (a_obj_modulegroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_modulegroupList) {
            modulegroup_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_modulegroupList);
        a_obj_modulegroupList = NULL;
    }
    return NULL;

}
