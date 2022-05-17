#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_create_object_v1_response_m_payload.h"



ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsignbulksenddocumentmapping_id
    ) {
    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t));
    if (!ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_local_var->a_pki_ezsignbulksenddocumentmapping_id = a_pki_ezsignbulksenddocumentmapping_id;

    return ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_local_var;
}


void ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_free(ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_create_object_v1_response_m_payload) {
    if(NULL == ezsignbulksenddocumentmapping_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id) {
        list_ForEach(listEntry, ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id) {
            free(listEntry->data);
        }
        list_freeList(ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id);
        ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id = NULL;
    }
    free(ezsignbulksenddocumentmapping_create_object_v1_response_m_payload);
}

cJSON *ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id
    if (!ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id) {
        goto fail;
    }
    cJSON *a_pki_ezsignbulksenddocumentmapping_id = cJSON_AddArrayToObject(item, "a_pkiEzsignbulksenddocumentmappingID");
    if(a_pki_ezsignbulksenddocumentmapping_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsignbulksenddocumentmapping_idListEntry;
    list_ForEach(a_pki_ezsignbulksenddocumentmapping_idListEntry, ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsignbulksenddocumentmapping_id, "", *(double *)a_pki_ezsignbulksenddocumentmapping_idListEntry->data) == NULL)
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

ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_create_object_v1_response_m_payloadJSON){

    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id
    list_t *a_pki_ezsignbulksenddocumentmapping_idList = NULL;

    // ezsignbulksenddocumentmapping_create_object_v1_response_m_payload->a_pki_ezsignbulksenddocumentmapping_id
    cJSON *a_pki_ezsignbulksenddocumentmapping_id = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_create_object_v1_response_m_payloadJSON, "a_pkiEzsignbulksenddocumentmappingID");
    if (!a_pki_ezsignbulksenddocumentmapping_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsignbulksenddocumentmapping_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsignbulksenddocumentmapping_id)) {
        goto end;//primitive container
    }
    a_pki_ezsignbulksenddocumentmapping_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsignbulksenddocumentmapping_id_local, a_pki_ezsignbulksenddocumentmapping_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsignbulksenddocumentmapping_id_local))
        {
            goto end;
        }
        double *a_pki_ezsignbulksenddocumentmapping_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsignbulksenddocumentmapping_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsignbulksenddocumentmapping_id_local_value = a_pki_ezsignbulksenddocumentmapping_id_local->valuedouble;
        list_addElement(a_pki_ezsignbulksenddocumentmapping_idList , a_pki_ezsignbulksenddocumentmapping_id_local_value);
    }


    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_local_var = ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_create (
        a_pki_ezsignbulksenddocumentmapping_idList
        );

    return ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsignbulksenddocumentmapping_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsignbulksenddocumentmapping_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsignbulksenddocumentmapping_idList);
        a_pki_ezsignbulksenddocumentmapping_idList = NULL;
    }
    return NULL;

}
