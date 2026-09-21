#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bankaccount_get_list_v1_response_m_payload.h"



static bankaccount_get_list_v1_response_m_payload_t *bankaccount_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_bankaccount
    ) {
    bankaccount_get_list_v1_response_m_payload_t *bankaccount_get_list_v1_response_m_payload_local_var = malloc(sizeof(bankaccount_get_list_v1_response_m_payload_t));
    if (!bankaccount_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(bankaccount_get_list_v1_response_m_payload_local_var, 0, sizeof(bankaccount_get_list_v1_response_m_payload_t));
    bankaccount_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    bankaccount_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    bankaccount_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    bankaccount_get_list_v1_response_m_payload_local_var->a_obj_bankaccount = a_obj_bankaccount;
    return bankaccount_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) bankaccount_get_list_v1_response_m_payload_t *bankaccount_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_bankaccount
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
    bankaccount_get_list_v1_response_m_payload_t *result = bankaccount_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_bankaccount
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void bankaccount_get_list_v1_response_m_payload_free(bankaccount_get_list_v1_response_m_payload_t *bankaccount_get_list_v1_response_m_payload) {
    if(NULL == bankaccount_get_list_v1_response_m_payload){
        return ;
    }
    if(bankaccount_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "bankaccount_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (bankaccount_get_list_v1_response_m_payload->i_row_returned) {
        free(bankaccount_get_list_v1_response_m_payload->i_row_returned);
        bankaccount_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (bankaccount_get_list_v1_response_m_payload->i_row_filtered) {
        free(bankaccount_get_list_v1_response_m_payload->i_row_filtered);
        bankaccount_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount) {
        list_ForEach(listEntry, bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount) {
            bankaccount_list_element_free(listEntry->data);
        }
        list_freeList(bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount);
        bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount = NULL;
    }
    free(bankaccount_get_list_v1_response_m_payload);
}

cJSON *bankaccount_get_list_v1_response_m_payload_convertToJSON(bankaccount_get_list_v1_response_m_payload_t *bankaccount_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // bankaccount_get_list_v1_response_m_payload->i_row_returned
    if (!bankaccount_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *bankaccount_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // bankaccount_get_list_v1_response_m_payload->i_row_filtered
    if (!bankaccount_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *bankaccount_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount
    if (!bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount) {
        goto fail;
    }
    cJSON *a_obj_bankaccount = cJSON_AddArrayToObject(item, "a_objBankaccount");
    if(a_obj_bankaccount == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_bankaccountListEntry;
    if (bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount) {
    list_ForEach(a_obj_bankaccountListEntry, bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount) {
    cJSON *itemLocal = bankaccount_list_element_convertToJSON(a_obj_bankaccountListEntry->data);
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

bankaccount_get_list_v1_response_m_payload_t *bankaccount_get_list_v1_response_m_payload_parseFromJSON(cJSON *bankaccount_get_list_v1_response_m_payloadJSON){

    bankaccount_get_list_v1_response_m_payload_t *bankaccount_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for bankaccount_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for bankaccount_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount
    list_t *a_obj_bankaccountList = NULL;

    // bankaccount_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(bankaccount_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // bankaccount_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(bankaccount_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // bankaccount_get_list_v1_response_m_payload->a_obj_bankaccount
    cJSON *a_obj_bankaccount = cJSON_GetObjectItemCaseSensitive(bankaccount_get_list_v1_response_m_payloadJSON, "a_objBankaccount");
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
        bankaccount_list_element_t *a_obj_bankaccountItem = bankaccount_list_element_parseFromJSON(a_obj_bankaccount_local_nonprimitive);

        list_addElement(a_obj_bankaccountList, a_obj_bankaccountItem);
    }



    bankaccount_get_list_v1_response_m_payload_local_var = bankaccount_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_bankaccountList
        );

    if (!bankaccount_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return bankaccount_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_bankaccountList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_bankaccountList) {
            bankaccount_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_bankaccountList);
        a_obj_bankaccountList = NULL;
    }
    return NULL;

}
