#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_get_autocomplete_v2_response_m_payload.h"



static customer_get_autocomplete_v2_response_m_payload_t *customer_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_customer
    ) {
    customer_get_autocomplete_v2_response_m_payload_t *customer_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(customer_get_autocomplete_v2_response_m_payload_t));
    if (!customer_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    customer_get_autocomplete_v2_response_m_payload_local_var->a_obj_customer = a_obj_customer;

    customer_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return customer_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) customer_get_autocomplete_v2_response_m_payload_t *customer_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_customer
    ) {
    return customer_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_customer
        );
}

void customer_get_autocomplete_v2_response_m_payload_free(customer_get_autocomplete_v2_response_m_payload_t *customer_get_autocomplete_v2_response_m_payload) {
    if(NULL == customer_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(customer_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_get_autocomplete_v2_response_m_payload->a_obj_customer) {
        list_ForEach(listEntry, customer_get_autocomplete_v2_response_m_payload->a_obj_customer) {
            customer_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(customer_get_autocomplete_v2_response_m_payload->a_obj_customer);
        customer_get_autocomplete_v2_response_m_payload->a_obj_customer = NULL;
    }
    free(customer_get_autocomplete_v2_response_m_payload);
}

cJSON *customer_get_autocomplete_v2_response_m_payload_convertToJSON(customer_get_autocomplete_v2_response_m_payload_t *customer_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // customer_get_autocomplete_v2_response_m_payload->a_obj_customer
    if (!customer_get_autocomplete_v2_response_m_payload->a_obj_customer) {
        goto fail;
    }
    cJSON *a_obj_customer = cJSON_AddArrayToObject(item, "a_objCustomer");
    if(a_obj_customer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_customerListEntry;
    if (customer_get_autocomplete_v2_response_m_payload->a_obj_customer) {
    list_ForEach(a_obj_customerListEntry, customer_get_autocomplete_v2_response_m_payload->a_obj_customer) {
    cJSON *itemLocal = customer_autocomplete_element_response_convertToJSON(a_obj_customerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_customer, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_get_autocomplete_v2_response_m_payload_t *customer_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *customer_get_autocomplete_v2_response_m_payloadJSON){

    customer_get_autocomplete_v2_response_m_payload_t *customer_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for customer_get_autocomplete_v2_response_m_payload->a_obj_customer
    list_t *a_obj_customerList = NULL;

    // customer_get_autocomplete_v2_response_m_payload->a_obj_customer
    cJSON *a_obj_customer = cJSON_GetObjectItemCaseSensitive(customer_get_autocomplete_v2_response_m_payloadJSON, "a_objCustomer");
    if (cJSON_IsNull(a_obj_customer)) {
        a_obj_customer = NULL;
    }
    if (!a_obj_customer) {
        goto end;
    }

    
    cJSON *a_obj_customer_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_customer)){
        goto end; //nonprimitive container
    }

    a_obj_customerList = list_createList();

    cJSON_ArrayForEach(a_obj_customer_local_nonprimitive,a_obj_customer )
    {
        if(!cJSON_IsObject(a_obj_customer_local_nonprimitive)){
            goto end;
        }
        customer_autocomplete_element_response_t *a_obj_customerItem = customer_autocomplete_element_response_parseFromJSON(a_obj_customer_local_nonprimitive);

        list_addElement(a_obj_customerList, a_obj_customerItem);
    }


    customer_get_autocomplete_v2_response_m_payload_local_var = customer_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_customerList
        );

    return customer_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_customerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_customerList) {
            customer_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_customerList);
        a_obj_customerList = NULL;
    }
    return NULL;

}
