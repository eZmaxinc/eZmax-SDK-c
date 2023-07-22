#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_edit_permissions_v1_response_m_payload.h"



user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload_create(
    list_t *a_pki_permission_id
    ) {
    user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload_local_var = malloc(sizeof(user_edit_permissions_v1_response_m_payload_t));
    if (!user_edit_permissions_v1_response_m_payload_local_var) {
        return NULL;
    }
    user_edit_permissions_v1_response_m_payload_local_var->a_pki_permission_id = a_pki_permission_id;

    return user_edit_permissions_v1_response_m_payload_local_var;
}


void user_edit_permissions_v1_response_m_payload_free(user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload) {
    if(NULL == user_edit_permissions_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (user_edit_permissions_v1_response_m_payload->a_pki_permission_id) {
        list_ForEach(listEntry, user_edit_permissions_v1_response_m_payload->a_pki_permission_id) {
            free(listEntry->data);
        }
        list_freeList(user_edit_permissions_v1_response_m_payload->a_pki_permission_id);
        user_edit_permissions_v1_response_m_payload->a_pki_permission_id = NULL;
    }
    free(user_edit_permissions_v1_response_m_payload);
}

cJSON *user_edit_permissions_v1_response_m_payload_convertToJSON(user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_edit_permissions_v1_response_m_payload->a_pki_permission_id
    if (!user_edit_permissions_v1_response_m_payload->a_pki_permission_id) {
        goto fail;
    }
    cJSON *a_pki_permission_id = cJSON_AddArrayToObject(item, "a_pkiPermissionID");
    if(a_pki_permission_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_permission_idListEntry;
    list_ForEach(a_pki_permission_idListEntry, user_edit_permissions_v1_response_m_payload->a_pki_permission_id) {
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

user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload_parseFromJSON(cJSON *user_edit_permissions_v1_response_m_payloadJSON){

    user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload_local_var = NULL;

    // define the local list for user_edit_permissions_v1_response_m_payload->a_pki_permission_id
    list_t *a_pki_permission_idList = NULL;

    // user_edit_permissions_v1_response_m_payload->a_pki_permission_id
    cJSON *a_pki_permission_id = cJSON_GetObjectItemCaseSensitive(user_edit_permissions_v1_response_m_payloadJSON, "a_pkiPermissionID");
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
        double *a_pki_permission_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_permission_id_local_value)
        {
            goto end;
        }
        *a_pki_permission_id_local_value = a_pki_permission_id_local->valuedouble;
        list_addElement(a_pki_permission_idList , a_pki_permission_id_local_value);
    }


    user_edit_permissions_v1_response_m_payload_local_var = user_edit_permissions_v1_response_m_payload_create (
        a_pki_permission_idList
        );

    return user_edit_permissions_v1_response_m_payload_local_var;
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
