#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_get_object_v2_response_m_payload.h"



paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload_create(
    paymentterm_response_compound_t *obj_paymentterm
    ) {
    paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload_local_var = malloc(sizeof(paymentterm_get_object_v2_response_m_payload_t));
    if (!paymentterm_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    paymentterm_get_object_v2_response_m_payload_local_var->obj_paymentterm = obj_paymentterm;

    return paymentterm_get_object_v2_response_m_payload_local_var;
}


void paymentterm_get_object_v2_response_m_payload_free(paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload) {
    if(NULL == paymentterm_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_get_object_v2_response_m_payload->obj_paymentterm) {
        paymentterm_response_compound_free(paymentterm_get_object_v2_response_m_payload->obj_paymentterm);
        paymentterm_get_object_v2_response_m_payload->obj_paymentterm = NULL;
    }
    free(paymentterm_get_object_v2_response_m_payload);
}

cJSON *paymentterm_get_object_v2_response_m_payload_convertToJSON(paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_get_object_v2_response_m_payload->obj_paymentterm
    if (!paymentterm_get_object_v2_response_m_payload->obj_paymentterm) {
        goto fail;
    }
    cJSON *obj_paymentterm_local_JSON = paymentterm_response_compound_convertToJSON(paymentterm_get_object_v2_response_m_payload->obj_paymentterm);
    if(obj_paymentterm_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymentterm", obj_paymentterm_local_JSON);
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

paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload_parseFromJSON(cJSON *paymentterm_get_object_v2_response_m_payloadJSON){

    paymentterm_get_object_v2_response_m_payload_t *paymentterm_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for paymentterm_get_object_v2_response_m_payload->obj_paymentterm
    paymentterm_response_compound_t *obj_paymentterm_local_nonprim = NULL;

    // paymentterm_get_object_v2_response_m_payload->obj_paymentterm
    cJSON *obj_paymentterm = cJSON_GetObjectItemCaseSensitive(paymentterm_get_object_v2_response_m_payloadJSON, "objPaymentterm");
    if (!obj_paymentterm) {
        goto end;
    }

    
    obj_paymentterm_local_nonprim = paymentterm_response_compound_parseFromJSON(obj_paymentterm); //nonprimitive


    paymentterm_get_object_v2_response_m_payload_local_var = paymentterm_get_object_v2_response_m_payload_create (
        obj_paymentterm_local_nonprim
        );

    return paymentterm_get_object_v2_response_m_payload_local_var;
end:
    if (obj_paymentterm_local_nonprim) {
        paymentterm_response_compound_free(obj_paymentterm_local_nonprim);
        obj_paymentterm_local_nonprim = NULL;
    }
    return NULL;

}
