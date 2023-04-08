#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_get_autocomplete_v2_response_m_payload.h"



variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_variableexpense
    ) {
    variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload_local_var = malloc(sizeof(variableexpense_get_autocomplete_v2_response_m_payload_t));
    if (!variableexpense_get_autocomplete_v2_response_m_payload_local_var) {
        return NULL;
    }
    variableexpense_get_autocomplete_v2_response_m_payload_local_var->a_obj_variableexpense = a_obj_variableexpense;

    return variableexpense_get_autocomplete_v2_response_m_payload_local_var;
}


void variableexpense_get_autocomplete_v2_response_m_payload_free(variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload) {
    if(NULL == variableexpense_get_autocomplete_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense) {
        list_ForEach(listEntry, variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense) {
            variableexpense_autocomplete_element_response_free(listEntry->data);
        }
        list_freeList(variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense);
        variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense = NULL;
    }
    free(variableexpense_get_autocomplete_v2_response_m_payload);
}

cJSON *variableexpense_get_autocomplete_v2_response_m_payload_convertToJSON(variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense
    if(variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense) {
    cJSON *a_obj_variableexpense = cJSON_AddArrayToObject(item, "a_objVariableexpense");
    if(a_obj_variableexpense == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_variableexpenseListEntry;
    if (variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense) {
    list_ForEach(a_obj_variableexpenseListEntry, variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense) {
    cJSON *itemLocal = variableexpense_autocomplete_element_response_convertToJSON(a_obj_variableexpenseListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_variableexpense, itemLocal);
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

variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *variableexpense_get_autocomplete_v2_response_m_payloadJSON){

    variableexpense_get_autocomplete_v2_response_m_payload_t *variableexpense_get_autocomplete_v2_response_m_payload_local_var = NULL;

    // define the local list for variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense
    list_t *a_obj_variableexpenseList = NULL;

    // variableexpense_get_autocomplete_v2_response_m_payload->a_obj_variableexpense
    cJSON *a_obj_variableexpense = cJSON_GetObjectItemCaseSensitive(variableexpense_get_autocomplete_v2_response_m_payloadJSON, "a_objVariableexpense");
    if (a_obj_variableexpense) { 
    cJSON *a_obj_variableexpense_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_variableexpense)){
        goto end; //nonprimitive container
    }

    a_obj_variableexpenseList = list_createList();

    cJSON_ArrayForEach(a_obj_variableexpense_local_nonprimitive,a_obj_variableexpense )
    {
        if(!cJSON_IsObject(a_obj_variableexpense_local_nonprimitive)){
            goto end;
        }
        variableexpense_autocomplete_element_response_t *a_obj_variableexpenseItem = variableexpense_autocomplete_element_response_parseFromJSON(a_obj_variableexpense_local_nonprimitive);

        list_addElement(a_obj_variableexpenseList, a_obj_variableexpenseItem);
    }
    }


    variableexpense_get_autocomplete_v2_response_m_payload_local_var = variableexpense_get_autocomplete_v2_response_m_payload_create (
        a_obj_variableexpense ? a_obj_variableexpenseList : NULL
        );

    return variableexpense_get_autocomplete_v2_response_m_payload_local_var;
end:
    if (a_obj_variableexpenseList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_variableexpenseList) {
            variableexpense_autocomplete_element_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_variableexpenseList);
        a_obj_variableexpenseList = NULL;
    }
    return NULL;

}
