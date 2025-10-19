#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentmethod_get_autocomplete_v2_response_m_payload.h"



static paymentmethod_get_autocomplete_v2_response_m_payload_t *paymentmethod_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_paymentmethod
    ) {
    paymentmethod_get_autocomplete_v2_response_m_payload_t *paymentmethod_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(paymentmethod_get_autocomplete_v2_response_m_payload_t));
    if (!paymentmethod_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    paymentmethod_get_autocomplete_v2_response_m_payload_local_var->a_obj_paymentmethod = a_obj_paymentmethod;

    paymentmethod_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return paymentmethod_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) paymentmethod_get_autocomplete_v2_response_m_payload_t *paymentmethod_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_paymentmethod
    ) {
    return paymentmethod_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_paymentmethod
        );
}

void paymentmethod_get_autocomplete_v2_response_m_payload_free(paymentmethod_get_autocomplete_v2_response_m_payload_t *paymentmethod_get_autocomplete_v2_response_m_payload) {
    if(NULL == paymentmethod_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(paymentmethod_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentmethod_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod) {
        list_ForEach(listEntry, paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod) {
            paymentmethod_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod);
        paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod = NULL;
    }
    free(paymentmethod_get_autocomplete_v2_response_m_payload);
}

cJSON *paymentmethod_get_autocomplete_v2_response_m_payload_convertToJSON(paymentmethod_get_autocomplete_v2_response_m_payload_t *paymentmethod_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod
    if (!paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod) {
        goto fail;
    }
    cJSON *a_obj_paymentmethod = cJSON_AddArrayToObject(item, "a_objPaymentmethod");
    if(a_obj_paymentmethod == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_paymentmethodListEntry;
    if (paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod) {
    list_ForEach(a_obj_paymentmethodListEntry, paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod) {
    cJSON *itemLocal = paymentmethod_autocomplete_element_response_convertToJSON(a_obj_paymentmethodListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_paymentmethod, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentmethod_get_autocomplete_v2_response_m_payload_t *paymentmethod_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *paymentmethod_get_autocomplete_v2_response_m_payloadJSON){

    paymentmethod_get_autocomplete_v2_response_m_payload_t *paymentmethod_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod
    list_t *a_obj_paymentmethodList = NULL;

    // paymentmethod_get_autocomplete_v2_response_m_payload->a_obj_paymentmethod
    cJSON *a_obj_paymentmethod = cJSON_GetObjectItemCaseSensitive(paymentmethod_get_autocomplete_v2_response_m_payloadJSON, "a_objPaymentmethod");
    if (cJSON_IsNull(a_obj_paymentmethod)) {
        a_obj_paymentmethod = NULL;
    }
    if (!a_obj_paymentmethod) {
        goto end;
    }

    
    cJSON *a_obj_paymentmethod_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_paymentmethod)){
        goto end; //nonprimitive container
    }

    a_obj_paymentmethodList = list_createList();

    cJSON_ArrayForEach(a_obj_paymentmethod_local_nonprimitive,a_obj_paymentmethod )
    {
        if(!cJSON_IsObject(a_obj_paymentmethod_local_nonprimitive)){
            goto end;
        }
        paymentmethod_autocomplete_element_response_t *a_obj_paymentmethodItem = paymentmethod_autocomplete_element_response_parseFromJSON(a_obj_paymentmethod_local_nonprimitive);

        list_addElement(a_obj_paymentmethodList, a_obj_paymentmethodItem);
    }


    paymentmethod_get_autocomplete_v2_response_m_payload_local_var = paymentmethod_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_paymentmethodList
        );

    return paymentmethod_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_paymentmethodList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_paymentmethodList) {
            paymentmethod_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_paymentmethodList);
        a_obj_paymentmethodList = NULL;
    }
    return NULL;

}
