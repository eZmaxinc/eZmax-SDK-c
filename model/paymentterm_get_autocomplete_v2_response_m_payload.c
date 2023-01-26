#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_get_autocomplete_v2_response_m_payload.h"



paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_paymentterm
    ) {
    paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(paymentterm_get_autocomplete_v2_response_m_payload_t));
    if (!paymentterm_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    paymentterm_get_autocomplete_v2_response_m_payload_local_var->a_obj_paymentterm = a_obj_paymentterm;

    return paymentterm_get_autocomplete_v2_response_m_payload_local_var;
}


void paymentterm_get_autocomplete_v2_response_m_payload_free(paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload) {
    if(NULL == paymentterm_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm) {
        list_ForEach(listEntry, paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm) {
            paymentterm_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm);
        paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm = NULL;
    }
    free(paymentterm_get_autocomplete_v2_response_m_payload);
}

cJSON *paymentterm_get_autocomplete_v2_response_m_payload_convertToJSON(paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm
    if(paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm) {
    cJSON *a_obj_paymentterm = cJSON_AddArrayToObject(item, "a_objPaymentterm");
    if(a_obj_paymentterm == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_paymenttermListEntry;
    if (paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm) {
    list_ForEach(a_obj_paymenttermListEntry, paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm) {
    cJSON *itemLocal = paymentterm_autocomplete_element_response_convertToJSON(a_obj_paymenttermListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_paymentterm, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *paymentterm_get_autocomplete_v2_response_m_payloadJSON){

    paymentterm_get_autocomplete_v2_response_m_payload_t *paymentterm_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm
    list_t *a_obj_paymenttermList = NULL;

    // paymentterm_get_autocomplete_v2_response_m_payload->a_obj_paymentterm
    cJSON *a_obj_paymentterm = cJSON_GetObjectItemCaseSensitive(paymentterm_get_autocomplete_v2_response_m_payloadJSON, "a_objPaymentterm");
    if (a_obj_paymentterm) { 
    cJSON *a_obj_paymentterm_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_paymentterm)){
        goto end; //nonprimitive container
    }

    a_obj_paymenttermList = list_createList();

    cJSON_ArrayForEach(a_obj_paymentterm_local_nonprimitive,a_obj_paymentterm )
    {
        if(!cJSON_IsObject(a_obj_paymentterm_local_nonprimitive)){
            goto end;
        }
        paymentterm_autocomplete_element_response_t *a_obj_paymenttermItem = paymentterm_autocomplete_element_response_parseFromJSON(a_obj_paymentterm_local_nonprimitive);

        list_addElement(a_obj_paymenttermList, a_obj_paymenttermItem);
    }
    }


    paymentterm_get_autocomplete_v2_response_m_payload_local_var = paymentterm_get_autocomplete_v2_response_m_payload_create (
        a_obj_paymentterm ? a_obj_paymenttermList : NULL
        );

    return paymentterm_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_paymenttermList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_paymenttermList) {
            paymentterm_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_paymenttermList);
        a_obj_paymenttermList = NULL;
    }
    return NULL;

}
