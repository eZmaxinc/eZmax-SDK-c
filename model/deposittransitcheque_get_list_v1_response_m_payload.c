#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposittransitcheque_get_list_v1_response_m_payload.h"



static deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_deposittransitcheque
    ) {
    deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload_local_var = malloc(sizeof(deposittransitcheque_get_list_v1_response_m_payload_t));
    if (!deposittransitcheque_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(deposittransitcheque_get_list_v1_response_m_payload_local_var, 0, sizeof(deposittransitcheque_get_list_v1_response_m_payload_t));
    deposittransitcheque_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    deposittransitcheque_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    deposittransitcheque_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    deposittransitcheque_get_list_v1_response_m_payload_local_var->a_obj_deposittransitcheque = a_obj_deposittransitcheque;
    return deposittransitcheque_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_deposittransitcheque
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
    deposittransitcheque_get_list_v1_response_m_payload_t *result = deposittransitcheque_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_deposittransitcheque
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void deposittransitcheque_get_list_v1_response_m_payload_free(deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload) {
    if(NULL == deposittransitcheque_get_list_v1_response_m_payload){
        return ;
    }
    if(deposittransitcheque_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "deposittransitcheque_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (deposittransitcheque_get_list_v1_response_m_payload->i_row_returned) {
        free(deposittransitcheque_get_list_v1_response_m_payload->i_row_returned);
        deposittransitcheque_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (deposittransitcheque_get_list_v1_response_m_payload->i_row_filtered) {
        free(deposittransitcheque_get_list_v1_response_m_payload->i_row_filtered);
        deposittransitcheque_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque) {
        list_ForEach(listEntry, deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque) {
            deposittransitcheque_list_element_free(listEntry->data);
        }
        list_freeList(deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque);
        deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque = NULL;
    }
    free(deposittransitcheque_get_list_v1_response_m_payload);
}

cJSON *deposittransitcheque_get_list_v1_response_m_payload_convertToJSON(deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // deposittransitcheque_get_list_v1_response_m_payload->i_row_returned
    if (!deposittransitcheque_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *deposittransitcheque_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // deposittransitcheque_get_list_v1_response_m_payload->i_row_filtered
    if (!deposittransitcheque_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *deposittransitcheque_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque
    if (!deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque) {
        goto fail;
    }
    cJSON *a_obj_deposittransitcheque = cJSON_AddArrayToObject(item, "a_objDeposittransitcheque");
    if(a_obj_deposittransitcheque == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_deposittransitchequeListEntry;
    if (deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque) {
    list_ForEach(a_obj_deposittransitchequeListEntry, deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque) {
    cJSON *itemLocal = deposittransitcheque_list_element_convertToJSON(a_obj_deposittransitchequeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_deposittransitcheque, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload_parseFromJSON(cJSON *deposittransitcheque_get_list_v1_response_m_payloadJSON){

    deposittransitcheque_get_list_v1_response_m_payload_t *deposittransitcheque_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for deposittransitcheque_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for deposittransitcheque_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque
    list_t *a_obj_deposittransitchequeList = NULL;

    // deposittransitcheque_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // deposittransitcheque_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // deposittransitcheque_get_list_v1_response_m_payload->a_obj_deposittransitcheque
    cJSON *a_obj_deposittransitcheque = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_get_list_v1_response_m_payloadJSON, "a_objDeposittransitcheque");
    if (cJSON_IsNull(a_obj_deposittransitcheque)) {
        a_obj_deposittransitcheque = NULL;
    }
    if (!a_obj_deposittransitcheque) {
        goto end;
    }

    
    cJSON *a_obj_deposittransitcheque_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_deposittransitcheque)){
        goto end; //nonprimitive container
    }

    a_obj_deposittransitchequeList = list_createList();

    cJSON_ArrayForEach(a_obj_deposittransitcheque_local_nonprimitive,a_obj_deposittransitcheque )
    {
        if(!cJSON_IsObject(a_obj_deposittransitcheque_local_nonprimitive)){
            goto end;
        }
        deposittransitcheque_list_element_t *a_obj_deposittransitchequeItem = deposittransitcheque_list_element_parseFromJSON(a_obj_deposittransitcheque_local_nonprimitive);

        list_addElement(a_obj_deposittransitchequeList, a_obj_deposittransitchequeItem);
    }



    deposittransitcheque_get_list_v1_response_m_payload_local_var = deposittransitcheque_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_deposittransitchequeList
        );

    if (!deposittransitcheque_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return deposittransitcheque_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_deposittransitchequeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_deposittransitchequeList) {
            deposittransitcheque_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_deposittransitchequeList);
        a_obj_deposittransitchequeList = NULL;
    }
    return NULL;

}
