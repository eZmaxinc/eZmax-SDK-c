#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupdelegation_create_object_v1_response_m_payload.h"



usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload_create(
    list_t *a_pki_usergroupdelegation_id
    ) {
    usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload_local_var = malloc(sizeof(usergroupdelegation_create_object_v1_response_m_payload_t));
    if (!usergroupdelegation_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    usergroupdelegation_create_object_v1_response_m_payload_local_var->a_pki_usergroupdelegation_id = a_pki_usergroupdelegation_id;

    return usergroupdelegation_create_object_v1_response_m_payload_local_var;
}


void usergroupdelegation_create_object_v1_response_m_payload_free(usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload) {
    if(NULL == usergroupdelegation_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id) {
        list_ForEach(listEntry, usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id) {
            free(listEntry->data);
        }
        list_freeList(usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id);
        usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id = NULL;
    }
    free(usergroupdelegation_create_object_v1_response_m_payload);
}

cJSON *usergroupdelegation_create_object_v1_response_m_payload_convertToJSON(usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id
    if (!usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id) {
        goto fail;
    }
    cJSON *a_pki_usergroupdelegation_id = cJSON_AddArrayToObject(item, "a_pkiUsergroupdelegationID");
    if(a_pki_usergroupdelegation_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_usergroupdelegation_idListEntry;
    list_ForEach(a_pki_usergroupdelegation_idListEntry, usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id) {
    if(cJSON_AddNumberToObject(a_pki_usergroupdelegation_id, "", *(double *)a_pki_usergroupdelegation_idListEntry->data) == NULL)
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

usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload_parseFromJSON(cJSON *usergroupdelegation_create_object_v1_response_m_payloadJSON){

    usergroupdelegation_create_object_v1_response_m_payload_t *usergroupdelegation_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id
    list_t *a_pki_usergroupdelegation_idList = NULL;

    // usergroupdelegation_create_object_v1_response_m_payload->a_pki_usergroupdelegation_id
    cJSON *a_pki_usergroupdelegation_id = cJSON_GetObjectItemCaseSensitive(usergroupdelegation_create_object_v1_response_m_payloadJSON, "a_pkiUsergroupdelegationID");
    if (!a_pki_usergroupdelegation_id) {
        goto end;
    }

    
    cJSON *a_pki_usergroupdelegation_id_local = NULL;
    if(!cJSON_IsArray(a_pki_usergroupdelegation_id)) {
        goto end;//primitive container
    }
    a_pki_usergroupdelegation_idList = list_createList();

    cJSON_ArrayForEach(a_pki_usergroupdelegation_id_local, a_pki_usergroupdelegation_id)
    {
        if(!cJSON_IsNumber(a_pki_usergroupdelegation_id_local))
        {
            goto end;
        }
        double *a_pki_usergroupdelegation_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_usergroupdelegation_id_local_value)
        {
            goto end;
        }
        *a_pki_usergroupdelegation_id_local_value = a_pki_usergroupdelegation_id_local->valuedouble;
        list_addElement(a_pki_usergroupdelegation_idList , a_pki_usergroupdelegation_id_local_value);
    }


    usergroupdelegation_create_object_v1_response_m_payload_local_var = usergroupdelegation_create_object_v1_response_m_payload_create (
        a_pki_usergroupdelegation_idList
        );

    return usergroupdelegation_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_usergroupdelegation_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_usergroupdelegation_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_usergroupdelegation_idList);
        a_pki_usergroupdelegation_idList = NULL;
    }
    return NULL;

}
