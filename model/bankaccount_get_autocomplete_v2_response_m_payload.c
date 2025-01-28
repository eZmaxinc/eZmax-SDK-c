#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bankaccount_get_autocomplete_v2_response_m_payload.h"



static bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_bankaccount
    ) {
    bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(bankaccount_get_autocomplete_v2_response_m_payload_t));
    if (!bankaccount_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    bankaccount_get_autocomplete_v2_response_m_payload_local_var->a_obj_bankaccount = a_obj_bankaccount;

    bankaccount_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return bankaccount_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_bankaccount
    ) {
    return bankaccount_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_bankaccount
        );
}

void bankaccount_get_autocomplete_v2_response_m_payload_free(bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload) {
    if(NULL == bankaccount_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(bankaccount_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "bankaccount_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount) {
        list_ForEach(listEntry, bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount) {
            bankaccount_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount);
        bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount = NULL;
    }
    free(bankaccount_get_autocomplete_v2_response_m_payload);
}

cJSON *bankaccount_get_autocomplete_v2_response_m_payload_convertToJSON(bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount
    if (!bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount) {
        goto fail;
    }
    cJSON *a_obj_bankaccount = cJSON_AddArrayToObject(item, "a_objBankaccount");
    if(a_obj_bankaccount == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_bankaccountListEntry;
    if (bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount) {
    list_ForEach(a_obj_bankaccountListEntry, bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount) {
    cJSON *itemLocal = bankaccount_autocomplete_element_response_convertToJSON(a_obj_bankaccountListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_bankaccount, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *bankaccount_get_autocomplete_v2_response_m_payloadJSON){

    bankaccount_get_autocomplete_v2_response_m_payload_t *bankaccount_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount
    list_t *a_obj_bankaccountList = NULL;

    // bankaccount_get_autocomplete_v2_response_m_payload->a_obj_bankaccount
    cJSON *a_obj_bankaccount = cJSON_GetObjectItemCaseSensitive(bankaccount_get_autocomplete_v2_response_m_payloadJSON, "a_objBankaccount");
    if (cJSON_IsNull(a_obj_bankaccount)) {
        a_obj_bankaccount = NULL;
    }
    if (!a_obj_bankaccount) {
        goto end;
    }

    
    cJSON *a_obj_bankaccount_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_bankaccount)){
        goto end; //nonprimitive container
    }

    a_obj_bankaccountList = list_createList();

    cJSON_ArrayForEach(a_obj_bankaccount_local_nonprimitive,a_obj_bankaccount )
    {
        if(!cJSON_IsObject(a_obj_bankaccount_local_nonprimitive)){
            goto end;
        }
        bankaccount_autocomplete_element_response_t *a_obj_bankaccountItem = bankaccount_autocomplete_element_response_parseFromJSON(a_obj_bankaccount_local_nonprimitive);

        list_addElement(a_obj_bankaccountList, a_obj_bankaccountItem);
    }


    bankaccount_get_autocomplete_v2_response_m_payload_local_var = bankaccount_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_bankaccountList
        );

    return bankaccount_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_bankaccountList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_bankaccountList) {
            bankaccount_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_bankaccountList);
        a_obj_bankaccountList = NULL;
    }
    return NULL;

}
