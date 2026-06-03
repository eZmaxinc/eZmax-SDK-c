#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_get_object_v2_response_m_payload.h"



static paymentgateway_get_object_v2_response_m_payload_t *paymentgateway_get_object_v2_response_m_payload_create_internal(
    paymentgateway_response_compound_t *obj_paymentgateway
    ) {
    paymentgateway_get_object_v2_response_m_payload_t *paymentgateway_get_object_v2_response_m_payload_local_var = malloc(sizeof(paymentgateway_get_object_v2_response_m_payload_t));
    if (!paymentgateway_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    memset(paymentgateway_get_object_v2_response_m_payload_local_var, 0, sizeof(paymentgateway_get_object_v2_response_m_payload_t));
    paymentgateway_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    paymentgateway_get_object_v2_response_m_payload_local_var->obj_paymentgateway = obj_paymentgateway;
    return paymentgateway_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) paymentgateway_get_object_v2_response_m_payload_t *paymentgateway_get_object_v2_response_m_payload_create(
    paymentgateway_response_compound_t *obj_paymentgateway
    ) {
    paymentgateway_get_object_v2_response_m_payload_t *result = paymentgateway_get_object_v2_response_m_payload_create_internal (
        obj_paymentgateway
        );
    if (!result) {
    }
    return result;
}

void paymentgateway_get_object_v2_response_m_payload_free(paymentgateway_get_object_v2_response_m_payload_t *paymentgateway_get_object_v2_response_m_payload) {
    if(NULL == paymentgateway_get_object_v2_response_m_payload){
        return ;
    }
    if(paymentgateway_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_get_object_v2_response_m_payload->obj_paymentgateway) {
        paymentgateway_response_compound_free(paymentgateway_get_object_v2_response_m_payload->obj_paymentgateway);
        paymentgateway_get_object_v2_response_m_payload->obj_paymentgateway = NULL;
    }
    free(paymentgateway_get_object_v2_response_m_payload);
}

cJSON *paymentgateway_get_object_v2_response_m_payload_convertToJSON(paymentgateway_get_object_v2_response_m_payload_t *paymentgateway_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_get_object_v2_response_m_payload->obj_paymentgateway
    if (!paymentgateway_get_object_v2_response_m_payload->obj_paymentgateway) {
        goto fail;
    }
    cJSON *obj_paymentgateway_local_JSON = paymentgateway_response_compound_convertToJSON(paymentgateway_get_object_v2_response_m_payload->obj_paymentgateway);
    if(obj_paymentgateway_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymentgateway", obj_paymentgateway_local_JSON);
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

paymentgateway_get_object_v2_response_m_payload_t *paymentgateway_get_object_v2_response_m_payload_parseFromJSON(cJSON *paymentgateway_get_object_v2_response_m_payloadJSON){

    paymentgateway_get_object_v2_response_m_payload_t *paymentgateway_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for paymentgateway_get_object_v2_response_m_payload->obj_paymentgateway
    paymentgateway_response_compound_t *obj_paymentgateway_local_nonprim = NULL;

    // paymentgateway_get_object_v2_response_m_payload->obj_paymentgateway
    cJSON *obj_paymentgateway = cJSON_GetObjectItemCaseSensitive(paymentgateway_get_object_v2_response_m_payloadJSON, "objPaymentgateway");
    if (cJSON_IsNull(obj_paymentgateway)) {
        obj_paymentgateway = NULL;
    }
    if (!obj_paymentgateway) {
        goto end;
    }

    
    obj_paymentgateway_local_nonprim = paymentgateway_response_compound_parseFromJSON(obj_paymentgateway); //nonprimitive



    paymentgateway_get_object_v2_response_m_payload_local_var = paymentgateway_get_object_v2_response_m_payload_create_internal (
        obj_paymentgateway_local_nonprim
        );

    if (!paymentgateway_get_object_v2_response_m_payload_local_var) {
        goto end;
    }

    return paymentgateway_get_object_v2_response_m_payload_local_var;
end:
    if (obj_paymentgateway_local_nonprim) {
        paymentgateway_response_compound_free(obj_paymentgateway_local_nonprim);
        obj_paymentgateway_local_nonprim = NULL;
    }
    return NULL;

}
