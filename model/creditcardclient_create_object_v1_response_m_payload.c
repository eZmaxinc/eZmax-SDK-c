#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardclient_create_object_v1_response_m_payload.h"



creditcardclient_create_object_v1_response_m_payload_t *creditcardclient_create_object_v1_response_m_payload_create(
    list_t *a_pki_creditcardclient_id
    ) {
    creditcardclient_create_object_v1_response_m_payload_t *creditcardclient_create_object_v1_response_m_payload_local_var = malloc(sizeof(creditcardclient_create_object_v1_response_m_payload_t));
    if (!creditcardclient_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    creditcardclient_create_object_v1_response_m_payload_local_var->a_pki_creditcardclient_id = a_pki_creditcardclient_id;

    return creditcardclient_create_object_v1_response_m_payload_local_var;
}


void creditcardclient_create_object_v1_response_m_payload_free(creditcardclient_create_object_v1_response_m_payload_t *creditcardclient_create_object_v1_response_m_payload) {
    if(NULL == creditcardclient_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id) {
        list_ForEach(listEntry, creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id) {
            free(listEntry->data);
        }
        list_freeList(creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id);
        creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id = NULL;
    }
    free(creditcardclient_create_object_v1_response_m_payload);
}

cJSON *creditcardclient_create_object_v1_response_m_payload_convertToJSON(creditcardclient_create_object_v1_response_m_payload_t *creditcardclient_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id
    if (!creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id) {
        goto fail;
    }
    cJSON *a_pki_creditcardclient_id = cJSON_AddArrayToObject(item, "a_pkiCreditcardclientID");
    if(a_pki_creditcardclient_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_creditcardclient_idListEntry;
    list_ForEach(a_pki_creditcardclient_idListEntry, creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id) {
    if(cJSON_AddNumberToObject(a_pki_creditcardclient_id, "", *(double *)a_pki_creditcardclient_idListEntry->data) == NULL)
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

creditcardclient_create_object_v1_response_m_payload_t *creditcardclient_create_object_v1_response_m_payload_parseFromJSON(cJSON *creditcardclient_create_object_v1_response_m_payloadJSON){

    creditcardclient_create_object_v1_response_m_payload_t *creditcardclient_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id
    list_t *a_pki_creditcardclient_idList = NULL;

    // creditcardclient_create_object_v1_response_m_payload->a_pki_creditcardclient_id
    cJSON *a_pki_creditcardclient_id = cJSON_GetObjectItemCaseSensitive(creditcardclient_create_object_v1_response_m_payloadJSON, "a_pkiCreditcardclientID");
    if (!a_pki_creditcardclient_id) {
        goto end;
    }

    
    cJSON *a_pki_creditcardclient_id_local = NULL;
    if(!cJSON_IsArray(a_pki_creditcardclient_id)) {
        goto end;//primitive container
    }
    a_pki_creditcardclient_idList = list_createList();

    cJSON_ArrayForEach(a_pki_creditcardclient_id_local, a_pki_creditcardclient_id)
    {
        if(!cJSON_IsNumber(a_pki_creditcardclient_id_local))
        {
            goto end;
        }
        double *a_pki_creditcardclient_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_creditcardclient_id_local_value)
        {
            goto end;
        }
        *a_pki_creditcardclient_id_local_value = a_pki_creditcardclient_id_local->valuedouble;
        list_addElement(a_pki_creditcardclient_idList , a_pki_creditcardclient_id_local_value);
    }


    creditcardclient_create_object_v1_response_m_payload_local_var = creditcardclient_create_object_v1_response_m_payload_create (
        a_pki_creditcardclient_idList
        );

    return creditcardclient_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_creditcardclient_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_creditcardclient_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_creditcardclient_idList);
        a_pki_creditcardclient_idList = NULL;
    }
    return NULL;

}
