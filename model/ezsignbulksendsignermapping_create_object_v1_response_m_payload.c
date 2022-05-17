#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_create_object_v1_response_m_payload.h"



ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignbulksendsignermapping_id
    ) {
    ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksendsignermapping_create_object_v1_response_m_payload_t));
    if (!ezsignbulksendsignermapping_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_create_object_v1_response_m_payload_local_var->a_pki_ezsignbulksendsignermapping_id = a_pki_ezsignbulksendsignermapping_id;

    return ezsignbulksendsignermapping_create_object_v1_response_m_payload_local_var;
}


void ezsignbulksendsignermapping_create_object_v1_response_m_payload_free(ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload) {
    if(NULL == ezsignbulksendsignermapping_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id) {
        list_ForEach(listEntry, ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id);
        ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id = NULL;
    }
    free(ezsignbulksendsignermapping_create_object_v1_response_m_payload);
}

cJSON *ezsignbulksendsignermapping_create_object_v1_response_m_payload_convertToJSON(ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id
    if (!ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignbulksendsignermapping_id = cJSON_AddArrayToObject(item, "a_pkiEzsignbulksendsignermappingID");
    if(a_pki_ezsignbulksendsignermapping_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignbulksendsignermapping_idListEntry;
    list_ForEach(a_pki_ezsignbulksendsignermapping_idListEntry, ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignbulksendsignermapping_id, "", *(double *)a_pki_ezsignbulksendsignermapping_idListEntry->data) == NULL)
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

ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksendsignermapping_create_object_v1_response_m_payloadJSON){

    ezsignbulksendsignermapping_create_object_v1_response_m_payload_t *ezsignbulksendsignermapping_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id
    list_t *a_pki_ezsignbulksendsignermapping_idList = NULL;

    // ezsignbulksendsignermapping_create_object_v1_response_m_payload->a_pki_ezsignbulksendsignermapping_id
    cJSON *a_pki_ezsignbulksendsignermapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_create_object_v1_response_m_payloadJSON, "a_pkiEzsignbulksendsignermappingID");
    if (!a_pki_ezsignbulksendsignermapping_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignbulksendsignermapping_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignbulksendsignermapping_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignbulksendsignermapping_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignbulksendsignermapping_id_local, a_pki_ezsignbulksendsignermapping_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignbulksendsignermapping_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignbulksendsignermapping_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignbulksendsignermapping_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignbulksendsignermapping_id_local_value = a_pki_ezsignbulksendsignermapping_id_local->valuedouble;
        list_addElement(a_pki_ezsignbulksendsignermapping_idList , a_pki_ezsignbulksendsignermapping_id_local_value);
    }


    ezsignbulksendsignermapping_create_object_v1_response_m_payload_local_var = ezsignbulksendsignermapping_create_object_v1_response_m_payload_create (
        a_pki_ezsignbulksendsignermapping_idList
        );

    return ezsignbulksendsignermapping_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignbulksendsignermapping_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignbulksendsignermapping_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignbulksendsignermapping_idList);
        a_pki_ezsignbulksendsignermapping_idList = NULL;
    }
    return NULL;

}
