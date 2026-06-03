#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_get_list_v1_response_m_payload.h"



static paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_paymentgateway
    ) {
    paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload_local_var = malloc(sizeof(paymentgateway_get_list_v1_response_m_payload_t));
    if (!paymentgateway_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(paymentgateway_get_list_v1_response_m_payload_local_var, 0, sizeof(paymentgateway_get_list_v1_response_m_payload_t));
    paymentgateway_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    paymentgateway_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    paymentgateway_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    paymentgateway_get_list_v1_response_m_payload_local_var->a_obj_paymentgateway = a_obj_paymentgateway;
    return paymentgateway_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_paymentgateway
    ) {
    int *i_row_returned_copy = NULL;
    if (i_row_returned) {
        i_row_returned_copy = malloc(sizeof(int));
        if (i_row_returned_copy) *i_row_returned_copy = *i_row_returned;
    }
    int *i_row_filtered_copy = NULL;
    if (i_row_filtered) {
        i_row_filtered_copy = malloc(sizeof(int));
        if (i_row_filtered_copy) *i_row_filtered_copy = *i_row_filtered;
    }
    paymentgateway_get_list_v1_response_m_payload_t *result = paymentgateway_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_paymentgateway
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void paymentgateway_get_list_v1_response_m_payload_free(paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload) {
    if(NULL == paymentgateway_get_list_v1_response_m_payload){
        return ;
    }
    if(paymentgateway_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_get_list_v1_response_m_payload->i_row_returned) {
        free(paymentgateway_get_list_v1_response_m_payload->i_row_returned);
        paymentgateway_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (paymentgateway_get_list_v1_response_m_payload->i_row_filtered) {
        free(paymentgateway_get_list_v1_response_m_payload->i_row_filtered);
        paymentgateway_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway) {
        list_ForEach(listEntry, paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway) {
            paymentgateway_list_element_free(listEntry->data);
        }
        list_freeList(paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway);
        paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway = NULL;
    }
    free(paymentgateway_get_list_v1_response_m_payload);
}

cJSON *paymentgateway_get_list_v1_response_m_payload_convertToJSON(paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_get_list_v1_response_m_payload->i_row_returned
    if (!paymentgateway_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *paymentgateway_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // paymentgateway_get_list_v1_response_m_payload->i_row_filtered
    if (!paymentgateway_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *paymentgateway_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway
    if (!paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway) {
        goto fail;
    }
    cJSON *a_obj_paymentgateway = cJSON_AddArrayToObject(item, "a_objPaymentgateway");
    if(a_obj_paymentgateway == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_paymentgatewayListEntry;
    if (paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway) {
    list_ForEach(a_obj_paymentgatewayListEntry, paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway) {
    cJSON *itemLocal = paymentgateway_list_element_convertToJSON(a_obj_paymentgatewayListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_paymentgateway, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload_parseFromJSON(cJSON *paymentgateway_get_list_v1_response_m_payloadJSON){

    paymentgateway_get_list_v1_response_m_payload_t *paymentgateway_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for paymentgateway_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for paymentgateway_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway
    list_t *a_obj_paymentgatewayList = NULL;

    // paymentgateway_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(paymentgateway_get_list_v1_response_m_payloadJSON, "iRowReturned");
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
    i_row_returned_local_var = malloc(sizeof(int));
    if(!i_row_returned_local_var)
    {
        goto end;
    }
    *i_row_returned_local_var = i_row_returned->valuedouble;

    // paymentgateway_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(paymentgateway_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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
    i_row_filtered_local_var = malloc(sizeof(int));
    if(!i_row_filtered_local_var)
    {
        goto end;
    }
    *i_row_filtered_local_var = i_row_filtered->valuedouble;

    // paymentgateway_get_list_v1_response_m_payload->a_obj_paymentgateway
    cJSON *a_obj_paymentgateway = cJSON_GetObjectItemCaseSensitive(paymentgateway_get_list_v1_response_m_payloadJSON, "a_objPaymentgateway");
    if (cJSON_IsNull(a_obj_paymentgateway)) {
        a_obj_paymentgateway = NULL;
    }
    if (!a_obj_paymentgateway) {
        goto end;
    }

    
    cJSON *a_obj_paymentgateway_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_paymentgateway)){
        goto end; //nonprimitive container
    }

    a_obj_paymentgatewayList = list_createList();

    cJSON_ArrayForEach(a_obj_paymentgateway_local_nonprimitive,a_obj_paymentgateway )
    {
        if(!cJSON_IsObject(a_obj_paymentgateway_local_nonprimitive)){
            goto end;
        }
        paymentgateway_list_element_t *a_obj_paymentgatewayItem = paymentgateway_list_element_parseFromJSON(a_obj_paymentgateway_local_nonprimitive);

        list_addElement(a_obj_paymentgatewayList, a_obj_paymentgatewayItem);
    }



    paymentgateway_get_list_v1_response_m_payload_local_var = paymentgateway_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_paymentgatewayList
        );

    if (!paymentgateway_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return paymentgateway_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_paymentgatewayList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_paymentgatewayList) {
            paymentgateway_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_paymentgatewayList);
        a_obj_paymentgatewayList = NULL;
    }
    return NULL;

}
