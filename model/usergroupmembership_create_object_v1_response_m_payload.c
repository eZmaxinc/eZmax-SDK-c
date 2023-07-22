#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_create_object_v1_response_m_payload.h"



usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_usergroupmembership_id
    ) {
    usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload_local_var = malloc(sizeof(usergroupmembership_create_object_v1_response_m_payload_t));
    if (!usergroupmembership_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroupmembership_create_object_v1_response_m_payload_local_var->a_pki_usergroupmembership_id = a_pki_usergroupmembership_id;

    return usergroupmembership_create_object_v1_response_m_payload_local_var;
}


void usergroupmembership_create_object_v1_response_m_payload_free(usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload) {
    if(NULL == usergroupmembership_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id) {
        list_ForEach(listEntry, usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id) {
            free(listEntry->data);
        }
        list_freeList(usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id);
        usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id = NULL;
    }
    free(usergroupmembership_create_object_v1_response_m_payload);
}

cJSON *usergroupmembership_create_object_v1_response_m_payload_convertToJSON(usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id
    if (!usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id) {
        goto fail;
    }
    cJSON *a_pki_usergroupmembership_id = cJSON_AddArrayToObject(item, "a_pkiUsergroupmembershipID");
    if(a_pki_usergroupmembership_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_usergroupmembership_idListEntry;
    list_ForEach(a_pki_usergroupmembership_idListEntry, usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id) {
    if(cJSON_AddNumberToObject(a_pki_usergroupmembership_id, "", *(double *)a_pki_usergroupmembership_idListEntry->data) == NULL)
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

usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *usergroupmembership_create_object_v1_response_m_payloadJSON){

    usergroupmembership_create_object_v1_response_m_payload_t *usergroupmembership_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id
    list_t *a_pki_usergroupmembership_idList = NULL;

    // usergroupmembership_create_object_v1_response_m_payload->a_pki_usergroupmembership_id
    cJSON *a_pki_usergroupmembership_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_create_object_v1_response_m_payloadJSON, "a_pkiUsergroupmembershipID");
    if (!a_pki_usergroupmembership_id) {
        goto end;
    }

    
    cJSON *a_pki_usergroupmembership_id_local = NULL;
    if(!cJSON_IsArray(a_pki_usergroupmembership_id)) {
        goto end;//primitive container
    }
    a_pki_usergroupmembership_idList = list_createList();

    cJSON_ArrayForEach(a_pki_usergroupmembership_id_local, a_pki_usergroupmembership_id)
    {
        if(!cJSON_IsNumber(a_pki_usergroupmembership_id_local))
        {
            goto end;
        }
        double *a_pki_usergroupmembership_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_usergroupmembership_id_local_value)
        {
            goto end;
        }
        *a_pki_usergroupmembership_id_local_value = a_pki_usergroupmembership_id_local->valuedouble;
        list_addElement(a_pki_usergroupmembership_idList , a_pki_usergroupmembership_id_local_value);
    }


    usergroupmembership_create_object_v1_response_m_payload_local_var = usergroupmembership_create_object_v1_response_m_payload_create (
        a_pki_usergroupmembership_idList
        );

    return usergroupmembership_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_usergroupmembership_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_usergroupmembership_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_usergroupmembership_idList);
        a_pki_usergroupmembership_idList = NULL;
    }
    return NULL;

}
