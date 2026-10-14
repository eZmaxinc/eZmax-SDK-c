#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "electronicfundstransfer_get_list_v1_response_m_payload.h"



static electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_electronicfundstransfer
    ) {
    electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload_local_var = malloc(sizeof(electronicfundstransfer_get_list_v1_response_m_payload_t));
    if (!electronicfundstransfer_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(electronicfundstransfer_get_list_v1_response_m_payload_local_var, 0, sizeof(electronicfundstransfer_get_list_v1_response_m_payload_t));
    electronicfundstransfer_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    electronicfundstransfer_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    electronicfundstransfer_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    electronicfundstransfer_get_list_v1_response_m_payload_local_var->a_obj_electronicfundstransfer = a_obj_electronicfundstransfer;
    return electronicfundstransfer_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_electronicfundstransfer
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
    electronicfundstransfer_get_list_v1_response_m_payload_t *result = electronicfundstransfer_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_electronicfundstransfer
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void electronicfundstransfer_get_list_v1_response_m_payload_free(electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload) {
    if(NULL == electronicfundstransfer_get_list_v1_response_m_payload){
        return ;
    }
    if(electronicfundstransfer_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "electronicfundstransfer_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (electronicfundstransfer_get_list_v1_response_m_payload->i_row_returned) {
        free(electronicfundstransfer_get_list_v1_response_m_payload->i_row_returned);
        electronicfundstransfer_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (electronicfundstransfer_get_list_v1_response_m_payload->i_row_filtered) {
        free(electronicfundstransfer_get_list_v1_response_m_payload->i_row_filtered);
        electronicfundstransfer_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer) {
        list_ForEach(listEntry, electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer) {
            electronicfundstransfer_list_element_free(listEntry->data);
        }
        list_freeList(electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer);
        electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer = NULL;
    }
    free(electronicfundstransfer_get_list_v1_response_m_payload);
}

cJSON *electronicfundstransfer_get_list_v1_response_m_payload_convertToJSON(electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // electronicfundstransfer_get_list_v1_response_m_payload->i_row_returned
    if (!electronicfundstransfer_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *electronicfundstransfer_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // electronicfundstransfer_get_list_v1_response_m_payload->i_row_filtered
    if (!electronicfundstransfer_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *electronicfundstransfer_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer
    if (!electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer) {
        goto fail;
    }
    cJSON *a_obj_electronicfundstransfer = cJSON_AddArrayToObject(item, "a_objElectronicfundstransfer");
    if(a_obj_electronicfundstransfer == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_electronicfundstransferListEntry;
    if (electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer) {
    list_ForEach(a_obj_electronicfundstransferListEntry, electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer) {
    cJSON *itemLocal = electronicfundstransfer_list_element_convertToJSON(a_obj_electronicfundstransferListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_electronicfundstransfer, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload_parseFromJSON(cJSON *electronicfundstransfer_get_list_v1_response_m_payloadJSON){

    electronicfundstransfer_get_list_v1_response_m_payload_t *electronicfundstransfer_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for electronicfundstransfer_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for electronicfundstransfer_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer
    list_t *a_obj_electronicfundstransferList = NULL;

    // electronicfundstransfer_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // electronicfundstransfer_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // electronicfundstransfer_get_list_v1_response_m_payload->a_obj_electronicfundstransfer
    cJSON *a_obj_electronicfundstransfer = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_get_list_v1_response_m_payloadJSON, "a_objElectronicfundstransfer");
    if (cJSON_IsNull(a_obj_electronicfundstransfer)) {
        a_obj_electronicfundstransfer = NULL;
    }
    if (!a_obj_electronicfundstransfer) {
        goto end;
    }

    
    cJSON *a_obj_electronicfundstransfer_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_electronicfundstransfer)){
        goto end; //nonprimitive container
    }

    a_obj_electronicfundstransferList = list_createList();

    cJSON_ArrayForEach(a_obj_electronicfundstransfer_local_nonprimitive,a_obj_electronicfundstransfer )
    {
        if(!cJSON_IsObject(a_obj_electronicfundstransfer_local_nonprimitive)){
            goto end;
        }
        electronicfundstransfer_list_element_t *a_obj_electronicfundstransferItem = electronicfundstransfer_list_element_parseFromJSON(a_obj_electronicfundstransfer_local_nonprimitive);

        list_addElement(a_obj_electronicfundstransferList, a_obj_electronicfundstransferItem);
    }



    electronicfundstransfer_get_list_v1_response_m_payload_local_var = electronicfundstransfer_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_electronicfundstransferList
        );

    if (!electronicfundstransfer_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return electronicfundstransfer_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_electronicfundstransferList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_electronicfundstransferList) {
            electronicfundstransfer_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_electronicfundstransferList);
        a_obj_electronicfundstransferList = NULL;
    }
    return NULL;

}
