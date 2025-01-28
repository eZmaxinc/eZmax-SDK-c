#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_create_object_v1_request.h"



static customer_create_object_v1_request_t *customer_create_object_v1_request_create_internal(
    list_t *a_obj_customer
    ) {
    customer_create_object_v1_request_t *customer_create_object_v1_request_local_var = malloc(sizeof(customer_create_object_v1_request_t));
    if (!customer_create_object_v1_request_local_var) {
        return NULL;
    }
    customer_create_object_v1_request_local_var->a_obj_customer = a_obj_customer;

    customer_create_object_v1_request_local_var->_library_owned = 1;
    return customer_create_object_v1_request_local_var;
}

__attribute__((deprecated)) customer_create_object_v1_request_t *customer_create_object_v1_request_create(
    list_t *a_obj_customer
    ) {
    return customer_create_object_v1_request_create_internal (
        a_obj_customer
        );
}

void customer_create_object_v1_request_free(customer_create_object_v1_request_t *customer_create_object_v1_request) {
    if(NULL == customer_create_object_v1_request){
        return ;
    }
    if(customer_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_create_object_v1_request->a_obj_customer) {
        list_ForEach(listEntry, customer_create_object_v1_request->a_obj_customer) {
            customer_request_compound_free(listEntry->data);
        }
        list_freeList(customer_create_object_v1_request->a_obj_customer);
        customer_create_object_v1_request->a_obj_customer = NULL;
    }
    free(customer_create_object_v1_request);
}

cJSON *customer_create_object_v1_request_convertToJSON(customer_create_object_v1_request_t *customer_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // customer_create_object_v1_request->a_obj_customer
    if (!customer_create_object_v1_request->a_obj_customer) {
        goto fail;
    }
    cJSON *a_obj_customer = cJSON_AddArrayToObject(item, "a_objCustomer");
    if(a_obj_customer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_customerListEntry;
    if (customer_create_object_v1_request->a_obj_customer) {
    list_ForEach(a_obj_customerListEntry, customer_create_object_v1_request->a_obj_customer) {
    cJSON *itemLocal = customer_request_compound_convertToJSON(a_obj_customerListEntry->data);
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

customer_create_object_v1_request_t *customer_create_object_v1_request_parseFromJSON(cJSON *customer_create_object_v1_requestJSON){

    customer_create_object_v1_request_t *customer_create_object_v1_request_local_var = NULL;

    // define the local list for customer_create_object_v1_request->a_obj_customer
    list_t *a_obj_customerList = NULL;

    // customer_create_object_v1_request->a_obj_customer
    cJSON *a_obj_customer = cJSON_GetObjectItemCaseSensitive(customer_create_object_v1_requestJSON, "a_objCustomer");
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
        customer_request_compound_t *a_obj_customerItem = customer_request_compound_parseFromJSON(a_obj_customer_local_nonprimitive);

        list_addElement(a_obj_customerList, a_obj_customerItem);
    }


    customer_create_object_v1_request_local_var = customer_create_object_v1_request_create_internal (
        a_obj_customerList
        );

    return customer_create_object_v1_request_local_var;
end:
    if (a_obj_customerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_customerList) {
            customer_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_customerList);
        a_obj_customerList = NULL;
    }
    return NULL;

}
