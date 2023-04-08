#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityexternal_get_autocomplete_v2_response_m_payload.h"



billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_billingentityexternal
    ) {
    billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(billingentityexternal_get_autocomplete_v2_response_m_payload_t));
    if (!billingentityexternal_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    billingentityexternal_get_autocomplete_v2_response_m_payload_local_var->a_obj_billingentityexternal = a_obj_billingentityexternal;

    return billingentityexternal_get_autocomplete_v2_response_m_payload_local_var;
}


void billingentityexternal_get_autocomplete_v2_response_m_payload_free(billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload) {
    if(NULL == billingentityexternal_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal) {
        list_ForEach(listEntry, billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal) {
            billingentityexternal_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal);
        billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal = NULL;
    }
    free(billingentityexternal_get_autocomplete_v2_response_m_payload);
}

cJSON *billingentityexternal_get_autocomplete_v2_response_m_payload_convertToJSON(billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal
    if(billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal) {
    cJSON *a_obj_billingentityexternal = cJSON_AddArrayToObject(item, "a_objBillingentityexternal");
    if(a_obj_billingentityexternal == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_billingentityexternalListEntry;
    if (billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal) {
    list_ForEach(a_obj_billingentityexternalListEntry, billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal) {
    cJSON *itemLocal = billingentityexternal_autocomplete_element_response_convertToJSON(a_obj_billingentityexternalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_billingentityexternal, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *billingentityexternal_get_autocomplete_v2_response_m_payloadJSON){

    billingentityexternal_get_autocomplete_v2_response_m_payload_t *billingentityexternal_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal
    list_t *a_obj_billingentityexternalList = NULL;

    // billingentityexternal_get_autocomplete_v2_response_m_payload->a_obj_billingentityexternal
    cJSON *a_obj_billingentityexternal = cJSON_GetObjectItemCaseSensitive(billingentityexternal_get_autocomplete_v2_response_m_payloadJSON, "a_objBillingentityexternal");
    if (a_obj_billingentityexternal) { 
    cJSON *a_obj_billingentityexternal_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_billingentityexternal)){
        goto end; //nonprimitive container
    }

    a_obj_billingentityexternalList = list_createList();

    cJSON_ArrayForEach(a_obj_billingentityexternal_local_nonprimitive,a_obj_billingentityexternal )
    {
        if(!cJSON_IsObject(a_obj_billingentityexternal_local_nonprimitive)){
            goto end;
        }
        billingentityexternal_autocomplete_element_response_t *a_obj_billingentityexternalItem = billingentityexternal_autocomplete_element_response_parseFromJSON(a_obj_billingentityexternal_local_nonprimitive);

        list_addElement(a_obj_billingentityexternalList, a_obj_billingentityexternalItem);
    }
    }


    billingentityexternal_get_autocomplete_v2_response_m_payload_local_var = billingentityexternal_get_autocomplete_v2_response_m_payload_create (
        a_obj_billingentityexternal ? a_obj_billingentityexternalList : NULL
        );

    return billingentityexternal_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_billingentityexternalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_billingentityexternalList) {
            billingentityexternal_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_billingentityexternalList);
        a_obj_billingentityexternalList = NULL;
    }
    return NULL;

}
