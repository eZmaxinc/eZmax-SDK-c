#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lead_get_list_v1_response_m_payload.h"



static lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_lead
    ) {
    lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload_local_var = malloc(sizeof(lead_get_list_v1_response_m_payload_t));
    if (!lead_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    lead_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    lead_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    lead_get_list_v1_response_m_payload_local_var->a_obj_lead = a_obj_lead;

    lead_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return lead_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_lead
    ) {
    return lead_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_lead
        );
}

void lead_get_list_v1_response_m_payload_free(lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload) {
    if(NULL == lead_get_list_v1_response_m_payload){
        return ;
    }
    if(lead_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "lead_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (lead_get_list_v1_response_m_payload->a_obj_lead) {
        list_ForEach(listEntry, lead_get_list_v1_response_m_payload->a_obj_lead) {
            lead_list_element_free(listEntry->data);
        }
        list_freeList(lead_get_list_v1_response_m_payload->a_obj_lead);
        lead_get_list_v1_response_m_payload->a_obj_lead = NULL;
    }
    free(lead_get_list_v1_response_m_payload);
}

cJSON *lead_get_list_v1_response_m_payload_convertToJSON(lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // lead_get_list_v1_response_m_payload->i_row_returned
    if (!lead_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", lead_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // lead_get_list_v1_response_m_payload->i_row_filtered
    if (!lead_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", lead_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // lead_get_list_v1_response_m_payload->a_obj_lead
    if (!lead_get_list_v1_response_m_payload->a_obj_lead) {
        goto fail;
    }
    cJSON *a_obj_lead = cJSON_AddArrayToObject(item, "a_objLead");
    if(a_obj_lead == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_leadListEntry;
    if (lead_get_list_v1_response_m_payload->a_obj_lead) {
    list_ForEach(a_obj_leadListEntry, lead_get_list_v1_response_m_payload->a_obj_lead) {
    cJSON *itemLocal = lead_list_element_convertToJSON(a_obj_leadListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_lead, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload_parseFromJSON(cJSON *lead_get_list_v1_response_m_payloadJSON){

    lead_get_list_v1_response_m_payload_t *lead_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for lead_get_list_v1_response_m_payload->a_obj_lead
    list_t *a_obj_leadList = NULL;

    // lead_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(lead_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // lead_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(lead_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // lead_get_list_v1_response_m_payload->a_obj_lead
    cJSON *a_obj_lead = cJSON_GetObjectItemCaseSensitive(lead_get_list_v1_response_m_payloadJSON, "a_objLead");
    if (cJSON_IsNull(a_obj_lead)) {
        a_obj_lead = NULL;
    }
    if (!a_obj_lead) {
        goto end;
    }

    
    cJSON *a_obj_lead_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_lead)){
        goto end; //nonprimitive container
    }

    a_obj_leadList = list_createList();

    cJSON_ArrayForEach(a_obj_lead_local_nonprimitive,a_obj_lead )
    {
        if(!cJSON_IsObject(a_obj_lead_local_nonprimitive)){
            goto end;
        }
        lead_list_element_t *a_obj_leadItem = lead_list_element_parseFromJSON(a_obj_lead_local_nonprimitive);

        list_addElement(a_obj_leadList, a_obj_leadItem);
    }


    lead_get_list_v1_response_m_payload_local_var = lead_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_leadList
        );

    return lead_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_leadList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_leadList) {
            lead_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_leadList);
        a_obj_leadList = NULL;
    }
    return NULL;

}
