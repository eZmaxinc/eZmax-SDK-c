#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_create_object_v1_response_m_payload.h"



static ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_ezsignsignergroupmembership_id
    ) {
    ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignsignergroupmembership_create_object_v1_response_m_payload_t));
    if (!ezsignsignergroupmembership_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsignergroupmembership_create_object_v1_response_m_payload_local_var->a_pki_ezsignsignergroupmembership_id = a_pki_ezsignsignergroupmembership_id;

    ezsignsignergroupmembership_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignsignergroupmembership_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignsignergroupmembership_id
    ) {
    return ezsignsignergroupmembership_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsignsignergroupmembership_id
        );
}

void ezsignsignergroupmembership_create_object_v1_response_m_payload_free(ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload) {
    if(NULL == ezsignsignergroupmembership_create_object_v1_response_m_payload){
        return ;
    }
    if(ezsignsignergroupmembership_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroupmembership_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id) {
        list_ForEach(listEntry, ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id);
        ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id = NULL;
    }
    free(ezsignsignergroupmembership_create_object_v1_response_m_payload);
}

cJSON *ezsignsignergroupmembership_create_object_v1_response_m_payload_convertToJSON(ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id
    if (!ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignsignergroupmembership_id = cJSON_AddArrayToObject(item, "a_pkiEzsignsignergroupmembershipID");
    if(a_pki_ezsignsignergroupmembership_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignsignergroupmembership_idListEntry;
    list_ForEach(a_pki_ezsignsignergroupmembership_idListEntry, ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id) {
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

ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignsignergroupmembership_create_object_v1_response_m_payloadJSON){

    ezsignsignergroupmembership_create_object_v1_response_m_payload_t *ezsignsignergroupmembership_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id
    list_t *a_pki_ezsignsignergroupmembership_idList = NULL;

    // ezsignsignergroupmembership_create_object_v1_response_m_payload->a_pki_ezsignsignergroupmembership_id
    cJSON *a_pki_ezsignsignergroupmembership_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_create_object_v1_response_m_payloadJSON, "a_pkiEzsignsignergroupmembershipID");
    if (cJSON_IsNull(a_pki_ezsignsignergroupmembership_id)) {
        a_pki_ezsignsignergroupmembership_id = NULL;
    }
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
        double *a_pki_ezsignsignergroupmembership_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_ezsignsignergroupmembership_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignsignergroupmembership_id_local_value = a_pki_ezsignsignergroupmembership_id_local->valuedouble;
        list_addElement(a_pki_ezsignsignergroupmembership_idList , a_pki_ezsignsignergroupmembership_id_local_value);
    }


    ezsignsignergroupmembership_create_object_v1_response_m_payload_local_var = ezsignsignergroupmembership_create_object_v1_response_m_payload_create_internal (
        a_pki_ezsignsignergroupmembership_idList
        );

    return ezsignsignergroupmembership_create_object_v1_response_m_payload_local_var;
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
