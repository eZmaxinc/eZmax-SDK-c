#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_get_list_v1_response_m_payload.h"



static customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_customer
    ) {
    customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload_local_var = malloc(sizeof(customer_get_list_v1_response_m_payload_t));
    if (!customer_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    customer_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    customer_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    customer_get_list_v1_response_m_payload_local_var->a_obj_customer = a_obj_customer;

    customer_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return customer_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_customer
    ) {
    return customer_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_customer
        );
}

void customer_get_list_v1_response_m_payload_free(customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload) {
    if(NULL == customer_get_list_v1_response_m_payload){
        return ;
    }
    if(customer_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_get_list_v1_response_m_payload->a_obj_customer) {
        list_ForEach(listEntry, customer_get_list_v1_response_m_payload->a_obj_customer) {
            customer_list_element_free(listEntry->data);
        }
        list_freeList(customer_get_list_v1_response_m_payload->a_obj_customer);
        customer_get_list_v1_response_m_payload->a_obj_customer = NULL;
    }
    free(customer_get_list_v1_response_m_payload);
}

cJSON *customer_get_list_v1_response_m_payload_convertToJSON(customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // customer_get_list_v1_response_m_payload->i_row_returned
    if (!customer_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", customer_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // customer_get_list_v1_response_m_payload->i_row_filtered
    if (!customer_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", customer_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // customer_get_list_v1_response_m_payload->a_obj_customer
    if (!customer_get_list_v1_response_m_payload->a_obj_customer) {
        goto fail;
    }
    cJSON *a_obj_customer = cJSON_AddArrayToObject(item, "a_objCustomer");
    if(a_obj_customer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_customerListEntry;
    if (customer_get_list_v1_response_m_payload->a_obj_customer) {
    list_ForEach(a_obj_customerListEntry, customer_get_list_v1_response_m_payload->a_obj_customer) {
    cJSON *itemLocal = customer_list_element_convertToJSON(a_obj_customerListEntry->data);
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

customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload_parseFromJSON(cJSON *customer_get_list_v1_response_m_payloadJSON){

    customer_get_list_v1_response_m_payload_t *customer_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for customer_get_list_v1_response_m_payload->a_obj_customer
    list_t *a_obj_customerList = NULL;

    // customer_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(customer_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (cJSON_IsNull(i_row_returned)) {
        i_row_returned = NULL;
    }
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // customer_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(customer_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (cJSON_IsNull(i_row_filtered)) {
        i_row_filtered = NULL;
    }
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // customer_get_list_v1_response_m_payload->a_obj_customer
    cJSON *a_obj_customer = cJSON_GetObjectItemCaseSensitive(customer_get_list_v1_response_m_payloadJSON, "a_objCustomer");
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
        customer_list_element_t *a_obj_customerItem = customer_list_element_parseFromJSON(a_obj_customer_local_nonprimitive);

        list_addElement(a_obj_customerList, a_obj_customerItem);
    }


    customer_get_list_v1_response_m_payload_local_var = customer_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_customerList
        );

    return customer_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_customerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_customerList) {
            customer_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_customerList);
        a_obj_customerList = NULL;
    }
    return NULL;

}
