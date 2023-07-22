#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_get_list_v1_response_m_payload.h"



user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload_create(
    list_t *a_obj_user,
    int i_row_returned,
    int i_row_filtered
    ) {
    user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload_local_var = malloc(sizeof(user_get_list_v1_response_m_payload_t));
    if (!user_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    user_get_list_v1_response_m_payload_local_var->a_obj_user = a_obj_user;
    user_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    user_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return user_get_list_v1_response_m_payload_local_var;
}


void user_get_list_v1_response_m_payload_free(user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload) {
    if(NULL == user_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (user_get_list_v1_response_m_payload->a_obj_user) {
        list_ForEach(listEntry, user_get_list_v1_response_m_payload->a_obj_user) {
            user_list_element_free(listEntry->data);
        }
        list_freeList(user_get_list_v1_response_m_payload->a_obj_user);
        user_get_list_v1_response_m_payload->a_obj_user = NULL;
    }
    free(user_get_list_v1_response_m_payload);
}

cJSON *user_get_list_v1_response_m_payload_convertToJSON(user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_get_list_v1_response_m_payload->a_obj_user
    if (!user_get_list_v1_response_m_payload->a_obj_user) {
        goto fail;
    }
    cJSON *a_obj_user = cJSON_AddArrayToObject(item, "a_objUser");
    if(a_obj_user == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_userListEntry;
    if (user_get_list_v1_response_m_payload->a_obj_user) {
    list_ForEach(a_obj_userListEntry, user_get_list_v1_response_m_payload->a_obj_user) {
    cJSON *itemLocal = user_list_element_convertToJSON(a_obj_userListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_user, itemLocal);
    }
    }


    // user_get_list_v1_response_m_payload->i_row_returned
    if (!user_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", user_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // user_get_list_v1_response_m_payload->i_row_filtered
    if (!user_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", user_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload_parseFromJSON(cJSON *user_get_list_v1_response_m_payloadJSON){

    user_get_list_v1_response_m_payload_t *user_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for user_get_list_v1_response_m_payload->a_obj_user
    list_t *a_obj_userList = NULL;

    // user_get_list_v1_response_m_payload->a_obj_user
    cJSON *a_obj_user = cJSON_GetObjectItemCaseSensitive(user_get_list_v1_response_m_payloadJSON, "a_objUser");
    if (!a_obj_user) {
        goto end;
    }

    
    cJSON *a_obj_user_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_user)){
        goto end; //nonprimitive container
    }

    a_obj_userList = list_createList();

    cJSON_ArrayForEach(a_obj_user_local_nonprimitive,a_obj_user )
    {
        if(!cJSON_IsObject(a_obj_user_local_nonprimitive)){
            goto end;
        }
        user_list_element_t *a_obj_userItem = user_list_element_parseFromJSON(a_obj_user_local_nonprimitive);

        list_addElement(a_obj_userList, a_obj_userItem);
    }

    // user_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(user_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // user_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(user_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    user_get_list_v1_response_m_payload_local_var = user_get_list_v1_response_m_payload_create (
        a_obj_userList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return user_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_userList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_userList) {
            user_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_userList);
        a_obj_userList = NULL;
    }
    return NULL;

}
