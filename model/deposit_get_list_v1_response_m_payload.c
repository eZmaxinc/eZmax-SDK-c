#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposit_get_list_v1_response_m_payload.h"



static deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_deposit
    ) {
    deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload_local_var = malloc(sizeof(deposit_get_list_v1_response_m_payload_t));
    if (!deposit_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(deposit_get_list_v1_response_m_payload_local_var, 0, sizeof(deposit_get_list_v1_response_m_payload_t));
    deposit_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    deposit_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    deposit_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    deposit_get_list_v1_response_m_payload_local_var->a_obj_deposit = a_obj_deposit;
    return deposit_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_deposit
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
    deposit_get_list_v1_response_m_payload_t *result = deposit_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_deposit
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void deposit_get_list_v1_response_m_payload_free(deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload) {
    if(NULL == deposit_get_list_v1_response_m_payload){
        return ;
    }
    if(deposit_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "deposit_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (deposit_get_list_v1_response_m_payload->i_row_returned) {
        free(deposit_get_list_v1_response_m_payload->i_row_returned);
        deposit_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (deposit_get_list_v1_response_m_payload->i_row_filtered) {
        free(deposit_get_list_v1_response_m_payload->i_row_filtered);
        deposit_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (deposit_get_list_v1_response_m_payload->a_obj_deposit) {
        list_ForEach(listEntry, deposit_get_list_v1_response_m_payload->a_obj_deposit) {
            deposit_list_element_free(listEntry->data);
        }
        list_freeList(deposit_get_list_v1_response_m_payload->a_obj_deposit);
        deposit_get_list_v1_response_m_payload->a_obj_deposit = NULL;
    }
    free(deposit_get_list_v1_response_m_payload);
}

cJSON *deposit_get_list_v1_response_m_payload_convertToJSON(deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // deposit_get_list_v1_response_m_payload->i_row_returned
    if (!deposit_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *deposit_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // deposit_get_list_v1_response_m_payload->i_row_filtered
    if (!deposit_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *deposit_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // deposit_get_list_v1_response_m_payload->a_obj_deposit
    if (!deposit_get_list_v1_response_m_payload->a_obj_deposit) {
        goto fail;
    }
    cJSON *a_obj_deposit = cJSON_AddArrayToObject(item, "a_objDeposit");
    if(a_obj_deposit == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_depositListEntry;
    if (deposit_get_list_v1_response_m_payload->a_obj_deposit) {
    list_ForEach(a_obj_depositListEntry, deposit_get_list_v1_response_m_payload->a_obj_deposit) {
    cJSON *itemLocal = deposit_list_element_convertToJSON(a_obj_depositListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_deposit, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload_parseFromJSON(cJSON *deposit_get_list_v1_response_m_payloadJSON){

    deposit_get_list_v1_response_m_payload_t *deposit_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for deposit_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for deposit_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for deposit_get_list_v1_response_m_payload->a_obj_deposit
    list_t *a_obj_depositList = NULL;

    // deposit_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(deposit_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // deposit_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(deposit_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // deposit_get_list_v1_response_m_payload->a_obj_deposit
    cJSON *a_obj_deposit = cJSON_GetObjectItemCaseSensitive(deposit_get_list_v1_response_m_payloadJSON, "a_objDeposit");
    if (cJSON_IsNull(a_obj_deposit)) {
        a_obj_deposit = NULL;
    }
    if (!a_obj_deposit) {
        goto end;
    }

    
    cJSON *a_obj_deposit_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_deposit)){
        goto end; //nonprimitive container
    }

    a_obj_depositList = list_createList();

    cJSON_ArrayForEach(a_obj_deposit_local_nonprimitive,a_obj_deposit )
    {
        if(!cJSON_IsObject(a_obj_deposit_local_nonprimitive)){
            goto end;
        }
        deposit_list_element_t *a_obj_depositItem = deposit_list_element_parseFromJSON(a_obj_deposit_local_nonprimitive);

        list_addElement(a_obj_depositList, a_obj_depositItem);
    }



    deposit_get_list_v1_response_m_payload_local_var = deposit_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_depositList
        );

    if (!deposit_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return deposit_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_depositList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_depositList) {
            deposit_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_depositList);
        a_obj_depositList = NULL;
    }
    return NULL;

}
