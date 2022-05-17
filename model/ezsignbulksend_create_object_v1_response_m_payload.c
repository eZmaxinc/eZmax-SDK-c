#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_create_object_v1_response_m_payload.h"



ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignbulksend_id
    ) {
    ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksend_create_object_v1_response_m_payload_t));
    if (!ezsignbulksend_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksend_create_object_v1_response_m_payload_local_var->a_pki_ezsignbulksend_id = a_pki_ezsignbulksend_id;

    return ezsignbulksend_create_object_v1_response_m_payload_local_var;
}


void ezsignbulksend_create_object_v1_response_m_payload_free(ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload) {
    if(NULL == ezsignbulksend_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id) {
        list_ForEach(listEntry, ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id);
        ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id = NULL;
    }
    free(ezsignbulksend_create_object_v1_response_m_payload);
}

cJSON *ezsignbulksend_create_object_v1_response_m_payload_convertToJSON(ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id
    if (!ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignbulksend_id = cJSON_AddArrayToObject(item, "a_pkiEzsignbulksendID");
    if(a_pki_ezsignbulksend_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignbulksend_idListEntry;
    list_ForEach(a_pki_ezsignbulksend_idListEntry, ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignbulksend_id, "", *(double *)a_pki_ezsignbulksend_idListEntry->data) == NULL)
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

ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksend_create_object_v1_response_m_payloadJSON){

    ezsignbulksend_create_object_v1_response_m_payload_t *ezsignbulksend_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id
    list_t *a_pki_ezsignbulksend_idList = NULL;

    // ezsignbulksend_create_object_v1_response_m_payload->a_pki_ezsignbulksend_id
    cJSON *a_pki_ezsignbulksend_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_create_object_v1_response_m_payloadJSON, "a_pkiEzsignbulksendID");
    if (!a_pki_ezsignbulksend_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignbulksend_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignbulksend_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignbulksend_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignbulksend_id_local, a_pki_ezsignbulksend_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignbulksend_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignbulksend_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignbulksend_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignbulksend_id_local_value = a_pki_ezsignbulksend_id_local->valuedouble;
        list_addElement(a_pki_ezsignbulksend_idList , a_pki_ezsignbulksend_id_local_value);
    }


    ezsignbulksend_create_object_v1_response_m_payload_local_var = ezsignbulksend_create_object_v1_response_m_payload_create (
        a_pki_ezsignbulksend_idList
        );

    return ezsignbulksend_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignbulksend_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignbulksend_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignbulksend_idList);
        a_pki_ezsignbulksend_idList = NULL;
    }
    return NULL;

}
