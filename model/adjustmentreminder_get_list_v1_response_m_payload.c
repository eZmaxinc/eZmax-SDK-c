#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "adjustmentreminder_get_list_v1_response_m_payload.h"



static adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_adjustmentreminder
    ) {
    adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload_local_var = malloc(sizeof(adjustmentreminder_get_list_v1_response_m_payload_t));
    if (!adjustmentreminder_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(adjustmentreminder_get_list_v1_response_m_payload_local_var, 0, sizeof(adjustmentreminder_get_list_v1_response_m_payload_t));
    adjustmentreminder_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    adjustmentreminder_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    adjustmentreminder_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    adjustmentreminder_get_list_v1_response_m_payload_local_var->a_obj_adjustmentreminder = a_obj_adjustmentreminder;
    return adjustmentreminder_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_adjustmentreminder
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
    adjustmentreminder_get_list_v1_response_m_payload_t *result = adjustmentreminder_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_adjustmentreminder
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void adjustmentreminder_get_list_v1_response_m_payload_free(adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload) {
    if(NULL == adjustmentreminder_get_list_v1_response_m_payload){
        return ;
    }
    if(adjustmentreminder_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "adjustmentreminder_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (adjustmentreminder_get_list_v1_response_m_payload->i_row_returned) {
        free(adjustmentreminder_get_list_v1_response_m_payload->i_row_returned);
        adjustmentreminder_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (adjustmentreminder_get_list_v1_response_m_payload->i_row_filtered) {
        free(adjustmentreminder_get_list_v1_response_m_payload->i_row_filtered);
        adjustmentreminder_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder) {
        list_ForEach(listEntry, adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder) {
            adjustmentreminder_list_element_free(listEntry->data);
        }
        list_freeList(adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder);
        adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder = NULL;
    }
    free(adjustmentreminder_get_list_v1_response_m_payload);
}

cJSON *adjustmentreminder_get_list_v1_response_m_payload_convertToJSON(adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // adjustmentreminder_get_list_v1_response_m_payload->i_row_returned
    if (!adjustmentreminder_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *adjustmentreminder_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // adjustmentreminder_get_list_v1_response_m_payload->i_row_filtered
    if (!adjustmentreminder_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *adjustmentreminder_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder
    if (!adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder) {
        goto fail;
    }
    cJSON *a_obj_adjustmentreminder = cJSON_AddArrayToObject(item, "a_objAdjustmentreminder");
    if(a_obj_adjustmentreminder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_adjustmentreminderListEntry;
    if (adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder) {
    list_ForEach(a_obj_adjustmentreminderListEntry, adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder) {
    cJSON *itemLocal = adjustmentreminder_list_element_convertToJSON(a_obj_adjustmentreminderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_adjustmentreminder, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload_parseFromJSON(cJSON *adjustmentreminder_get_list_v1_response_m_payloadJSON){

    adjustmentreminder_get_list_v1_response_m_payload_t *adjustmentreminder_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for adjustmentreminder_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for adjustmentreminder_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder
    list_t *a_obj_adjustmentreminderList = NULL;

    // adjustmentreminder_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // adjustmentreminder_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // adjustmentreminder_get_list_v1_response_m_payload->a_obj_adjustmentreminder
    cJSON *a_obj_adjustmentreminder = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_get_list_v1_response_m_payloadJSON, "a_objAdjustmentreminder");
    if (cJSON_IsNull(a_obj_adjustmentreminder)) {
        a_obj_adjustmentreminder = NULL;
    }
    if (!a_obj_adjustmentreminder) {
        goto end;
    }

    
    cJSON *a_obj_adjustmentreminder_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_adjustmentreminder)){
        goto end; //nonprimitive container
    }

    a_obj_adjustmentreminderList = list_createList();

    cJSON_ArrayForEach(a_obj_adjustmentreminder_local_nonprimitive,a_obj_adjustmentreminder )
    {
        if(!cJSON_IsObject(a_obj_adjustmentreminder_local_nonprimitive)){
            goto end;
        }
        adjustmentreminder_list_element_t *a_obj_adjustmentreminderItem = adjustmentreminder_list_element_parseFromJSON(a_obj_adjustmentreminder_local_nonprimitive);

        list_addElement(a_obj_adjustmentreminderList, a_obj_adjustmentreminderItem);
    }



    adjustmentreminder_get_list_v1_response_m_payload_local_var = adjustmentreminder_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_adjustmentreminderList
        );

    if (!adjustmentreminder_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return adjustmentreminder_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_adjustmentreminderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_adjustmentreminderList) {
            adjustmentreminder_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_adjustmentreminderList);
        a_obj_adjustmentreminderList = NULL;
    }
    return NULL;

}
