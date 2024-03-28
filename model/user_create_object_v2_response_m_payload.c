#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_create_object_v2_response_m_payload.h"



user_create_object_v2_response_m_payload_t *user_create_object_v2_response_m_payload_create(
    list_t *a_pki_user_id
    ) {
    user_create_object_v2_response_m_payload_t *user_create_object_v2_response_m_payload_local_var = malloc(sizeof(user_create_object_v2_response_m_payload_t));
    if (!user_create_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    user_create_object_v2_response_m_payload_local_var->a_pki_user_id = a_pki_user_id;

    return user_create_object_v2_response_m_payload_local_var;
}


void user_create_object_v2_response_m_payload_free(user_create_object_v2_response_m_payload_t *user_create_object_v2_response_m_payload) {
    if(NULL == user_create_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (user_create_object_v2_response_m_payload->a_pki_user_id) {
        list_ForEach(listEntry, user_create_object_v2_response_m_payload->a_pki_user_id) {
            free(listEntry->data);
        }
        list_freeList(user_create_object_v2_response_m_payload->a_pki_user_id);
        user_create_object_v2_response_m_payload->a_pki_user_id = NULL;
    }
    free(user_create_object_v2_response_m_payload);
}

cJSON *user_create_object_v2_response_m_payload_convertToJSON(user_create_object_v2_response_m_payload_t *user_create_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_create_object_v2_response_m_payload->a_pki_user_id
    if (!user_create_object_v2_response_m_payload->a_pki_user_id) {
        goto fail;
    }
    cJSON *a_pki_user_id = cJSON_AddArrayToObject(item, "a_pkiUserID");
    if(a_pki_user_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_user_idListEntry;
    list_ForEach(a_pki_user_idListEntry, user_create_object_v2_response_m_payload->a_pki_user_id) {
    if(cJSON_AddNumberToObject(a_pki_user_id, "", *(double *)a_pki_user_idListEntry->data) == NULL)
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

user_create_object_v2_response_m_payload_t *user_create_object_v2_response_m_payload_parseFromJSON(cJSON *user_create_object_v2_response_m_payloadJSON){

    user_create_object_v2_response_m_payload_t *user_create_object_v2_response_m_payload_local_var = NULL;

    // define the local list for user_create_object_v2_response_m_payload->a_pki_user_id
    list_t *a_pki_user_idList = NULL;

    // user_create_object_v2_response_m_payload->a_pki_user_id
    cJSON *a_pki_user_id = cJSON_GetObjectItemCaseSensitive(user_create_object_v2_response_m_payloadJSON, "a_pkiUserID");
    if (!a_pki_user_id) {
        goto end;
    }

    
    cJSON *a_pki_user_id_local = NULL;
    if(!cJSON_IsArray(a_pki_user_id)) {
        goto end;//primitive container
    }
    a_pki_user_idList = list_createList();

    cJSON_ArrayForEach(a_pki_user_id_local, a_pki_user_id)
    {
        if(!cJSON_IsNumber(a_pki_user_id_local))
        {
            goto end;
        }
        double *a_pki_user_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_user_id_local_value)
        {
            goto end;
        }
        *a_pki_user_id_local_value = a_pki_user_id_local->valuedouble;
        list_addElement(a_pki_user_idList , a_pki_user_id_local_value);
    }


    user_create_object_v2_response_m_payload_local_var = user_create_object_v2_response_m_payload_create (
        a_pki_user_idList
        );

    return user_create_object_v2_response_m_payload_local_var;
end:
    if (a_pki_user_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_user_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_user_idList);
        a_pki_user_idList = NULL;
    }
    return NULL;

}
