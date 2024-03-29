#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_get_list_v1_response_m_payload.h"



usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload_create(
    list_t *a_obj_usergroup,
    int i_row_returned,
    int i_row_filtered
    ) {
    usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload_local_var = malloc(sizeof(usergroup_get_list_v1_response_m_payload_t));
    if (!usergroup_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroup_get_list_v1_response_m_payload_local_var->a_obj_usergroup = a_obj_usergroup;
    usergroup_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    usergroup_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return usergroup_get_list_v1_response_m_payload_local_var;
}


void usergroup_get_list_v1_response_m_payload_free(usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload) {
    if(NULL == usergroup_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_get_list_v1_response_m_payload->a_obj_usergroup) {
        list_ForEach(listEntry, usergroup_get_list_v1_response_m_payload->a_obj_usergroup) {
            usergroup_list_element_free(listEntry->data);
        }
        list_freeList(usergroup_get_list_v1_response_m_payload->a_obj_usergroup);
        usergroup_get_list_v1_response_m_payload->a_obj_usergroup = NULL;
    }
    free(usergroup_get_list_v1_response_m_payload);
}

cJSON *usergroup_get_list_v1_response_m_payload_convertToJSON(usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_get_list_v1_response_m_payload->a_obj_usergroup
    if (!usergroup_get_list_v1_response_m_payload->a_obj_usergroup) {
        goto fail;
    }
    cJSON *a_obj_usergroup = cJSON_AddArrayToObject(item, "a_objUsergroup");
    if(a_obj_usergroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_usergroupListEntry;
    if (usergroup_get_list_v1_response_m_payload->a_obj_usergroup) {
    list_ForEach(a_obj_usergroupListEntry, usergroup_get_list_v1_response_m_payload->a_obj_usergroup) {
    cJSON *itemLocal = usergroup_list_element_convertToJSON(a_obj_usergroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_usergroup, itemLocal);
    }
    }


    // usergroup_get_list_v1_response_m_payload->i_row_returned
    if (!usergroup_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", usergroup_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // usergroup_get_list_v1_response_m_payload->i_row_filtered
    if (!usergroup_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", usergroup_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload_parseFromJSON(cJSON *usergroup_get_list_v1_response_m_payloadJSON){

    usergroup_get_list_v1_response_m_payload_t *usergroup_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroup_get_list_v1_response_m_payload->a_obj_usergroup
    list_t *a_obj_usergroupList = NULL;

    // usergroup_get_list_v1_response_m_payload->a_obj_usergroup
    cJSON *a_obj_usergroup = cJSON_GetObjectItemCaseSensitive(usergroup_get_list_v1_response_m_payloadJSON, "a_objUsergroup");
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

    // usergroup_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(usergroup_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // usergroup_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(usergroup_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    usergroup_get_list_v1_response_m_payload_local_var = usergroup_get_list_v1_response_m_payload_create (
        a_obj_usergroupList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return usergroup_get_list_v1_response_m_payload_local_var;
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
