#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_get_autocomplete_v2_response_m_payload.h"



static paymentgateway_get_autocomplete_v2_response_m_payload_t *paymentgateway_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_paymentgateway
    ) {
    paymentgateway_get_autocomplete_v2_response_m_payload_t *paymentgateway_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(paymentgateway_get_autocomplete_v2_response_m_payload_t));
    if (!paymentgateway_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    paymentgateway_get_autocomplete_v2_response_m_payload_local_var->a_obj_paymentgateway = a_obj_paymentgateway;

    paymentgateway_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return paymentgateway_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) paymentgateway_get_autocomplete_v2_response_m_payload_t *paymentgateway_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_paymentgateway
    ) {
    return paymentgateway_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_paymentgateway
        );
}

void paymentgateway_get_autocomplete_v2_response_m_payload_free(paymentgateway_get_autocomplete_v2_response_m_payload_t *paymentgateway_get_autocomplete_v2_response_m_payload) {
    if(NULL == paymentgateway_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(paymentgateway_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway) {
        list_ForEach(listEntry, paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway) {
            paymentgateway_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway);
        paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway = NULL;
    }
    free(paymentgateway_get_autocomplete_v2_response_m_payload);
}

cJSON *paymentgateway_get_autocomplete_v2_response_m_payload_convertToJSON(paymentgateway_get_autocomplete_v2_response_m_payload_t *paymentgateway_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway
    if (!paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway) {
        goto fail;
    }
    cJSON *a_obj_paymentgateway = cJSON_AddArrayToObject(item, "a_objPaymentgateway");
    if(a_obj_paymentgateway == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_paymentgatewayListEntry;
    if (paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway) {
    list_ForEach(a_obj_paymentgatewayListEntry, paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway) {
    cJSON *itemLocal = paymentgateway_autocomplete_element_response_convertToJSON(a_obj_paymentgatewayListEntry->data);
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

paymentgateway_get_autocomplete_v2_response_m_payload_t *paymentgateway_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *paymentgateway_get_autocomplete_v2_response_m_payloadJSON){

    paymentgateway_get_autocomplete_v2_response_m_payload_t *paymentgateway_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway
    list_t *a_obj_paymentgatewayList = NULL;

    // paymentgateway_get_autocomplete_v2_response_m_payload->a_obj_paymentgateway
    cJSON *a_obj_paymentgateway = cJSON_GetObjectItemCaseSensitive(paymentgateway_get_autocomplete_v2_response_m_payloadJSON, "a_objPaymentgateway");
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
        paymentgateway_autocomplete_element_response_t *a_obj_paymentgatewayItem = paymentgateway_autocomplete_element_response_parseFromJSON(a_obj_paymentgateway_local_nonprimitive);

        list_addElement(a_obj_paymentgatewayList, a_obj_paymentgatewayItem);
    }


    paymentgateway_get_autocomplete_v2_response_m_payload_local_var = paymentgateway_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_paymentgatewayList
        );

    return paymentgateway_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_paymentgatewayList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_paymentgatewayList) {
            paymentgateway_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_paymentgatewayList);
        a_obj_paymentgatewayList = NULL;
    }
    return NULL;

}
