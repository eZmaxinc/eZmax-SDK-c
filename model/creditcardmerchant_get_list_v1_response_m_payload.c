#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_get_list_v1_response_m_payload.h"



static creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_creditcardmerchant
    ) {
    creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload_local_var = malloc(sizeof(creditcardmerchant_get_list_v1_response_m_payload_t));
    if (!creditcardmerchant_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    creditcardmerchant_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    creditcardmerchant_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    creditcardmerchant_get_list_v1_response_m_payload_local_var->a_obj_creditcardmerchant = a_obj_creditcardmerchant;

    creditcardmerchant_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return creditcardmerchant_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_creditcardmerchant
    ) {
    return creditcardmerchant_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_creditcardmerchant
        );
}

void creditcardmerchant_get_list_v1_response_m_payload_free(creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload) {
    if(NULL == creditcardmerchant_get_list_v1_response_m_payload){
        return ;
    }
    if(creditcardmerchant_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant) {
        list_ForEach(listEntry, creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant) {
            creditcardmerchant_list_element_free(listEntry->data);
        }
        list_freeList(creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant);
        creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant = NULL;
    }
    free(creditcardmerchant_get_list_v1_response_m_payload);
}

cJSON *creditcardmerchant_get_list_v1_response_m_payload_convertToJSON(creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_get_list_v1_response_m_payload->i_row_returned
    if (!creditcardmerchant_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", creditcardmerchant_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_get_list_v1_response_m_payload->i_row_filtered
    if (!creditcardmerchant_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", creditcardmerchant_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant
    if (!creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant) {
        goto fail;
    }
    cJSON *a_obj_creditcardmerchant = cJSON_AddArrayToObject(item, "a_objCreditcardmerchant");
    if(a_obj_creditcardmerchant == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_creditcardmerchantListEntry;
    if (creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant) {
    list_ForEach(a_obj_creditcardmerchantListEntry, creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant) {
    cJSON *itemLocal = creditcardmerchant_list_element_convertToJSON(a_obj_creditcardmerchantListEntry->data);
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

creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload_parseFromJSON(cJSON *creditcardmerchant_get_list_v1_response_m_payloadJSON){

    creditcardmerchant_get_list_v1_response_m_payload_t *creditcardmerchant_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant
    list_t *a_obj_creditcardmerchantList = NULL;

    // creditcardmerchant_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // creditcardmerchant_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // creditcardmerchant_get_list_v1_response_m_payload->a_obj_creditcardmerchant
    cJSON *a_obj_creditcardmerchant = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_get_list_v1_response_m_payloadJSON, "a_objCreditcardmerchant");
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
        creditcardmerchant_list_element_t *a_obj_creditcardmerchantItem = creditcardmerchant_list_element_parseFromJSON(a_obj_creditcardmerchant_local_nonprimitive);

        list_addElement(a_obj_creditcardmerchantList, a_obj_creditcardmerchantItem);
    }


    creditcardmerchant_get_list_v1_response_m_payload_local_var = creditcardmerchant_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_creditcardmerchantList
        );

    return creditcardmerchant_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_creditcardmerchantList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_creditcardmerchantList) {
            creditcardmerchant_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_creditcardmerchantList);
        a_obj_creditcardmerchantList = NULL;
    }
    return NULL;

}
