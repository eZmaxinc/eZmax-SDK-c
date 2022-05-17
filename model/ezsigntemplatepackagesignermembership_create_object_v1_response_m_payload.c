#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload.h"



ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_create(
    list_t *a_pki_ezsigntemplatepackagesignermembership_id
    ) {
    ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t));
    if (!ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_local_var->a_pki_ezsigntemplatepackagesignermembership_id = a_pki_ezsigntemplatepackagesignermembership_id;

    return ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_local_var;
}


void ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_free(ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload) {
    if(NULL == ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id) {
        list_ForEach(listEntry, ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id) {
            free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id);
        ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id = NULL;
    }
    free(ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload);
}

cJSON *ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id
    if (!ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id) {
        goto fail;
    }
    cJSON *a_pki_ezsigntemplatepackagesignermembership_id = cJSON_AddArrayToObject(item, "a_pkiEzsigntemplatepackagesignermembershipID");
    if(a_pki_ezsigntemplatepackagesignermembership_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_ezsigntemplatepackagesignermembership_idListEntry;
    list_ForEach(a_pki_ezsigntemplatepackagesignermembership_idListEntry, ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id) {
    if(cJSON_AddNumberToObject(a_pki_ezsigntemplatepackagesignermembership_id, "", *(double *)a_pki_ezsigntemplatepackagesignermembership_idListEntry->data) == NULL)
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

ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_create_object_v1_response_m_payloadJSON){

    ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id
    list_t *a_pki_ezsigntemplatepackagesignermembership_idList = NULL;

    // ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload->a_pki_ezsigntemplatepackagesignermembership_id
    cJSON *a_pki_ezsigntemplatepackagesignermembership_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_create_object_v1_response_m_payloadJSON, "a_pkiEzsigntemplatepackagesignermembershipID");
    if (!a_pki_ezsigntemplatepackagesignermembership_id) {
        goto end;
    }

    
    cJSON *a_pki_ezsigntemplatepackagesignermembership_id_local = NULL;
    if(!cJSON_IsArray(a_pki_ezsigntemplatepackagesignermembership_id)) {
        goto end;//primitive container
    }
    a_pki_ezsigntemplatepackagesignermembership_idList = list_createList();

    cJSON_ArrayForEach(a_pki_ezsigntemplatepackagesignermembership_id_local, a_pki_ezsigntemplatepackagesignermembership_id)
    {
        if(!cJSON_IsNumber(a_pki_ezsigntemplatepackagesignermembership_id_local))
        {
            goto end;
        }
        double *a_pki_ezsigntemplatepackagesignermembership_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_ezsigntemplatepackagesignermembership_id_local_value)
        {
            goto end;
        }
        *a_pki_ezsigntemplatepackagesignermembership_id_local_value = a_pki_ezsigntemplatepackagesignermembership_id_local->valuedouble;
        list_addElement(a_pki_ezsigntemplatepackagesignermembership_idList , a_pki_ezsigntemplatepackagesignermembership_id_local_value);
    }


    ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_local_var = ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_create (
        a_pki_ezsigntemplatepackagesignermembership_idList
        );

    return ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_ezsigntemplatepackagesignermembership_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_ezsigntemplatepackagesignermembership_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_ezsigntemplatepackagesignermembership_idList);
        a_pki_ezsigntemplatepackagesignermembership_idList = NULL;
    }
    return NULL;

}
