#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_create_object_v1_response_m_payload.h"



ezsignfolder_create_object_v1_response_m_payload_t *ezsignfolder_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignfolder_id
    ) {
    ezsignfolder_create_object_v1_response_m_payload_t *ezsignfolder_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_create_object_v1_response_m_payload_t));
    if (!ezsignfolder_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_create_object_v1_response_m_payload_local_var->a_pki_ezsignfolder_id = a_pki_ezsignfolder_id;

    return ezsignfolder_create_object_v1_response_m_payload_local_var;
}


void ezsignfolder_create_object_v1_response_m_payload_free(ezsignfolder_create_object_v1_response_m_payload_t *ezsignfolder_create_object_v1_response_m_payload) {
    if(NULL == ezsignfolder_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id) {
        list_ForEach(listEntry, ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id);
        ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id = NULL;
    }
    free(ezsignfolder_create_object_v1_response_m_payload);
}

cJSON *ezsignfolder_create_object_v1_response_m_payload_convertToJSON(ezsignfolder_create_object_v1_response_m_payload_t *ezsignfolder_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id
    if (!ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignfolder_id = cJSON_AddArrayToObject(item, "a_pkiEzsignfolderID");
    if(a_pki_ezsignfolder_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignfolder_idListEntry;
    list_ForEach(a_pki_ezsignfolder_idListEntry, ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignfolder_id, "", *(double *)a_pki_ezsignfolder_idListEntry->data) == NULL)
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

ezsignfolder_create_object_v1_response_m_payload_t *ezsignfolder_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_create_object_v1_response_m_payloadJSON){

    ezsignfolder_create_object_v1_response_m_payload_t *ezsignfolder_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id
    list_t *a_pki_ezsignfolder_idList = NULL;

    // ezsignfolder_create_object_v1_response_m_payload->a_pki_ezsignfolder_id
    cJSON *a_pki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfolder_create_object_v1_response_m_payloadJSON, "a_pkiEzsignfolderID");
    if (!a_pki_ezsignfolder_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignfolder_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignfolder_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignfolder_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignfolder_id_local, a_pki_ezsignfolder_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignfolder_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignfolder_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignfolder_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignfolder_id_local_value = a_pki_ezsignfolder_id_local->valuedouble;
        list_addElement(a_pki_ezsignfolder_idList , a_pki_ezsignfolder_id_local_value);
    }


    ezsignfolder_create_object_v1_response_m_payload_local_var = ezsignfolder_create_object_v1_response_m_payload_create (
        a_pki_ezsignfolder_idList
        );

    return ezsignfolder_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignfolder_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignfolder_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignfolder_idList);
        a_pki_ezsignfolder_idList = NULL;
    }
    return NULL;

}
