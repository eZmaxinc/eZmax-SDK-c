#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_get_list_v1_response_m_payload.h"



billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_create(
    list_t *a_obj_billingentityinternal,
    int i_row_returned,
    int i_row_filtered
    ) {
    billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload_local_var = malloc(sizeof(billingentityinternal_get_list_v1_response_m_payload_t));
    if (!billingentityinternal_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    billingentityinternal_get_list_v1_response_m_payload_local_var->a_obj_billingentityinternal = a_obj_billingentityinternal;
    billingentityinternal_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    billingentityinternal_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return billingentityinternal_get_list_v1_response_m_payload_local_var;
}


void billingentityinternal_get_list_v1_response_m_payload_free(billingentityinternal_get_list_v1_response_m_payload_t *billingentityinternal_get_list_v1_response_m_payload) {
    if(NULL == billingentityinternal_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
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


    // billingentityinternal_get_list_v1_response_m_payload->i_row_returned
    if (!billingentityinternal_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", billingentityinternal_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // billingentityinternal_get_list_v1_response_m_payload->i_row_filtered
    if (!billingentityinternal_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", billingentityinternal_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
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

    // define the local list for billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal
    list_t *a_obj_billingentityinternalList = NULL;

    // billingentityinternal_get_list_v1_response_m_payload->a_obj_billingentityinternal
    cJSON *a_obj_billingentityinternal = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_list_v1_response_m_payloadJSON, "a_objBillingentityinternal");
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

    // billingentityinternal_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // billingentityinternal_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    billingentityinternal_get_list_v1_response_m_payload_local_var = billingentityinternal_get_list_v1_response_m_payload_create (
        a_obj_billingentityinternalList,
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return billingentityinternal_get_list_v1_response_m_payload_local_var;
end:
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
