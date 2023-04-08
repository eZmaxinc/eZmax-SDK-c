#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_create_object_v1_response_m_payload.h"



billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload_create(
    list_t *a_pki_billingentityinternal_id
    ) {
    billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload_local_var = malloc(sizeof(billingentityinternal_create_object_v1_response_m_payload_t));
    if (!billingentityinternal_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    billingentityinternal_create_object_v1_response_m_payload_local_var->a_pki_billingentityinternal_id = a_pki_billingentityinternal_id;

    return billingentityinternal_create_object_v1_response_m_payload_local_var;
}


void billingentityinternal_create_object_v1_response_m_payload_free(billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload) {
    if(NULL == billingentityinternal_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id) {
        list_ForEach(listEntry, billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id) {
            free(listEntry->data);
        }
        list_freeList(billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id);
        billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id = NULL;
    }
    free(billingentityinternal_create_object_v1_response_m_payload);
}

cJSON *billingentityinternal_create_object_v1_response_m_payload_convertToJSON(billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id
    if (!billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id) {
        goto fail;
    }
    cJSON *a_pki_billingentityinternal_id = cJSON_AddArrayToObject(item, "a_pkiBillingentityinternalID");
    if(a_pki_billingentityinternal_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_billingentityinternal_idListEntry;
    list_ForEach(a_pki_billingentityinternal_idListEntry, billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id) {
    if(cJSON_AddNumberToObject(a_pki_billingentityinternal_id, "", *(double *)a_pki_billingentityinternal_idListEntry->data) == NULL)
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

billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload_parseFromJSON(cJSON *billingentityinternal_create_object_v1_response_m_payloadJSON){

    billingentityinternal_create_object_v1_response_m_payload_t *billingentityinternal_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id
    list_t *a_pki_billingentityinternal_idList = NULL;

    // billingentityinternal_create_object_v1_response_m_payload->a_pki_billingentityinternal_id
    cJSON *a_pki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(billingentityinternal_create_object_v1_response_m_payloadJSON, "a_pkiBillingentityinternalID");
    if (!a_pki_billingentityinternal_id) {
        goto end;
    }

    
    cJSON *a_pki_billingentityinternal_id_local = NULL;
    if(!cJSON_IsArray(a_pki_billingentityinternal_id)) {
        goto end;//primitive container
    }
    a_pki_billingentityinternal_idList = list_createList();

    cJSON_ArrayForEach(a_pki_billingentityinternal_id_local, a_pki_billingentityinternal_id)
    {
        if(!cJSON_IsNumber(a_pki_billingentityinternal_id_local))
        {
            goto end;
        }
        double *a_pki_billingentityinternal_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_billingentityinternal_id_local_value)
        {
            goto end;
        }
        *a_pki_billingentityinternal_id_local_value = a_pki_billingentityinternal_id_local->valuedouble;
        list_addElement(a_pki_billingentityinternal_idList , a_pki_billingentityinternal_id_local_value);
    }


    billingentityinternal_create_object_v1_response_m_payload_local_var = billingentityinternal_create_object_v1_response_m_payload_create (
        a_pki_billingentityinternal_idList
        );

    return billingentityinternal_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_billingentityinternal_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_billingentityinternal_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_billingentityinternal_idList);
        a_pki_billingentityinternal_idList = NULL;
    }
    return NULL;

}
