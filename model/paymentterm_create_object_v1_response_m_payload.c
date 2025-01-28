#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_create_object_v1_response_m_payload.h"



static paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload_create_internal(
    list_t *a_pki_paymentterm_id
    ) {
    paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload_local_var = malloc(sizeof(paymentterm_create_object_v1_response_m_payload_t));
    if (!paymentterm_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    paymentterm_create_object_v1_response_m_payload_local_var->a_pki_paymentterm_id = a_pki_paymentterm_id;

    paymentterm_create_object_v1_response_m_payload_local_var->_library_owned = 1;
    return paymentterm_create_object_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload_create(
    list_t *a_pki_paymentterm_id
    ) {
    return paymentterm_create_object_v1_response_m_payload_create_internal (
        a_pki_paymentterm_id
        );
}

void paymentterm_create_object_v1_response_m_payload_free(paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload) {
    if(NULL == paymentterm_create_object_v1_response_m_payload){
        return ;
    }
    if(paymentterm_create_object_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentterm_create_object_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id) {
        list_ForEach(listEntry, paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id) {
            free(listEntry->data);
        }
        list_freeList(paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id);
        paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id = NULL;
    }
    free(paymentterm_create_object_v1_response_m_payload);
}

cJSON *paymentterm_create_object_v1_response_m_payload_convertToJSON(paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id
    if (!paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id) {
        goto fail;
    }
    cJSON *a_pki_paymentterm_id = cJSON_AddArrayToObject(item, "a_pkiPaymenttermID");
    if(a_pki_paymentterm_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_paymentterm_idListEntry;
    list_ForEach(a_pki_paymentterm_idListEntry, paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id) {
    if(cJSON_AddNumberToObject(a_pki_paymentterm_id, "", *(double *)a_pki_paymentterm_idListEntry->data) == NULL)
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

paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload_parseFromJSON(cJSON *paymentterm_create_object_v1_response_m_payloadJSON){

    paymentterm_create_object_v1_response_m_payload_t *paymentterm_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id
    list_t *a_pki_paymentterm_idList = NULL;

    // paymentterm_create_object_v1_response_m_payload->a_pki_paymentterm_id
    cJSON *a_pki_paymentterm_id = cJSON_GetObjectItemCaseSensitive(paymentterm_create_object_v1_response_m_payloadJSON, "a_pkiPaymenttermID");
    if (cJSON_IsNull(a_pki_paymentterm_id)) {
        a_pki_paymentterm_id = NULL;
    }
    if (!a_pki_paymentterm_id) {
        goto end;
    }

    
    cJSON *a_pki_paymentterm_id_local = NULL;
    if(!cJSON_IsArray(a_pki_paymentterm_id)) {
        goto end;//primitive container
    }
    a_pki_paymentterm_idList = list_createList();

    cJSON_ArrayForEach(a_pki_paymentterm_id_local, a_pki_paymentterm_id)
    {
        if(!cJSON_IsNumber(a_pki_paymentterm_id_local))
        {
            goto end;
        }
        double *a_pki_paymentterm_id_local_value = calloc(1, sizeof(double));
        if(!a_pki_paymentterm_id_local_value)
        {
            goto end;
        }
        *a_pki_paymentterm_id_local_value = a_pki_paymentterm_id_local->valuedouble;
        list_addElement(a_pki_paymentterm_idList , a_pki_paymentterm_id_local_value);
    }


    paymentterm_create_object_v1_response_m_payload_local_var = paymentterm_create_object_v1_response_m_payload_create_internal (
        a_pki_paymentterm_idList
        );

    return paymentterm_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_paymentterm_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_paymentterm_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_paymentterm_idList);
        a_pki_paymentterm_idList = NULL;
    }
    return NULL;

}
