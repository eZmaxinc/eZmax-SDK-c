#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_create_object_v1_response_m_payload.h"



supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload_create(
    list_t *a_pki_supply_id
    ) {
    supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload_local_var = malloc(sizeof(supply_create_object_v1_response_m_payload_t));
    if (!supply_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    supply_create_object_v1_response_m_payload_local_var->a_pki_supply_id = a_pki_supply_id;

    return supply_create_object_v1_response_m_payload_local_var;
}


void supply_create_object_v1_response_m_payload_free(supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload) {
    if(NULL == supply_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (supply_create_object_v1_response_m_payload->a_pki_supply_id) {
        list_ForEach(listEntry, supply_create_object_v1_response_m_payload->a_pki_supply_id) {
            free(listEntry->data);
        }
        list_freeList(supply_create_object_v1_response_m_payload->a_pki_supply_id);
        supply_create_object_v1_response_m_payload->a_pki_supply_id = NULL;
    }
    free(supply_create_object_v1_response_m_payload);
}

cJSON *supply_create_object_v1_response_m_payload_convertToJSON(supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // supply_create_object_v1_response_m_payload->a_pki_supply_id
    if (!supply_create_object_v1_response_m_payload->a_pki_supply_id) {
        goto fail;
    }
    cJSON *a_pki_supply_id = cJSON_AddArrayToObject(item, "a_pkiSupplyID");
    if(a_pki_supply_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_supply_idListEntry;
    list_ForEach(a_pki_supply_idListEntry, supply_create_object_v1_response_m_payload->a_pki_supply_id) {
    if(cJSON_AddNumberToObject(a_pki_supply_id, "", *(double *)a_pki_supply_idListEntry->data) == NULL)
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

supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload_parseFromJSON(cJSON *supply_create_object_v1_response_m_payloadJSON){

    supply_create_object_v1_response_m_payload_t *supply_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for supply_create_object_v1_response_m_payload->a_pki_supply_id
    list_t *a_pki_supply_idList = NULL;

    // supply_create_object_v1_response_m_payload->a_pki_supply_id
    cJSON *a_pki_supply_id = cJSON_GetObjectItemCaseSensitive(supply_create_object_v1_response_m_payloadJSON, "a_pkiSupplyID");
    if (!a_pki_supply_id) {
        goto end;
    }

    
    cJSON *a_pki_supply_id_local = NULL;
    if(!cJSON_IsArray(a_pki_supply_id)) {
        goto end;//primitive container
    }
    a_pki_supply_idList = list_createList();

    cJSON_ArrayForEach(a_pki_supply_id_local, a_pki_supply_id)
    {
        if(!cJSON_IsNumber(a_pki_supply_id_local))
        {
            goto end;
        }
        double *a_pki_supply_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_supply_id_local_value)
        {
            goto end;
        }
        *a_pki_supply_id_local_value = a_pki_supply_id_local->valuedouble;
        list_addElement(a_pki_supply_idList , a_pki_supply_id_local_value);
    }


    supply_create_object_v1_response_m_payload_local_var = supply_create_object_v1_response_m_payload_create (
        a_pki_supply_idList
        );

    return supply_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_supply_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_supply_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_supply_idList);
        a_pki_supply_idList = NULL;
    }
    return NULL;

}
