#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_get_list_v1_response_m_payload_all_of.h"



variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_variableexpense
    ) {
    variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(variableexpense_get_list_v1_response_m_payload_all_of_t));
    if (!variableexpense_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    variableexpense_get_list_v1_response_m_payload_all_of_local_var->a_obj_variableexpense = a_obj_variableexpense;

    return variableexpense_get_list_v1_response_m_payload_all_of_local_var;
}


void variableexpense_get_list_v1_response_m_payload_all_of_free(variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of) {
    if(NULL == variableexpense_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense) {
        list_ForEach(listEntry, variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense) {
            variableexpense_list_element_free(listEntry->data);
        }
        list_freeList(variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense);
        variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense = NULL;
    }
    free(variableexpense_get_list_v1_response_m_payload_all_of);
}

cJSON *variableexpense_get_list_v1_response_m_payload_all_of_convertToJSON(variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense
    if (!variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense) {
        goto fail;
    }
    cJSON *a_obj_variableexpense = cJSON_AddArrayToObject(item, "a_objVariableexpense");
    if(a_obj_variableexpense == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_variableexpenseListEntry;
    if (variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense) {
    list_ForEach(a_obj_variableexpenseListEntry, variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense) {
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

variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *variableexpense_get_list_v1_response_m_payload_all_ofJSON){

    variableexpense_get_list_v1_response_m_payload_all_of_t *variableexpense_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense
    list_t *a_obj_variableexpenseList = NULL;

    // variableexpense_get_list_v1_response_m_payload_all_of->a_obj_variableexpense
    cJSON *a_obj_variableexpense = cJSON_GetObjectItemCaseSensitive(variableexpense_get_list_v1_response_m_payload_all_ofJSON, "a_objVariableexpense");
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


    variableexpense_get_list_v1_response_m_payload_all_of_local_var = variableexpense_get_list_v1_response_m_payload_all_of_create (
        a_obj_variableexpenseList
        );

    return variableexpense_get_list_v1_response_m_payload_all_of_local_var;
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
