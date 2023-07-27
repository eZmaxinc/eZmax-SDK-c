#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_create_object_v1_response_m_payload.h"



ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignsignergroup_id
    ) {
    ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignsignergroup_create_object_v1_response_m_payload_t));
    if (!ezsignsignergroup_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignergroup_create_object_v1_response_m_payload_local_var->a_pki_ezsignsignergroup_id = a_pki_ezsignsignergroup_id;

    return ezsignsignergroup_create_object_v1_response_m_payload_local_var;
}


void ezsignsignergroup_create_object_v1_response_m_payload_free(ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload) {
    if(NULL == ezsignsignergroup_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id) {
        list_ForEach(listEntry, ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id);
        ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id = NULL;
    }
    free(ezsignsignergroup_create_object_v1_response_m_payload);
}

cJSON *ezsignsignergroup_create_object_v1_response_m_payload_convertToJSON(ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id
    if (!ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignsignergroup_id = cJSON_AddArrayToObject(item, "a_pkiEzsignsignergroupID");
    if(a_pki_ezsignsignergroup_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignsignergroup_idListEntry;
    list_ForEach(a_pki_ezsignsignergroup_idListEntry, ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignsignergroup_id, "", *(double *)a_pki_ezsignsignergroup_idListEntry->data) == NULL)
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

ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignergroup_create_object_v1_response_m_payloadJSON){

    ezsignsignergroup_create_object_v1_response_m_payload_t *ezsignsignergroup_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id
    list_t *a_pki_ezsignsignergroup_idList = NULL;

    // ezsignsignergroup_create_object_v1_response_m_payload->a_pki_ezsignsignergroup_id
    cJSON *a_pki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_create_object_v1_response_m_payloadJSON, "a_pkiEzsignsignergroupID");
    if (!a_pki_ezsignsignergroup_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignsignergroup_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignsignergroup_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignsignergroup_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignsignergroup_id_local, a_pki_ezsignsignergroup_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignsignergroup_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignsignergroup_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignsignergroup_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignsignergroup_id_local_value = a_pki_ezsignsignergroup_id_local->valuedouble;
        list_addElement(a_pki_ezsignsignergroup_idList , a_pki_ezsignsignergroup_id_local_value);
    }


    ezsignsignergroup_create_object_v1_response_m_payload_local_var = ezsignsignergroup_create_object_v1_response_m_payload_create (
        a_pki_ezsignsignergroup_idList
        );

    return ezsignsignergroup_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignsignergroup_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignsignergroup_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignsignergroup_idList);
        a_pki_ezsignsignergroup_idList = NULL;
    }
    return NULL;

}
