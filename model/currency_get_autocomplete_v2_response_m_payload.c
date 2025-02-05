#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency_get_autocomplete_v2_response_m_payload.h"



static currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_currency
    ) {
    currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(currency_get_autocomplete_v2_response_m_payload_t));
    if (!currency_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    currency_get_autocomplete_v2_response_m_payload_local_var->a_obj_currency = a_obj_currency;

    currency_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return currency_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_currency
    ) {
    return currency_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_currency
        );
}

void currency_get_autocomplete_v2_response_m_payload_free(currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload) {
    if(NULL == currency_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(currency_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "currency_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (currency_get_autocomplete_v2_response_m_payload->a_obj_currency) {
        list_ForEach(listEntry, currency_get_autocomplete_v2_response_m_payload->a_obj_currency) {
            currency_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(currency_get_autocomplete_v2_response_m_payload->a_obj_currency);
        currency_get_autocomplete_v2_response_m_payload->a_obj_currency = NULL;
    }
    free(currency_get_autocomplete_v2_response_m_payload);
}

cJSON *currency_get_autocomplete_v2_response_m_payload_convertToJSON(currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // currency_get_autocomplete_v2_response_m_payload->a_obj_currency
    if (!currency_get_autocomplete_v2_response_m_payload->a_obj_currency) {
        goto fail;
    }
    cJSON *a_obj_currency = cJSON_AddArrayToObject(item, "a_objCurrency");
    if(a_obj_currency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_currencyListEntry;
    if (currency_get_autocomplete_v2_response_m_payload->a_obj_currency) {
    list_ForEach(a_obj_currencyListEntry, currency_get_autocomplete_v2_response_m_payload->a_obj_currency) {
    cJSON *itemLocal = currency_autocomplete_element_response_convertToJSON(a_obj_currencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_currency, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *currency_get_autocomplete_v2_response_m_payloadJSON){

    currency_get_autocomplete_v2_response_m_payload_t *currency_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for currency_get_autocomplete_v2_response_m_payload->a_obj_currency
    list_t *a_obj_currencyList = NULL;

    // currency_get_autocomplete_v2_response_m_payload->a_obj_currency
    cJSON *a_obj_currency = cJSON_GetObjectItemCaseSensitive(currency_get_autocomplete_v2_response_m_payloadJSON, "a_objCurrency");
    if (cJSON_IsNull(a_obj_currency)) {
        a_obj_currency = NULL;
    }
    if (!a_obj_currency) {
        goto end;
    }

    
    cJSON *a_obj_currency_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_currency)){
        goto end; //nonprimitive container
    }

    a_obj_currencyList = list_createList();

    cJSON_ArrayForEach(a_obj_currency_local_nonprimitive,a_obj_currency )
    {
        if(!cJSON_IsObject(a_obj_currency_local_nonprimitive)){
            goto end;
        }
        currency_autocomplete_element_response_t *a_obj_currencyItem = currency_autocomplete_element_response_parseFromJSON(a_obj_currency_local_nonprimitive);

        list_addElement(a_obj_currencyList, a_obj_currencyItem);
    }


    currency_get_autocomplete_v2_response_m_payload_local_var = currency_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_currencyList
        );

    return currency_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_currencyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_currencyList) {
            currency_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_currencyList);
        a_obj_currencyList = NULL;
    }
    return NULL;

}
