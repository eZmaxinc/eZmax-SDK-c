#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_get_list_v1_response_m_payload.h"



static variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload_create_internal(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_variableexpense
    ) {
    variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload_local_var = malloc(sizeof(variableexpense_get_list_v1_response_m_payload_t));
    if (!variableexpense_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    variableexpense_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    variableexpense_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    variableexpense_get_list_v1_response_m_payload_local_var->a_obj_variableexpense = a_obj_variableexpense;

    variableexpense_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    return variableexpense_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered,
    list_t *a_obj_variableexpense
    ) {
    return variableexpense_get_list_v1_response_m_payload_create_internal (
        i_row_returned,
        i_row_filtered,
        a_obj_variableexpense
        );
}

void variableexpense_get_list_v1_response_m_payload_free(variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload) {
    if(NULL == variableexpense_get_list_v1_response_m_payload){
        return ;
    }
    if(variableexpense_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "variableexpense_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense) {
        list_ForEach(listEntry, variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense) {
            variableexpense_list_element_free(listEntry->data);
        }
        list_freeList(variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense);
        variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense = NULL;
    }
    free(variableexpense_get_list_v1_response_m_payload);
}

cJSON *variableexpense_get_list_v1_response_m_payload_convertToJSON(variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_get_list_v1_response_m_payload->i_row_returned
    if (!variableexpense_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", variableexpense_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // variableexpense_get_list_v1_response_m_payload->i_row_filtered
    if (!variableexpense_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", variableexpense_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense
    if (!variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense) {
        goto fail;
    }
    cJSON *a_obj_variableexpense = cJSON_AddArrayToObject(item, "a_objVariableexpense");
    if(a_obj_variableexpense == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_variableexpenseListEntry;
    if (variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense) {
    list_ForEach(a_obj_variableexpenseListEntry, variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense) {
    cJSON *itemLocal = variableexpense_list_element_convertToJSON(a_obj_variableexpenseListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_variableexpense, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload_parseFromJSON(cJSON *variableexpense_get_list_v1_response_m_payloadJSON){

    variableexpense_get_list_v1_response_m_payload_t *variableexpense_get_list_v1_response_m_payload_local_var = NULL;

    // define the local list for variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense
    list_t *a_obj_variableexpenseList = NULL;

    // variableexpense_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(variableexpense_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // variableexpense_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(variableexpense_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // variableexpense_get_list_v1_response_m_payload->a_obj_variableexpense
    cJSON *a_obj_variableexpense = cJSON_GetObjectItemCaseSensitive(variableexpense_get_list_v1_response_m_payloadJSON, "a_objVariableexpense");
    if (cJSON_IsNull(a_obj_variableexpense)) {
        a_obj_variableexpense = NULL;
    }
    if (!a_obj_variableexpense) {
        goto end;
    }

    
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
        variableexpense_list_element_t *a_obj_variableexpenseItem = variableexpense_list_element_parseFromJSON(a_obj_variableexpense_local_nonprimitive);

        list_addElement(a_obj_variableexpenseList, a_obj_variableexpenseItem);
    }


    variableexpense_get_list_v1_response_m_payload_local_var = variableexpense_get_list_v1_response_m_payload_create_internal (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble,
        a_obj_variableexpenseList
        );

    return variableexpense_get_list_v1_response_m_payload_local_var;
end:
    if (a_obj_variableexpenseList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_variableexpenseList) {
            variableexpense_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_variableexpenseList);
        a_obj_variableexpenseList = NULL;
    }
    return NULL;

}
