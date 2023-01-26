#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_get_object_v2_response_all_of.h"



paymentterm_get_object_v2_response_all_of_t *paymentterm_get_object_v2_response_all_of_create(
    paymentterm_get_object_v2_response_m_payload_t *m_payload
    ) {
    paymentterm_get_object_v2_response_all_of_t *paymentterm_get_object_v2_response_all_of_local_var = malloc(sizeof(paymentterm_get_object_v2_response_all_of_t));
    if (!paymentterm_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    paymentterm_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return paymentterm_get_object_v2_response_all_of_local_var;
}


void paymentterm_get_object_v2_response_all_of_free(paymentterm_get_object_v2_response_all_of_t *paymentterm_get_object_v2_response_all_of) {
    if(NULL == paymentterm_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_get_object_v2_response_all_of->m_payload) {
        paymentterm_get_object_v2_response_m_payload_free(paymentterm_get_object_v2_response_all_of->m_payload);
        paymentterm_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(paymentterm_get_object_v2_response_all_of);
}

cJSON *paymentterm_get_object_v2_response_all_of_convertToJSON(paymentterm_get_object_v2_response_all_of_t *paymentterm_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_get_object_v2_response_all_of->m_payload
    if (!paymentterm_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = paymentterm_get_object_v2_response_m_payload_convertToJSON(paymentterm_get_object_v2_response_all_of->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_get_object_v2_response_all_of_t *paymentterm_get_object_v2_response_all_of_parseFromJSON(cJSON *paymentterm_get_object_v2_response_all_ofJSON){

    paymentterm_get_object_v2_response_all_of_t *paymentterm_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for paymentterm_get_object_v2_response_all_of->m_payload
    paymentterm_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // paymentterm_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(paymentterm_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = paymentterm_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    paymentterm_get_object_v2_response_all_of_local_var = paymentterm_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return paymentterm_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        paymentterm_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
