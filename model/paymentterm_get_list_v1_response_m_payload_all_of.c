#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_get_list_v1_response_m_payload_all_of.h"



paymentterm_get_list_v1_response_m_payload_all_of_t *paymentterm_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_paymentterm
    ) {
    paymentterm_get_list_v1_response_m_payload_all_of_t *paymentterm_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(paymentterm_get_list_v1_response_m_payload_all_of_t));
    if (!paymentterm_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    paymentterm_get_list_v1_response_m_payload_all_of_local_var->a_obj_paymentterm = a_obj_paymentterm;

    return paymentterm_get_list_v1_response_m_payload_all_of_local_var;
}


void paymentterm_get_list_v1_response_m_payload_all_of_free(paymentterm_get_list_v1_response_m_payload_all_of_t *paymentterm_get_list_v1_response_m_payload_all_of) {
    if(NULL == paymentterm_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm) {
        list_ForEach(listEntry, paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm) {
            paymentterm_list_element_free(listEntry->data);
        }
        list_freeList(paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm);
        paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm = NULL;
    }
    free(paymentterm_get_list_v1_response_m_payload_all_of);
}

cJSON *paymentterm_get_list_v1_response_m_payload_all_of_convertToJSON(paymentterm_get_list_v1_response_m_payload_all_of_t *paymentterm_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm
    if (!paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm) {
        goto fail;
    }
    cJSON *a_obj_paymentterm = cJSON_AddArrayToObject(item, "a_objPaymentterm");
    if(a_obj_paymentterm == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_paymenttermListEntry;
    if (paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm) {
    list_ForEach(a_obj_paymenttermListEntry, paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm) {
    cJSON *itemLocal = paymentterm_list_element_convertToJSON(a_obj_paymenttermListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_paymentterm, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_get_list_v1_response_m_payload_all_of_t *paymentterm_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *paymentterm_get_list_v1_response_m_payload_all_ofJSON){

    paymentterm_get_list_v1_response_m_payload_all_of_t *paymentterm_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm
    list_t *a_obj_paymenttermList = NULL;

    // paymentterm_get_list_v1_response_m_payload_all_of->a_obj_paymentterm
    cJSON *a_obj_paymentterm = cJSON_GetObjectItemCaseSensitive(paymentterm_get_list_v1_response_m_payload_all_ofJSON, "a_objPaymentterm");
    if (!a_obj_paymentterm) {
        goto end;
    }

    
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
        paymentterm_list_element_t *a_obj_paymenttermItem = paymentterm_list_element_parseFromJSON(a_obj_paymentterm_local_nonprimitive);

        list_addElement(a_obj_paymenttermList, a_obj_paymenttermItem);
    }


    paymentterm_get_list_v1_response_m_payload_all_of_local_var = paymentterm_get_list_v1_response_m_payload_all_of_create (
        a_obj_paymenttermList
        );

    return paymentterm_get_list_v1_response_m_payload_all_of_local_var;
end:
    if (a_obj_paymenttermList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_paymenttermList) {
            paymentterm_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_paymenttermList);
        a_obj_paymenttermList = NULL;
    }
    return NULL;

}
