#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_create_object_v1_response_m_payload.h"



ezsignfoldertype_create_object_v1_response_m_payload_t *ezsignfoldertype_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignfoldertype_id
    ) {
    ezsignfoldertype_create_object_v1_response_m_payload_t *ezsignfoldertype_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignfoldertype_create_object_v1_response_m_payload_t));
    if (!ezsignfoldertype_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfoldertype_create_object_v1_response_m_payload_local_var->a_pki_ezsignfoldertype_id = a_pki_ezsignfoldertype_id;

    return ezsignfoldertype_create_object_v1_response_m_payload_local_var;
}


void ezsignfoldertype_create_object_v1_response_m_payload_free(ezsignfoldertype_create_object_v1_response_m_payload_t *ezsignfoldertype_create_object_v1_response_m_payload) {
    if(NULL == ezsignfoldertype_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id) {
        list_ForEach(listEntry, ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id);
        ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id = NULL;
    }
    free(ezsignfoldertype_create_object_v1_response_m_payload);
}

cJSON *ezsignfoldertype_create_object_v1_response_m_payload_convertToJSON(ezsignfoldertype_create_object_v1_response_m_payload_t *ezsignfoldertype_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id
    if (!ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignfoldertype_id = cJSON_AddArrayToObject(item, "a_pkiEzsignfoldertypeID");
    if(a_pki_ezsignfoldertype_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignfoldertype_idListEntry;
    list_ForEach(a_pki_ezsignfoldertype_idListEntry, ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignfoldertype_id, "", *(double *)a_pki_ezsignfoldertype_idListEntry->data) == NULL)
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

ezsignfoldertype_create_object_v1_response_m_payload_t *ezsignfoldertype_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignfoldertype_create_object_v1_response_m_payloadJSON){

    ezsignfoldertype_create_object_v1_response_m_payload_t *ezsignfoldertype_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id
    list_t *a_pki_ezsignfoldertype_idList = NULL;

    // ezsignfoldertype_create_object_v1_response_m_payload->a_pki_ezsignfoldertype_id
    cJSON *a_pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_create_object_v1_response_m_payloadJSON, "a_pkiEzsignfoldertypeID");
    if (!a_pki_ezsignfoldertype_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignfoldertype_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignfoldertype_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignfoldertype_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignfoldertype_id_local, a_pki_ezsignfoldertype_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignfoldertype_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignfoldertype_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignfoldertype_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignfoldertype_id_local_value = a_pki_ezsignfoldertype_id_local->valuedouble;
        list_addElement(a_pki_ezsignfoldertype_idList , a_pki_ezsignfoldertype_id_local_value);
    }


    ezsignfoldertype_create_object_v1_response_m_payload_local_var = ezsignfoldertype_create_object_v1_response_m_payload_create (
        a_pki_ezsignfoldertype_idList
        );

    return ezsignfoldertype_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignfoldertype_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignfoldertype_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignfoldertype_idList);
        a_pki_ezsignfoldertype_idList = NULL;
    }
    return NULL;

}
