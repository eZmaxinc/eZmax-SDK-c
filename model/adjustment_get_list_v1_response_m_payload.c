#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "adjustment_get_list_v1_response_m_payload.h"



static adjustment_get_list_v1_response_m_payload_t *adjustment_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_adjustment
    ) {
    adjustment_get_list_v1_response_m_payload_t *adjustment_get_list_v1_response_m_payload_local_var = malloc(sizeof(adjustment_get_list_v1_response_m_payload_t));
    if (!adjustment_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(adjustment_get_list_v1_response_m_payload_local_var, 0, sizeof(adjustment_get_list_v1_response_m_payload_t));
    adjustment_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    adjustment_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    adjustment_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    adjustment_get_list_v1_response_m_payload_local_var->a_obj_adjustment = a_obj_adjustment;
    return adjustment_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) adjustment_get_list_v1_response_m_payload_t *adjustment_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_adjustment
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
    adjustment_get_list_v1_response_m_payload_t *result = adjustment_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_adjustment
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void adjustment_get_list_v1_response_m_payload_free(adjustment_get_list_v1_response_m_payload_t *adjustment_get_list_v1_response_m_payload) {
    if(NULL == adjustment_get_list_v1_response_m_payload){
        return ;
    }
    if(adjustment_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "adjustment_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (adjustment_get_list_v1_response_m_payload->i_row_returned) {
        free(adjustment_get_list_v1_response_m_payload->i_row_returned);
        adjustment_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (adjustment_get_list_v1_response_m_payload->i_row_filtered) {
        free(adjustment_get_list_v1_response_m_payload->i_row_filtered);
        adjustment_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (adjustment_get_list_v1_response_m_payload->a_obj_adjustment) {
        list_ForEach(listEntry, adjustment_get_list_v1_response_m_payload->a_obj_adjustment) {
            adjustment_list_element_free(listEntry->data);
        }
        list_freeList(adjustment_get_list_v1_response_m_payload->a_obj_adjustment);
        adjustment_get_list_v1_response_m_payload->a_obj_adjustment = NULL;
    }
    free(adjustment_get_list_v1_response_m_payload);
}

cJSON *adjustment_get_list_v1_response_m_payload_convertToJSON(adjustment_get_list_v1_response_m_payload_t *adjustment_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // adjustment_get_list_v1_response_m_payload->i_row_returned
    if (!adjustment_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *adjustment_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // adjustment_get_list_v1_response_m_payload->i_row_filtered
    if (!adjustment_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *adjustment_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // adjustment_get_list_v1_response_m_payload->a_obj_adjustment
    if (!adjustment_get_list_v1_response_m_payload->a_obj_adjustment) {
        goto fail;
    }
    cJSON *a_obj_adjustment = cJSON_AddArrayToObject(item, "a_objAdjustment");
    if(a_obj_adjustment == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_adjustmentListEntry;
    if (adjustment_get_list_v1_response_m_payload->a_obj_adjustment) {
    list_ForEach(a_obj_adjustmentListEntry, adjustment_get_list_v1_response_m_payload->a_obj_adjustment) {
    cJSON *itemLocal = adjustment_list_element_convertToJSON(a_obj_adjustmentListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_adjustment, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

adjustment_get_list_v1_response_m_payload_t *adjustment_get_list_v1_response_m_payload_parseFromJSON(cJSON *adjustment_get_list_v1_response_m_payloadJSON){

    adjustment_get_list_v1_response_m_payload_t *adjustment_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for adjustment_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for adjustment_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for adjustment_get_list_v1_response_m_payload->a_obj_adjustment
    list_t *a_obj_adjustmentList = NULL;

    // adjustment_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(adjustment_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // adjustment_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(adjustment_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // adjustment_get_list_v1_response_m_payload->a_obj_adjustment
    cJSON *a_obj_adjustment = cJSON_GetObjectItemCaseSensitive(adjustment_get_list_v1_response_m_payloadJSON, "a_objAdjustment");
    if (cJSON_IsNull(a_obj_adjustment)) {
        a_obj_adjustment = NULL;
    }
    if (!a_obj_adjustment) {
        goto end;
    }

    
    cJSON *a_obj_adjustment_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_adjustment)){
        goto end; //nonprimitive container
    }

    a_obj_adjustmentList = list_createList();

    cJSON_ArrayForEach(a_obj_adjustment_local_nonprimitive,a_obj_adjustment )
    {
        if(!cJSON_IsObject(a_obj_adjustment_local_nonprimitive)){
            goto end;
        }
        adjustment_list_element_t *a_obj_adjustmentItem = adjustment_list_element_parseFromJSON(a_obj_adjustment_local_nonprimitive);

        list_addElement(a_obj_adjustmentList, a_obj_adjustmentItem);
    }



    adjustment_get_list_v1_response_m_payload_local_var = adjustment_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_adjustmentList
        );

    if (!adjustment_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return adjustment_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_adjustmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_adjustmentList) {
            adjustment_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_adjustmentList);
        a_obj_adjustmentList = NULL;
    }
    return NULL;

}
