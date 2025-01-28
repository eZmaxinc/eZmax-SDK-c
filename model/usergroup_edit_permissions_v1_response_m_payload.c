#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_edit_permissions_v1_response_m_payload.h"



static usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload_create_internal(
    list_t *a_pki_permission_id
    ) {
    usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload_local_var = malloc(sizeof(usergroup_edit_permissions_v1_response_m_payload_t));
    if (!usergroup_edit_permissions_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroup_edit_permissions_v1_response_m_payload_local_var->a_pki_permission_id = a_pki_permission_id;

    usergroup_edit_permissions_v1_response_m_payload_local_var->_library_owned = 1;
    return usergroup_edit_permissions_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload_create(
    list_t *a_pki_permission_id
    ) {
    return usergroup_edit_permissions_v1_response_m_payload_create_internal (
        a_pki_permission_id
        );
}

void usergroup_edit_permissions_v1_response_m_payload_free(usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload) {
    if(NULL == usergroup_edit_permissions_v1_response_m_payload){
        return ;
    }
    if(usergroup_edit_permissions_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroup_edit_permissions_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id) {
        list_ForEach(listEntry, usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id) {
            free(listEntry->data);
        }
        list_freeList(usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id);
        usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id = NULL;
    }
    free(usergroup_edit_permissions_v1_response_m_payload);
}

cJSON *usergroup_edit_permissions_v1_response_m_payload_convertToJSON(usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id
    if (!usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id) {
        goto fail;
    }
    cJSON *a_pki_permission_id = cJSON_AddArrayToObject(item, "a_pkiPermissionID");
    if(a_pki_permission_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_permission_idListEntry;
    list_ForEach(a_pki_permission_idListEntry, usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id) {
    if(cJSON_AddNumberToObject(a_pki_permission_id, "", *(double *)a_pki_permission_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload_parseFromJSON(cJSON *usergroup_edit_permissions_v1_response_m_payloadJSON){

    usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id
    list_t *a_pki_permission_idList = NULL;

    // usergroup_edit_permissions_v1_response_m_payload->a_pki_permission_id
    cJSON *a_pki_permission_id = cJSON_GetObjectItemCaseSensitive(usergroup_edit_permissions_v1_response_m_payloadJSON, "a_pkiPermissionID");
    if (cJSON_IsNull(a_pki_permission_id)) {
        a_pki_permission_id = NULL;
    }
    if (!a_pki_permission_id) {
        goto end;
    }

    
    cJSON *a_pki_permission_id_local = NULL;
    if(!cJSON_IsArray(a_pki_permission_id)) {
        goto end;//primitive container
    }
    a_pki_permission_idList = list_createList();

    cJSON_ArrayForEach(a_pki_permission_id_local, a_pki_permission_id)
    {
        if(!cJSON_IsNumber(a_pki_permission_id_local))
        {
            goto end;
        }
        double *a_pki_permission_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_permission_id_local_value)
        {
            goto end;
        }
        *a_pki_permission_id_local_value = a_pki_permission_id_local->valuedouble;
        list_addElement(a_pki_permission_idList , a_pki_permission_id_local_value);
    }


    usergroup_edit_permissions_v1_response_m_payload_local_var = usergroup_edit_permissions_v1_response_m_payload_create_internal (
        a_pki_permission_idList
        );

    return usergroup_edit_permissions_v1_response_m_payload_local_var;
end:
    if (a_pki_permission_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_permission_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_permission_idList);
        a_pki_permission_idList = NULL;
    }
    return NULL;

}
