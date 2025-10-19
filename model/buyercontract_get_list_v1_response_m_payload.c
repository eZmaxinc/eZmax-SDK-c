#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_get_list_v1_response_m_payload.h"



static buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_buyercontract
    ) {
    buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload_local_var = malloc(sizeof(buyercontract_get_list_v1_response_m_payload_t));
    if (!buyercontract_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    buyercontract_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    buyercontract_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    buyercontract_get_list_v1_response_m_payload_local_var->a_obj_buyercontract = a_obj_buyercontract;

    buyercontract_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return buyercontract_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_buyercontract
    ) {
    return buyercontract_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_buyercontract
        );
}

void buyercontract_get_list_v1_response_m_payload_free(buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload) {
    if(NULL == buyercontract_get_list_v1_response_m_payload){
        return ;
    }
    if(buyercontract_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buyercontract_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract) {
        list_ForEach(listEntry, buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract) {
            buyercontract_list_element_free(listEntry->data);
        }
        list_freeList(buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract);
        buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract = NULL;
    }
    free(buyercontract_get_list_v1_response_m_payload);
}

cJSON *buyercontract_get_list_v1_response_m_payload_convertToJSON(buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // buyercontract_get_list_v1_response_m_payload->i_row_returned
    if (!buyercontract_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", buyercontract_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // buyercontract_get_list_v1_response_m_payload->i_row_filtered
    if (!buyercontract_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", buyercontract_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract
    if (!buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract) {
        goto fail;
    }
    cJSON *a_obj_buyercontract = cJSON_AddArrayToObject(item, "a_objBuyercontract");
    if(a_obj_buyercontract == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_buyercontractListEntry;
    if (buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract) {
    list_ForEach(a_obj_buyercontractListEntry, buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract) {
    cJSON *itemLocal = buyercontract_list_element_convertToJSON(a_obj_buyercontractListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_buyercontract, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload_parseFromJSON(cJSON *buyercontract_get_list_v1_response_m_payloadJSON){

    buyercontract_get_list_v1_response_m_payload_t *buyercontract_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract
    list_t *a_obj_buyercontractList = NULL;

    // buyercontract_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(buyercontract_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // buyercontract_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(buyercontract_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // buyercontract_get_list_v1_response_m_payload->a_obj_buyercontract
    cJSON *a_obj_buyercontract = cJSON_GetObjectItemCaseSensitive(buyercontract_get_list_v1_response_m_payloadJSON, "a_objBuyercontract");
    if (cJSON_IsNull(a_obj_buyercontract)) {
        a_obj_buyercontract = NULL;
    }
    if (!a_obj_buyercontract) {
        goto end;
    }

    
    cJSON *a_obj_buyercontract_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_buyercontract)){
        goto end; //nonprimitive container
    }

    a_obj_buyercontractList = list_createList();

    cJSON_ArrayForEach(a_obj_buyercontract_local_nonprimitive,a_obj_buyercontract )
    {
        if(!cJSON_IsObject(a_obj_buyercontract_local_nonprimitive)){
            goto end;
        }
        buyercontract_list_element_t *a_obj_buyercontractItem = buyercontract_list_element_parseFromJSON(a_obj_buyercontract_local_nonprimitive);

        list_addElement(a_obj_buyercontractList, a_obj_buyercontractItem);
    }


    buyercontract_get_list_v1_response_m_payload_local_var = buyercontract_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_buyercontractList
        );

    return buyercontract_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_buyercontractList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_buyercontractList) {
            buyercontract_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_buyercontractList);
        a_obj_buyercontractList = NULL;
    }
    return NULL;

}
