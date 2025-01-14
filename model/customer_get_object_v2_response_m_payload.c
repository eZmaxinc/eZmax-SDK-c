#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_get_object_v2_response_m_payload.h"



customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload_create(
    customer_response_compound_t *obj_customer
    ) {
    customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload_local_var = malloc(sizeof(customer_get_object_v2_response_m_payload_t));
    if (!customer_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    customer_get_object_v2_response_m_payload_local_var->obj_customer = obj_customer;

    return customer_get_object_v2_response_m_payload_local_var;
}


void customer_get_object_v2_response_m_payload_free(customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload) {
    if(NULL == customer_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (customer_get_object_v2_response_m_payload->obj_customer) {
        customer_response_compound_free(customer_get_object_v2_response_m_payload->obj_customer);
        customer_get_object_v2_response_m_payload->obj_customer = NULL;
    }
    free(customer_get_object_v2_response_m_payload);
}

cJSON *customer_get_object_v2_response_m_payload_convertToJSON(customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // customer_get_object_v2_response_m_payload->obj_customer
    if (!customer_get_object_v2_response_m_payload->obj_customer) {
        goto fail;
    }
    cJSON *obj_customer_local_JSON = customer_response_compound_convertToJSON(customer_get_object_v2_response_m_payload->obj_customer);
    if(obj_customer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCustomer", obj_customer_local_JSON);
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

customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload_parseFromJSON(cJSON *customer_get_object_v2_response_m_payloadJSON){

    customer_get_object_v2_response_m_payload_t *customer_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for customer_get_object_v2_response_m_payload->obj_customer
    customer_response_compound_t *obj_customer_local_nonprim = NULL;

    // customer_get_object_v2_response_m_payload->obj_customer
    cJSON *obj_customer = cJSON_GetObjectItemCaseSensitive(customer_get_object_v2_response_m_payloadJSON, "objCustomer");
    if (!obj_customer) {
        goto end;
    }

    
    obj_customer_local_nonprim = customer_response_compound_parseFromJSON(obj_customer); //nonprimitive


    customer_get_object_v2_response_m_payload_local_var = customer_get_object_v2_response_m_payload_create (
        obj_customer_local_nonprim
        );

    return customer_get_object_v2_response_m_payload_local_var;
end:
    if (obj_customer_local_nonprim) {
        customer_response_compound_free(obj_customer_local_nonprim);
        obj_customer_local_nonprim = NULL;
    }
    return NULL;

}
