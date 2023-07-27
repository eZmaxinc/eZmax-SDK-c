#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload.h"



ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_create(
    list_t *a_pki_ezsignsignergroupmembership_id
    ) {
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_local_var = malloc(sizeof(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t));
    if (!ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_local_var->a_pki_ezsignsignergroupmembership_id = a_pki_ezsignsignergroupmembership_id;

    return ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_local_var;
}


void ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_free(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload) {
    if(NULL == ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id) {
        list_ForEach(listEntry, ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id);
        ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id = NULL;
    }
    free(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload);
}

cJSON *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_convertToJSON(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id
    if (!ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignsignergroupmembership_id = cJSON_AddArrayToObject(item, "a_pkiEzsignsignergroupmembershipID");
    if(a_pki_ezsignsignergroupmembership_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignsignergroupmembership_idListEntry;
    list_ForEach(a_pki_ezsignsignergroupmembership_idListEntry, ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignsignergroupmembership_id, "", *(double *)a_pki_ezsignsignergroupmembership_idListEntry->data) == NULL)
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

ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payloadJSON){

    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id
    list_t *a_pki_ezsignsignergroupmembership_idList = NULL;

    // ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id
    cJSON *a_pki_ezsignsignergroupmembership_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payloadJSON, "a_pkiEzsignsignergroupmembershipID");
    if (!a_pki_ezsignsignergroupmembership_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignsignergroupmembership_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignsignergroupmembership_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignsignergroupmembership_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignsignergroupmembership_id_local, a_pki_ezsignsignergroupmembership_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignsignergroupmembership_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignsignergroupmembership_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignsignergroupmembership_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignsignergroupmembership_id_local_value = a_pki_ezsignsignergroupmembership_id_local->valuedouble;
        list_addElement(a_pki_ezsignsignergroupmembership_idList , a_pki_ezsignsignergroupmembership_id_local_value);
    }


    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_local_var = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_create (
        a_pki_ezsignsignergroupmembership_idList
        );

    return ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignsignergroupmembership_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignsignergroupmembership_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignsignergroupmembership_idList);
        a_pki_ezsignsignergroupmembership_idList = NULL;
    }
    return NULL;

}
