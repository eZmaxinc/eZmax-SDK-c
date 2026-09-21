#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "purchase_get_list_v1_response_m_payload.h"



static purchase_get_list_v1_response_m_payload_t *purchase_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_purchase
    ) {
    purchase_get_list_v1_response_m_payload_t *purchase_get_list_v1_response_m_payload_local_var = malloc(sizeof(purchase_get_list_v1_response_m_payload_t));
    if (!purchase_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(purchase_get_list_v1_response_m_payload_local_var, 0, sizeof(purchase_get_list_v1_response_m_payload_t));
    purchase_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    purchase_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    purchase_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    purchase_get_list_v1_response_m_payload_local_var->a_obj_purchase = a_obj_purchase;
    return purchase_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) purchase_get_list_v1_response_m_payload_t *purchase_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_purchase
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
    purchase_get_list_v1_response_m_payload_t *result = purchase_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_purchase
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void purchase_get_list_v1_response_m_payload_free(purchase_get_list_v1_response_m_payload_t *purchase_get_list_v1_response_m_payload) {
    if(NULL == purchase_get_list_v1_response_m_payload){
        return ;
    }
    if(purchase_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "purchase_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (purchase_get_list_v1_response_m_payload->i_row_returned) {
        free(purchase_get_list_v1_response_m_payload->i_row_returned);
        purchase_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (purchase_get_list_v1_response_m_payload->i_row_filtered) {
        free(purchase_get_list_v1_response_m_payload->i_row_filtered);
        purchase_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (purchase_get_list_v1_response_m_payload->a_obj_purchase) {
        list_ForEach(listEntry, purchase_get_list_v1_response_m_payload->a_obj_purchase) {
            purchase_list_element_free(listEntry->data);
        }
        list_freeList(purchase_get_list_v1_response_m_payload->a_obj_purchase);
        purchase_get_list_v1_response_m_payload->a_obj_purchase = NULL;
    }
    free(purchase_get_list_v1_response_m_payload);
}

cJSON *purchase_get_list_v1_response_m_payload_convertToJSON(purchase_get_list_v1_response_m_payload_t *purchase_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // purchase_get_list_v1_response_m_payload->i_row_returned
    if (!purchase_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *purchase_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // purchase_get_list_v1_response_m_payload->i_row_filtered
    if (!purchase_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *purchase_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // purchase_get_list_v1_response_m_payload->a_obj_purchase
    if (!purchase_get_list_v1_response_m_payload->a_obj_purchase) {
        goto fail;
    }
    cJSON *a_obj_purchase = cJSON_AddArrayToObject(item, "a_objPurchase");
    if(a_obj_purchase == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_purchaseListEntry;
    if (purchase_get_list_v1_response_m_payload->a_obj_purchase) {
    list_ForEach(a_obj_purchaseListEntry, purchase_get_list_v1_response_m_payload->a_obj_purchase) {
    cJSON *itemLocal = purchase_list_element_convertToJSON(a_obj_purchaseListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_purchase, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

purchase_get_list_v1_response_m_payload_t *purchase_get_list_v1_response_m_payload_parseFromJSON(cJSON *purchase_get_list_v1_response_m_payloadJSON){

    purchase_get_list_v1_response_m_payload_t *purchase_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for purchase_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for purchase_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for purchase_get_list_v1_response_m_payload->a_obj_purchase
    list_t *a_obj_purchaseList = NULL;

    // purchase_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(purchase_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // purchase_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(purchase_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // purchase_get_list_v1_response_m_payload->a_obj_purchase
    cJSON *a_obj_purchase = cJSON_GetObjectItemCaseSensitive(purchase_get_list_v1_response_m_payloadJSON, "a_objPurchase");
    if (cJSON_IsNull(a_obj_purchase)) {
        a_obj_purchase = NULL;
    }
    if (!a_obj_purchase) {
        goto end;
    }

    
    cJSON *a_obj_purchase_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_purchase)){
        goto end; //nonprimitive container
    }

    a_obj_purchaseList = list_createList();

    cJSON_ArrayForEach(a_obj_purchase_local_nonprimitive,a_obj_purchase )
    {
        if(!cJSON_IsObject(a_obj_purchase_local_nonprimitive)){
            goto end;
        }
        purchase_list_element_t *a_obj_purchaseItem = purchase_list_element_parseFromJSON(a_obj_purchase_local_nonprimitive);

        list_addElement(a_obj_purchaseList, a_obj_purchaseItem);
    }



    purchase_get_list_v1_response_m_payload_local_var = purchase_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_purchaseList
        );

    if (!purchase_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return purchase_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_purchaseList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_purchaseList) {
            purchase_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_purchaseList);
        a_obj_purchaseList = NULL;
    }
    return NULL;

}
