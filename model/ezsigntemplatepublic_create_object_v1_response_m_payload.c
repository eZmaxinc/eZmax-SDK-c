#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_create_object_v1_response_m_payload.h"



ezsigntemplatepublic_create_object_v1_response_m_payload_t *ezsigntemplatepublic_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatepublic_id
    ) {
    ezsigntemplatepublic_create_object_v1_response_m_payload_t *ezsigntemplatepublic_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_create_object_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplatepublic_id = a_pki_ezsigntemplatepublic_id;

    return ezsigntemplatepublic_create_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepublic_create_object_v1_response_m_payload_free(ezsigntemplatepublic_create_object_v1_response_m_payload_t *ezsigntemplatepublic_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id) {
        list_ForEach(listEntry, ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id);
        ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id = NULL;
    }
    free(ezsigntemplatepublic_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepublic_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_create_object_v1_response_m_payload_t *ezsigntemplatepublic_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id
    if (!ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatepublic_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatepublicID");
    if(a_pki_ezsigntemplatepublic_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatepublic_idListEntry;
    list_ForEach(a_pki_ezsigntemplatepublic_idListEntry, ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatepublic_id, "", *(double *)a_pki_ezsigntemplatepublic_idListEntry->data) == NULL)
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

ezsigntemplatepublic_create_object_v1_response_m_payload_t *ezsigntemplatepublic_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_create_object_v1_response_m_payloadJSON){

    ezsigntemplatepublic_create_object_v1_response_m_payload_t *ezsigntemplatepublic_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id
    list_t *a_pki_ezsigntemplatepublic_idList = NULL;

    // ezsigntemplatepublic_create_object_v1_response_m_payload->a_pki_ezsigntemplatepublic_id
    cJSON *a_pki_ezsigntemplatepublic_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplatepublicID");
    if (!a_pki_ezsigntemplatepublic_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatepublic_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatepublic_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatepublic_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatepublic_id_local, a_pki_ezsigntemplatepublic_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatepublic_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatepublic_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatepublic_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatepublic_id_local_value = a_pki_ezsigntemplatepublic_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatepublic_idList , a_pki_ezsigntemplatepublic_id_local_value);
    }


    ezsigntemplatepublic_create_object_v1_response_m_payload_local_var = ezsigntemplatepublic_create_object_v1_response_m_payload_create (
        a_pki_ezsigntemplatepublic_idList
        );

    return ezsigntemplatepublic_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatepublic_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatepublic_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatepublic_idList);
        a_pki_ezsigntemplatepublic_idList = NULL;
    }
    return NULL;

}
