#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_create_object_v1_response_m_payload.h"



static paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_paymentgateway_id
    ) {
    paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload_local_var = malloc(sizeof(paymentgateway_create_object_v1_response_m_payload_t));
    if (!paymentgateway_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(paymentgateway_create_object_v1_response_m_payload_local_var, 0, sizeof(paymentgateway_create_object_v1_response_m_payload_t));
    paymentgateway_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    paymentgateway_create_object_v1_response_m_payload_local_var->a_pki_paymentgateway_id = a_pki_paymentgateway_id;
    return paymentgateway_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload_create(
    list_t *a_pki_paymentgateway_id
    ) {
    paymentgateway_create_object_v1_response_m_payload_t *result = paymentgateway_create_object_v1_response_m_payload_create_internal (
        a_pki_paymentgateway_id
        );
    if (!result) {
    }
    return result;
}

void paymentgateway_create_object_v1_response_m_payload_free(paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload) {
    if(NULL == paymentgateway_create_object_v1_response_m_payload){
        return ;
    }
    if(paymentgateway_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id) {
        list_ForEach(listEntry, paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id) {
            free(listEntry->data);
        }
        list_freeList(paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id);
        paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id = NULL;
    }
    free(paymentgateway_create_object_v1_response_m_payload);
}

cJSON *paymentgateway_create_object_v1_response_m_payload_convertToJSON(paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id
    if (!paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id) {
        goto fail;
    }
    cJSON *a_pki_paymentgateway_id = cJSON_AddArrayToObject(item, "a_pkiPaymentgatewayID");
    if(a_pki_paymentgateway_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_paymentgateway_idListEntry;
    list_ForEach(a_pki_paymentgateway_idListEntry, paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id) {
    if(cJSON_AddNumberToObject(a_pki_paymentgateway_id, "", *(double *)a_pki_paymentgateway_idListEntry->data) == NULL)
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

paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload_parseFromJSON(cJSON *paymentgateway_create_object_v1_response_m_payloadJSON){

    paymentgateway_create_object_v1_response_m_payload_t *paymentgateway_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id
    list_t *a_pki_paymentgateway_idList = NULL;

    // paymentgateway_create_object_v1_response_m_payload->a_pki_paymentgateway_id
    cJSON *a_pki_paymentgateway_id = cJSON_GetObjectItemCaseSensitive(paymentgateway_create_object_v1_response_m_payloadJSON, "a_pkiPaymentgatewayID");
    if (cJSON_IsNull(a_pki_paymentgateway_id)) {
        a_pki_paymentgateway_id = NULL;
    }
    if (!a_pki_paymentgateway_id) {
        goto end;
    }

    
    cJSON *a_pki_paymentgateway_id_local = NULL;
    if(!cJSON_IsArray(a_pki_paymentgateway_id)) {
        goto end;//primitive container
    }
    a_pki_paymentgateway_idList = list_createList();

    cJSON_ArrayForEach(a_pki_paymentgateway_id_local, a_pki_paymentgateway_id)
    {
        if(!cJSON_IsNumber(a_pki_paymentgateway_id_local))
        {
            goto end;
        }
        double *a_pki_paymentgateway_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_paymentgateway_id_local_value)
        {
            goto end;
        }
        *a_pki_paymentgateway_id_local_value = a_pki_paymentgateway_id_local->valuedouble;
        list_addElement(a_pki_paymentgateway_idList , a_pki_paymentgateway_id_local_value);
    }



    paymentgateway_create_object_v1_response_m_payload_local_var = paymentgateway_create_object_v1_response_m_payload_create_internal (
        a_pki_paymentgateway_idList
        );

    if (!paymentgateway_create_object_v1_response_m_payload_local_var) {
        goto end;
    }

    return paymentgateway_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_paymentgateway_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_paymentgateway_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_paymentgateway_idList);
        a_pki_paymentgateway_idList = NULL;
    }
    return NULL;

}
