#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_get_autocomplete_v2_response_m_payload.h"



billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_billingentityinternal
    ) {
    billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(billingentityinternal_get_autocomplete_v2_response_m_payload_t));
    if (!billingentityinternal_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    billingentityinternal_get_autocomplete_v2_response_m_payload_local_var->a_obj_billingentityinternal = a_obj_billingentityinternal;

    return billingentityinternal_get_autocomplete_v2_response_m_payload_local_var;
}


void billingentityinternal_get_autocomplete_v2_response_m_payload_free(billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload) {
    if(NULL == billingentityinternal_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal) {
        list_ForEach(listEntry, billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal) {
            billingentityinternal_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal);
        billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal = NULL;
    }
    free(billingentityinternal_get_autocomplete_v2_response_m_payload);
}

cJSON *billingentityinternal_get_autocomplete_v2_response_m_payload_convertToJSON(billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal
    if (!billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal) {
        goto fail;
    }
    cJSON *a_obj_billingentityinternal = cJSON_AddArrayToObject(item, "a_objBillingentityinternal");
    if(a_obj_billingentityinternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_billingentityinternalListEntry;
    if (billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal) {
    list_ForEach(a_obj_billingentityinternalListEntry, billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal) {
    cJSON *itemLocal = billingentityinternal_autocomplete_element_response_convertToJSON(a_obj_billingentityinternalListEntry->data);
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

billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *billingentityinternal_get_autocomplete_v2_response_m_payloadJSON){

    billingentityinternal_get_autocomplete_v2_response_m_payload_t *billingentityinternal_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal
    list_t *a_obj_billingentityinternalList = NULL;

    // billingentityinternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityinternal
    cJSON *a_obj_billingentityinternal = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_autocomplete_v2_response_m_payloadJSON, "a_objBillingentityinternal");
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
        billingentityinternal_autocomplete_element_response_t *a_obj_billingentityinternalItem = billingentityinternal_autocomplete_element_response_parseFromJSON(a_obj_billingentityinternal_local_nonprimitive);

        list_addElement(a_obj_billingentityinternalList, a_obj_billingentityinternalItem);
    }


    billingentityinternal_get_autocomplete_v2_response_m_payload_local_var = billingentityinternal_get_autocomplete_v2_response_m_payload_create (
        a_obj_billingentityinternalList
        );

    return billingentityinternal_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_billingentityinternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_billingentityinternalList) {
            billingentityinternal_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_billingentityinternalList);
        a_obj_billingentityinternalList = NULL;
    }
    return NULL;

}
