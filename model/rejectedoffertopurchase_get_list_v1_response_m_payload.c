#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "rejectedoffertopurchase_get_list_v1_response_m_payload.h"



static rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_rejectedoffertopurchase
    ) {
    rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload_local_var = malloc(sizeof(rejectedoffertopurchase_get_list_v1_response_m_payload_t));
    if (!rejectedoffertopurchase_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    rejectedoffertopurchase_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    rejectedoffertopurchase_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    rejectedoffertopurchase_get_list_v1_response_m_payload_local_var->a_obj_rejectedoffertopurchase = a_obj_rejectedoffertopurchase;

    rejectedoffertopurchase_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return rejectedoffertopurchase_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_rejectedoffertopurchase
    ) {
    return rejectedoffertopurchase_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_rejectedoffertopurchase
        );
}

void rejectedoffertopurchase_get_list_v1_response_m_payload_free(rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload) {
    if(NULL == rejectedoffertopurchase_get_list_v1_response_m_payload){
        return ;
    }
    if(rejectedoffertopurchase_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "rejectedoffertopurchase_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase) {
        list_ForEach(listEntry, rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase) {
            rejectedoffertopurchase_list_element_free(listEntry->data);
        }
        list_freeList(rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase);
        rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase = NULL;
    }
    free(rejectedoffertopurchase_get_list_v1_response_m_payload);
}

cJSON *rejectedoffertopurchase_get_list_v1_response_m_payload_convertToJSON(rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // rejectedoffertopurchase_get_list_v1_response_m_payload->i_row_returned
    if (!rejectedoffertopurchase_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", rejectedoffertopurchase_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // rejectedoffertopurchase_get_list_v1_response_m_payload->i_row_filtered
    if (!rejectedoffertopurchase_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", rejectedoffertopurchase_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase
    if (!rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase) {
        goto fail;
    }
    cJSON *a_obj_rejectedoffertopurchase = cJSON_AddArrayToObject(item, "a_objRejectedoffertopurchase");
    if(a_obj_rejectedoffertopurchase == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_rejectedoffertopurchaseListEntry;
    if (rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase) {
    list_ForEach(a_obj_rejectedoffertopurchaseListEntry, rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase) {
    cJSON *itemLocal = rejectedoffertopurchase_list_element_convertToJSON(a_obj_rejectedoffertopurchaseListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_rejectedoffertopurchase, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload_parseFromJSON(cJSON *rejectedoffertopurchase_get_list_v1_response_m_payloadJSON){

    rejectedoffertopurchase_get_list_v1_response_m_payload_t *rejectedoffertopurchase_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase
    list_t *a_obj_rejectedoffertopurchaseList = NULL;

    // rejectedoffertopurchase_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // rejectedoffertopurchase_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // rejectedoffertopurchase_get_list_v1_response_m_payload->a_obj_rejectedoffertopurchase
    cJSON *a_obj_rejectedoffertopurchase = cJSON_GetObjectItemCaseSensitive(rejectedoffertopurchase_get_list_v1_response_m_payloadJSON, "a_objRejectedoffertopurchase");
    if (cJSON_IsNull(a_obj_rejectedoffertopurchase)) {
        a_obj_rejectedoffertopurchase = NULL;
    }
    if (!a_obj_rejectedoffertopurchase) {
        goto end;
    }

    
    cJSON *a_obj_rejectedoffertopurchase_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_rejectedoffertopurchase)){
        goto end; //nonprimitive container
    }

    a_obj_rejectedoffertopurchaseList = list_createList();

    cJSON_ArrayForEach(a_obj_rejectedoffertopurchase_local_nonprimitive,a_obj_rejectedoffertopurchase )
    {
        if(!cJSON_IsObject(a_obj_rejectedoffertopurchase_local_nonprimitive)){
            goto end;
        }
        rejectedoffertopurchase_list_element_t *a_obj_rejectedoffertopurchaseItem = rejectedoffertopurchase_list_element_parseFromJSON(a_obj_rejectedoffertopurchase_local_nonprimitive);

        list_addElement(a_obj_rejectedoffertopurchaseList, a_obj_rejectedoffertopurchaseItem);
    }


    rejectedoffertopurchase_get_list_v1_response_m_payload_local_var = rejectedoffertopurchase_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_rejectedoffertopurchaseList
        );

    return rejectedoffertopurchase_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_rejectedoffertopurchaseList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_rejectedoffertopurchaseList) {
            rejectedoffertopurchase_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_rejectedoffertopurchaseList);
        a_obj_rejectedoffertopurchaseList = NULL;
    }
    return NULL;

}
