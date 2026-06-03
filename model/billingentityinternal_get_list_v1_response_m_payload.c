#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_get_list_v1_response_m_payload.h"



static billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_billingentityinternal
    ) {
    billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_local_var = malloc(sizeof(billingentityinternal_get_list_v1_response_m_payload_t));
    if (!billingentityinternal_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(billingentityinternal_get_list_v1_response_m_payload_local_var, 0, sizeof(billingentityinternal_get_list_v1_response_m_payload_t));
    billingentityinternal_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    billingentityinternal_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    billingentityinternal_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    billingentityinternal_get_list_v1_response_m_payload_local_var->a_obj_billingentityinternal = a_obj_billingentityinternal;
    return billingentityinternal_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_billingentityinternal
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
    billingentityinternal_get_list_v1_response_m_payload_t *result = billingentityinternal_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_billingentityinternal
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void billingentityinternal_get_list_v1_response_m_payload_free(billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload) {
    if(NULL == billingentityinternal_get_list_v1_response_m_payload){
        return ;
    }
    if(billingentityinternal_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "billingentityinternal_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_get_list_v1_response_m_payload->i_row_returned) {
        free(billingentityinternal_get_list_v1_response_m_payload->i_row_returned);
        billingentityinternal_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (billingentityinternal_get_list_v1_response_m_payload->i_row_filtered) {
        free(billingentityinternal_get_list_v1_response_m_payload->i_row_filtered);
        billingentityinternal_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal) {
        list_ForEach(listEntry, billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal) {
            billingentityinternal_list_element_free(listEntry->data);
        }
        list_freeList(billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal);
        billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal = NULL;
    }
    free(billingentityinternal_get_list_v1_response_m_payload);
}

cJSON *billingentityinternal_get_list_v1_response_m_payload_convertToJSON(billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_get_list_v1_response_m_payload->i_row_returned
    if (!billingentityinternal_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *billingentityinternal_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternal_get_list_v1_response_m_payload->i_row_filtered
    if (!billingentityinternal_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *billingentityinternal_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal
    if (!billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal) {
        goto fail;
    }
    cJSON *a_obj_billingentityinternal = cJSON_AddArrayToObject(item, "a_objBillingentityinternal");
    if(a_obj_billingentityinternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_billingentityinternalListEntry;
    if (billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal) {
    list_ForEach(a_obj_billingentityinternalListEntry, billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal) {
    cJSON *itemLocal = billingentityinternal_list_element_convertToJSON(a_obj_billingentityinternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_billingentityinternal, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_parseFromJSON(cJSON *billingentityinternal_get_list_v1_response_m_payloadJSON){

    billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for billingentityinternal_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for billingentityinternal_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal
    list_t *a_obj_billingentityinternalList = NULL;

    // billingentityinternal_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // billingentityinternal_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal
    cJSON *a_obj_billingentityinternal = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_list_v1_response_m_payloadJSON, "a_objBillingentityinternal");
    if (cJSON_IsNull(a_obj_billingentityinternal)) {
        a_obj_billingentityinternal = NULL;
    }
    if (!a_obj_billingentityinternal) {
        goto end;
    }

    
    cJSON *a_obj_billingentityinternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_billingentityinternal)){
        goto end; //nonprimitive container
    }

    a_obj_billingentityinternalList = list_createList();

    cJSON_ArrayForEach(a_obj_billingentityinternal_local_nonprimitive,a_obj_billingentityinternal )
    {
        if(!cJSON_IsObject(a_obj_billingentityinternal_local_nonprimitive)){
            goto end;
        }
        billingentityinternal_list_element_t *a_obj_billingentityinternalItem = billingentityinternal_list_element_parseFromJSON(a_obj_billingentityinternal_local_nonprimitive);

        list_addElement(a_obj_billingentityinternalList, a_obj_billingentityinternalItem);
    }



    billingentityinternal_get_list_v1_response_m_payload_local_var = billingentityinternal_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_billingentityinternalList
        );

    if (!billingentityinternal_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return billingentityinternal_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_billingentityinternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_billingentityinternalList) {
            billingentityinternal_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_billingentityinternalList);
        a_obj_billingentityinternalList = NULL;
    }
    return NULL;

}
