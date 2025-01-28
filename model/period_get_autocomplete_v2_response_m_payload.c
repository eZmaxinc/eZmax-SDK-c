#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "period_get_autocomplete_v2_response_m_payload.h"



static period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload_create_internal(
    list_t *a_obj_period
    ) {
    period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(period_get_autocomplete_v2_response_m_payload_t));
    if (!period_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    period_get_autocomplete_v2_response_m_payload_local_var->a_obj_period = a_obj_period;

    period_get_autocomplete_v2_response_m_payload_local_var->_library_owned = 1;
    return period_get_autocomplete_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_period
    ) {
    return period_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_period
        );
}

void period_get_autocomplete_v2_response_m_payload_free(period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload) {
    if(NULL == period_get_autocomplete_v2_response_m_payload){
        return ;
    }
    if(period_get_autocomplete_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "period_get_autocomplete_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (period_get_autocomplete_v2_response_m_payload->a_obj_period) {
        list_ForEach(listEntry, period_get_autocomplete_v2_response_m_payload->a_obj_period) {
            period_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(period_get_autocomplete_v2_response_m_payload->a_obj_period);
        period_get_autocomplete_v2_response_m_payload->a_obj_period = NULL;
    }
    free(period_get_autocomplete_v2_response_m_payload);
}

cJSON *period_get_autocomplete_v2_response_m_payload_convertToJSON(period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // period_get_autocomplete_v2_response_m_payload->a_obj_period
    if (!period_get_autocomplete_v2_response_m_payload->a_obj_period) {
        goto fail;
    }
    cJSON *a_obj_period = cJSON_AddArrayToObject(item, "a_objPeriod");
    if(a_obj_period == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_periodListEntry;
    if (period_get_autocomplete_v2_response_m_payload->a_obj_period) {
    list_ForEach(a_obj_periodListEntry, period_get_autocomplete_v2_response_m_payload->a_obj_period) {
    cJSON *itemLocal = period_autocomplete_element_response_convertToJSON(a_obj_periodListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_period, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *period_get_autocomplete_v2_response_m_payloadJSON){

    period_get_autocomplete_v2_response_m_payload_t *period_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for period_get_autocomplete_v2_response_m_payload->a_obj_period
    list_t *a_obj_periodList = NULL;

    // period_get_autocomplete_v2_response_m_payload->a_obj_period
    cJSON *a_obj_period = cJSON_GetObjectItemCaseSensitive(period_get_autocomplete_v2_response_m_payloadJSON, "a_objPeriod");
    if (cJSON_IsNull(a_obj_period)) {
        a_obj_period = NULL;
    }
    if (!a_obj_period) {
        goto end;
    }

    
    cJSON *a_obj_period_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_period)){
        goto end; //nonprimitive container
    }

    a_obj_periodList = list_createList();

    cJSON_ArrayForEach(a_obj_period_local_nonprimitive,a_obj_period )
    {
        if(!cJSON_IsObject(a_obj_period_local_nonprimitive)){
            goto end;
        }
        period_autocomplete_element_response_t *a_obj_periodItem = period_autocomplete_element_response_parseFromJSON(a_obj_period_local_nonprimitive);

        list_addElement(a_obj_periodList, a_obj_periodItem);
    }


    period_get_autocomplete_v2_response_m_payload_local_var = period_get_autocomplete_v2_response_m_payload_create_internal (
        a_obj_periodList
        );

    return period_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_periodList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_periodList) {
            period_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_periodList);
        a_obj_periodList = NULL;
    }
    return NULL;

}
