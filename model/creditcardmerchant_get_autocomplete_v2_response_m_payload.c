#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_get_autocomplete_v2_response_m_payload.h"



static creditcardmerchant_get_autocomplete_v2_response_m_payload_t *creditcardmerchant_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_creditcardmerchant
    ) {
    creditcardmerchant_get_autocomplete_v2_response_m_payload_t *creditcardmerchant_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(creditcardmerchant_get_autocomplete_v2_response_m_payload_t));
    if (!creditcardmerchant_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    creditcardmerchant_get_autocomplete_v2_response_m_payload_local_var->a_obj_creditcardmerchant = a_obj_creditcardmerchant;

    creditcardmerchant_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return creditcardmerchant_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) creditcardmerchant_get_autocomplete_v2_response_m_payload_t *creditcardmerchant_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_creditcardmerchant
    ) {
    return creditcardmerchant_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_creditcardmerchant
        );
}

void creditcardmerchant_get_autocomplete_v2_response_m_payload_free(creditcardmerchant_get_autocomplete_v2_response_m_payload_t *creditcardmerchant_get_autocomplete_v2_response_m_payload) {
    if(NULL == creditcardmerchant_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(creditcardmerchant_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant) {
        list_ForEach(listEntry, creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant) {
            creditcardmerchant_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant);
        creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant = NULL;
    }
    free(creditcardmerchant_get_autocomplete_v2_response_m_payload);
}

cJSON *creditcardmerchant_get_autocomplete_v2_response_m_payload_convertToJSON(creditcardmerchant_get_autocomplete_v2_response_m_payload_t *creditcardmerchant_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant
    if (!creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant) {
        goto fail;
    }
    cJSON *a_obj_creditcardmerchant = cJSON_AddArrayToObject(item, "a_objCreditcardmerchant");
    if(a_obj_creditcardmerchant == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_creditcardmerchantListEntry;
    if (creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant) {
    list_ForEach(a_obj_creditcardmerchantListEntry, creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant) {
    cJSON *itemLocal = creditcardmerchant_autocomplete_element_response_convertToJSON(a_obj_creditcardmerchantListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_creditcardmerchant, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardmerchant_get_autocomplete_v2_response_m_payload_t *creditcardmerchant_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *creditcardmerchant_get_autocomplete_v2_response_m_payloadJSON){

    creditcardmerchant_get_autocomplete_v2_response_m_payload_t *creditcardmerchant_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant
    list_t *a_obj_creditcardmerchantList = NULL;

    // creditcardmerchant_get_autocomplete_v2_response_m_payload->a_obj_creditcardmerchant
    cJSON *a_obj_creditcardmerchant = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_get_autocomplete_v2_response_m_payloadJSON, "a_objCreditcardmerchant");
    if (cJSON_IsNull(a_obj_creditcardmerchant)) {
        a_obj_creditcardmerchant = NULL;
    }
    if (!a_obj_creditcardmerchant) {
        goto end;
    }

    
    cJSON *a_obj_creditcardmerchant_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_creditcardmerchant)){
        goto end; //nonprimitive container
    }

    a_obj_creditcardmerchantList = list_createList();

    cJSON_ArrayForEach(a_obj_creditcardmerchant_local_nonprimitive,a_obj_creditcardmerchant )
    {
        if(!cJSON_IsObject(a_obj_creditcardmerchant_local_nonprimitive)){
            goto end;
        }
        creditcardmerchant_autocomplete_element_response_t *a_obj_creditcardmerchantItem = creditcardmerchant_autocomplete_element_response_parseFromJSON(a_obj_creditcardmerchant_local_nonprimitive);

        list_addElement(a_obj_creditcardmerchantList, a_obj_creditcardmerchantItem);
    }


    creditcardmerchant_get_autocomplete_v2_response_m_payload_local_var = creditcardmerchant_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_creditcardmerchantList
        );

    return creditcardmerchant_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_creditcardmerchantList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_creditcardmerchantList) {
            creditcardmerchant_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_creditcardmerchantList);
        a_obj_creditcardmerchantList = NULL;
    }
    return NULL;

}
