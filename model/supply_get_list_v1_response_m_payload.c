#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_get_list_v1_response_m_payload.h"



supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_supply
    ) {
    supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload_local_var = malloc(sizeof(supply_get_list_v1_response_m_payload_t));
    if (!supply_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    supply_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    supply_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    supply_get_list_v1_response_m_payload_local_var->a_obj_supply = a_obj_supply;

    return supply_get_list_v1_response_m_payload_local_var;
}


void supply_get_list_v1_response_m_payload_free(supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload) {
    if(NULL == supply_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (supply_get_list_v1_response_m_payload->a_obj_supply) {
        list_ForEach(listEntry, supply_get_list_v1_response_m_payload->a_obj_supply) {
            supply_list_element_free(listEntry->data);
        }
        list_freeList(supply_get_list_v1_response_m_payload->a_obj_supply);
        supply_get_list_v1_response_m_payload->a_obj_supply = NULL;
    }
    free(supply_get_list_v1_response_m_payload);
}

cJSON *supply_get_list_v1_response_m_payload_convertToJSON(supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // supply_get_list_v1_response_m_payload->i_row_returned
    if (!supply_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", supply_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // supply_get_list_v1_response_m_payload->i_row_filtered
    if (!supply_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", supply_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // supply_get_list_v1_response_m_payload->a_obj_supply
    if (!supply_get_list_v1_response_m_payload->a_obj_supply) {
        goto fail;
    }
    cJSON *a_obj_supply = cJSON_AddArrayToObject(item, "a_objSupply");
    if(a_obj_supply == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_supplyListEntry;
    if (supply_get_list_v1_response_m_payload->a_obj_supply) {
    list_ForEach(a_obj_supplyListEntry, supply_get_list_v1_response_m_payload->a_obj_supply) {
    cJSON *itemLocal = supply_list_element_convertToJSON(a_obj_supplyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_supply, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload_parseFromJSON(cJSON *supply_get_list_v1_response_m_payloadJSON){

    supply_get_list_v1_response_m_payload_t *supply_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for supply_get_list_v1_response_m_payload->a_obj_supply
    list_t *a_obj_supplyList = NULL;

    // supply_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(supply_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // supply_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(supply_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }

    // supply_get_list_v1_response_m_payload->a_obj_supply
    cJSON *a_obj_supply = cJSON_GetObjectItemCaseSensitive(supply_get_list_v1_response_m_payloadJSON, "a_objSupply");
    if (!a_obj_supply) {
        goto end;
    }

    
    cJSON *a_obj_supply_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_supply)){
        goto end; //nonprimitive container
    }

    a_obj_supplyList = list_createList();

    cJSON_ArrayForEach(a_obj_supply_local_nonprimitive,a_obj_supply )
    {
        if(!cJSON_IsObject(a_obj_supply_local_nonprimitive)){
            goto end;
        }
        supply_list_element_t *a_obj_supplyItem = supply_list_element_parseFromJSON(a_obj_supply_local_nonprimitive);

        list_addElement(a_obj_supplyList, a_obj_supplyItem);
    }


    supply_get_list_v1_response_m_payload_local_var = supply_get_list_v1_response_m_payload_create (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_supplyList
        );

    return supply_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_supplyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_supplyList) {
            supply_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_supplyList);
        a_obj_supplyList = NULL;
    }
    return NULL;

}
