#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_get_members_v1_response_m_payload.h"



usergroup_get_members_v1_response_m_payload_t *usergroup_get_members_v1_response_m_payload_create(
    list_t *a_fki_user_id
    ) {
    usergroup_get_members_v1_response_m_payload_t *usergroup_get_members_v1_response_m_payload_local_var = malloc(sizeof(usergroup_get_members_v1_response_m_payload_t));
    if (!usergroup_get_members_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroup_get_members_v1_response_m_payload_local_var->a_fki_user_id = a_fki_user_id;

    return usergroup_get_members_v1_response_m_payload_local_var;
}


void usergroup_get_members_v1_response_m_payload_free(usergroup_get_members_v1_response_m_payload_t *usergroup_get_members_v1_response_m_payload) {
    if(NULL == usergroup_get_members_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_get_members_v1_response_m_payload->a_fki_user_id) {
        list_ForEach(listEntry, usergroup_get_members_v1_response_m_payload->a_fki_user_id) {
            free(listEntry->data);
        }
        list_freeList(usergroup_get_members_v1_response_m_payload->a_fki_user_id);
        usergroup_get_members_v1_response_m_payload->a_fki_user_id = NULL;
    }
    free(usergroup_get_members_v1_response_m_payload);
}

cJSON *usergroup_get_members_v1_response_m_payload_convertToJSON(usergroup_get_members_v1_response_m_payload_t *usergroup_get_members_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_get_members_v1_response_m_payload->a_fki_user_id
    if(usergroup_get_members_v1_response_m_payload->a_fki_user_id) {
    cJSON *a_fki_user_id = cJSON_AddArrayToObject(item, "a_fkiUserID");
    if(a_fki_user_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_fki_user_idListEntry;
    list_ForEach(a_fki_user_idListEntry, usergroup_get_members_v1_response_m_payload->a_fki_user_id) {
    if(cJSON_AddNumberToObject(a_fki_user_id, "", *(double *)a_fki_user_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_get_members_v1_response_m_payload_t *usergroup_get_members_v1_response_m_payload_parseFromJSON(cJSON *usergroup_get_members_v1_response_m_payloadJSON){

    usergroup_get_members_v1_response_m_payload_t *usergroup_get_members_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroup_get_members_v1_response_m_payload->a_fki_user_id
    list_t *a_fki_user_idList = NULL;

    // usergroup_get_members_v1_response_m_payload->a_fki_user_id
    cJSON *a_fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroup_get_members_v1_response_m_payloadJSON, "a_fkiUserID");
    if (a_fki_user_id) { 
    cJSON *a_fki_user_id_local = NULL;
    if(!cJSON_IsArray(a_fki_user_id)) {
        goto end;//primitive container
    }
    a_fki_user_idList = list_createList();

    cJSON_ArrayForEach(a_fki_user_id_local, a_fki_user_id)
    {
        if(!cJSON_IsNumber(a_fki_user_id_local))
        {
            goto end;
        }
        double *a_fki_user_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_fki_user_id_local_value)
        {
            goto end;
        }
        *a_fki_user_id_local_value = a_fki_user_id_local->valuedouble;
        list_addElement(a_fki_user_idList , a_fki_user_id_local_value);
    }
    }


    usergroup_get_members_v1_response_m_payload_local_var = usergroup_get_members_v1_response_m_payload_create (
        a_fki_user_id ? a_fki_user_idList : NULL
        );

    return usergroup_get_members_v1_response_m_payload_local_var;
end:
    if (a_fki_user_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_fki_user_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_fki_user_idList);
        a_fki_user_idList = NULL;
    }
    return NULL;

}
