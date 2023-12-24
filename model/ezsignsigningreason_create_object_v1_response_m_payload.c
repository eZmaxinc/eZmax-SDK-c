#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_create_object_v1_response_m_payload.h"



ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignsigningreason_id
    ) {
    ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignsigningreason_create_object_v1_response_m_payload_t));
    if (!ezsignsigningreason_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignsigningreason_create_object_v1_response_m_payload_local_var->a_pki_ezsignsigningreason_id = a_pki_ezsignsigningreason_id;

    return ezsignsigningreason_create_object_v1_response_m_payload_local_var;
}


void ezsignsigningreason_create_object_v1_response_m_payload_free(ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload) {
    if(NULL == ezsignsigningreason_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id) {
        list_ForEach(listEntry, ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id);
        ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id = NULL;
    }
    free(ezsignsigningreason_create_object_v1_response_m_payload);
}

cJSON *ezsignsigningreason_create_object_v1_response_m_payload_convertToJSON(ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id
    if (!ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignsigningreason_id = cJSON_AddArrayToObject(item, "a_pkiEzsignsigningreasonID");
    if(a_pki_ezsignsigningreason_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignsigningreason_idListEntry;
    list_ForEach(a_pki_ezsignsigningreason_idListEntry, ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignsigningreason_id, "", *(double *)a_pki_ezsignsigningreason_idListEntry->data) == NULL)
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

ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignsigningreason_create_object_v1_response_m_payloadJSON){

    ezsignsigningreason_create_object_v1_response_m_payload_t *ezsignsigningreason_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id
    list_t *a_pki_ezsignsigningreason_idList = NULL;

    // ezsignsigningreason_create_object_v1_response_m_payload->a_pki_ezsignsigningreason_id
    cJSON *a_pki_ezsignsigningreason_id = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_create_object_v1_response_m_payloadJSON, "a_pkiEzsignsigningreasonID");
    if (!a_pki_ezsignsigningreason_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignsigningreason_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignsigningreason_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignsigningreason_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignsigningreason_id_local, a_pki_ezsignsigningreason_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignsigningreason_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignsigningreason_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignsigningreason_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignsigningreason_id_local_value = a_pki_ezsignsigningreason_id_local->valuedouble;
        list_addElement(a_pki_ezsignsigningreason_idList , a_pki_ezsignsigningreason_id_local_value);
    }


    ezsignsigningreason_create_object_v1_response_m_payload_local_var = ezsignsigningreason_create_object_v1_response_m_payload_create (
        a_pki_ezsignsigningreason_idList
        );

    return ezsignsigningreason_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignsigningreason_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignsigningreason_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignsigningreason_idList);
        a_pki_ezsignsigningreason_idList = NULL;
    }
    return NULL;

}
