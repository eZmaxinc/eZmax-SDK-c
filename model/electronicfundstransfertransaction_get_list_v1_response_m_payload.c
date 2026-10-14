#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "electronicfundstransfertransaction_get_list_v1_response_m_payload.h"



static electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_electronicfundstransfertransaction
    ) {
    electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var = malloc(sizeof(electronicfundstransfertransaction_get_list_v1_response_m_payload_t));
    if (!electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var, 0, sizeof(electronicfundstransfertransaction_get_list_v1_response_m_payload_t));
    electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var->a_obj_electronicfundstransfertransaction = a_obj_electronicfundstransfertransaction;
    return electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_electronicfundstransfertransaction
    ) {
    int *i_row_returned_copy = NULL;
    if (i_row_returned) {
        i_row_returned_copy = malloc(sizeof(int));
        if (i_row_returned_copy) *i_row_returned_copy = *i_row_returned;
    }
    int *i_row_filtered_copy = NULL;
    if (i_row_filtered) {
        i_row_filtered_copy = malloc(sizeof(int));
        if (i_row_filtered_copy) *i_row_filtered_copy = *i_row_filtered;
    }
    electronicfundstransfertransaction_get_list_v1_response_m_payload_t *result = electronicfundstransfertransaction_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_electronicfundstransfertransaction
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void electronicfundstransfertransaction_get_list_v1_response_m_payload_free(electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload) {
    if(NULL == electronicfundstransfertransaction_get_list_v1_response_m_payload){
        return ;
    }
    if(electronicfundstransfertransaction_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "electronicfundstransfertransaction_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_returned) {
        free(electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_returned);
        electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_filtered) {
        free(electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_filtered);
        electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction) {
        list_ForEach(listEntry, electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction) {
            electronicfundstransfertransaction_list_element_free(listEntry->data);
        }
        list_freeList(electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction);
        electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction = NULL;
    }
    free(electronicfundstransfertransaction_get_list_v1_response_m_payload);
}

cJSON *electronicfundstransfertransaction_get_list_v1_response_m_payload_convertToJSON(electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_returned
    if (!electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_filtered
    if (!electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction
    if (!electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction) {
        goto fail;
    }
    cJSON *a_obj_electronicfundstransfertransaction = cJSON_AddArrayToObject(item, "a_objElectronicfundstransfertransaction");
    if(a_obj_electronicfundstransfertransaction == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_electronicfundstransfertransactionListEntry;
    if (electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction) {
    list_ForEach(a_obj_electronicfundstransfertransactionListEntry, electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction) {
    cJSON *itemLocal = electronicfundstransfertransaction_list_element_convertToJSON(a_obj_electronicfundstransfertransactionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_electronicfundstransfertransaction, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload_parseFromJSON(cJSON *electronicfundstransfertransaction_get_list_v1_response_m_payloadJSON){

    electronicfundstransfertransaction_get_list_v1_response_m_payload_t *electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction
    list_t *a_obj_electronicfundstransfertransactionList = NULL;

    // electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(electronicfundstransfertransaction_get_list_v1_response_m_payloadJSON, "iRowReturned");
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
    i_row_returned_local_var = malloc(sizeof(int));
    if(!i_row_returned_local_var)
    {
        goto end;
    }
    *i_row_returned_local_var = i_row_returned->valuedouble;

    // electronicfundstransfertransaction_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(electronicfundstransfertransaction_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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
    i_row_filtered_local_var = malloc(sizeof(int));
    if(!i_row_filtered_local_var)
    {
        goto end;
    }
    *i_row_filtered_local_var = i_row_filtered->valuedouble;

    // electronicfundstransfertransaction_get_list_v1_response_m_payload->a_obj_electronicfundstransfertransaction
    cJSON *a_obj_electronicfundstransfertransaction = cJSON_GetObjectItemCaseSensitive(electronicfundstransfertransaction_get_list_v1_response_m_payloadJSON, "a_objElectronicfundstransfertransaction");
    if (cJSON_IsNull(a_obj_electronicfundstransfertransaction)) {
        a_obj_electronicfundstransfertransaction = NULL;
    }
    if (!a_obj_electronicfundstransfertransaction) {
        goto end;
    }

    
    cJSON *a_obj_electronicfundstransfertransaction_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_electronicfundstransfertransaction)){
        goto end; //nonprimitive container
    }

    a_obj_electronicfundstransfertransactionList = list_createList();

    cJSON_ArrayForEach(a_obj_electronicfundstransfertransaction_local_nonprimitive,a_obj_electronicfundstransfertransaction )
    {
        if(!cJSON_IsObject(a_obj_electronicfundstransfertransaction_local_nonprimitive)){
            goto end;
        }
        electronicfundstransfertransaction_list_element_t *a_obj_electronicfundstransfertransactionItem = electronicfundstransfertransaction_list_element_parseFromJSON(a_obj_electronicfundstransfertransaction_local_nonprimitive);

        list_addElement(a_obj_electronicfundstransfertransactionList, a_obj_electronicfundstransfertransactionItem);
    }



    electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var = electronicfundstransfertransaction_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_electronicfundstransfertransactionList
        );

    if (!electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return electronicfundstransfertransaction_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_electronicfundstransfertransactionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_electronicfundstransfertransactionList) {
            electronicfundstransfertransaction_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_electronicfundstransfertransactionList);
        a_obj_electronicfundstransfertransactionList = NULL;
    }
    return NULL;

}
