#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplier_get_list_v1_response_m_payload.h"



static supplier_get_list_v1_response_m_payload_t *supplier_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_supplier
    ) {
    supplier_get_list_v1_response_m_payload_t *supplier_get_list_v1_response_m_payload_local_var = malloc(sizeof(supplier_get_list_v1_response_m_payload_t));
    if (!supplier_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(supplier_get_list_v1_response_m_payload_local_var, 0, sizeof(supplier_get_list_v1_response_m_payload_t));
    supplier_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    supplier_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    supplier_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    supplier_get_list_v1_response_m_payload_local_var->a_obj_supplier = a_obj_supplier;
    return supplier_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) supplier_get_list_v1_response_m_payload_t *supplier_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_supplier
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
    supplier_get_list_v1_response_m_payload_t *result = supplier_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_supplier
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void supplier_get_list_v1_response_m_payload_free(supplier_get_list_v1_response_m_payload_t *supplier_get_list_v1_response_m_payload) {
    if(NULL == supplier_get_list_v1_response_m_payload){
        return ;
    }
    if(supplier_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "supplier_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (supplier_get_list_v1_response_m_payload->i_row_returned) {
        free(supplier_get_list_v1_response_m_payload->i_row_returned);
        supplier_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (supplier_get_list_v1_response_m_payload->i_row_filtered) {
        free(supplier_get_list_v1_response_m_payload->i_row_filtered);
        supplier_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (supplier_get_list_v1_response_m_payload->a_obj_supplier) {
        list_ForEach(listEntry, supplier_get_list_v1_response_m_payload->a_obj_supplier) {
            supplier_list_element_free(listEntry->data);
        }
        list_freeList(supplier_get_list_v1_response_m_payload->a_obj_supplier);
        supplier_get_list_v1_response_m_payload->a_obj_supplier = NULL;
    }
    free(supplier_get_list_v1_response_m_payload);
}

cJSON *supplier_get_list_v1_response_m_payload_convertToJSON(supplier_get_list_v1_response_m_payload_t *supplier_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // supplier_get_list_v1_response_m_payload->i_row_returned
    if (!supplier_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *supplier_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // supplier_get_list_v1_response_m_payload->i_row_filtered
    if (!supplier_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *supplier_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // supplier_get_list_v1_response_m_payload->a_obj_supplier
    if (!supplier_get_list_v1_response_m_payload->a_obj_supplier) {
        goto fail;
    }
    cJSON *a_obj_supplier = cJSON_AddArrayToObject(item, "a_objSupplier");
    if(a_obj_supplier == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_supplierListEntry;
    if (supplier_get_list_v1_response_m_payload->a_obj_supplier) {
    list_ForEach(a_obj_supplierListEntry, supplier_get_list_v1_response_m_payload->a_obj_supplier) {
    cJSON *itemLocal = supplier_list_element_convertToJSON(a_obj_supplierListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_supplier, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supplier_get_list_v1_response_m_payload_t *supplier_get_list_v1_response_m_payload_parseFromJSON(cJSON *supplier_get_list_v1_response_m_payloadJSON){

    supplier_get_list_v1_response_m_payload_t *supplier_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for supplier_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for supplier_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for supplier_get_list_v1_response_m_payload->a_obj_supplier
    list_t *a_obj_supplierList = NULL;

    // supplier_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(supplier_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // supplier_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(supplier_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // supplier_get_list_v1_response_m_payload->a_obj_supplier
    cJSON *a_obj_supplier = cJSON_GetObjectItemCaseSensitive(supplier_get_list_v1_response_m_payloadJSON, "a_objSupplier");
    if (cJSON_IsNull(a_obj_supplier)) {
        a_obj_supplier = NULL;
    }
    if (!a_obj_supplier) {
        goto end;
    }

    
    cJSON *a_obj_supplier_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_supplier)){
        goto end; //nonprimitive container
    }

    a_obj_supplierList = list_createList();

    cJSON_ArrayForEach(a_obj_supplier_local_nonprimitive,a_obj_supplier )
    {
        if(!cJSON_IsObject(a_obj_supplier_local_nonprimitive)){
            goto end;
        }
        supplier_list_element_t *a_obj_supplierItem = supplier_list_element_parseFromJSON(a_obj_supplier_local_nonprimitive);

        list_addElement(a_obj_supplierList, a_obj_supplierItem);
    }



    supplier_get_list_v1_response_m_payload_local_var = supplier_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_supplierList
        );

    if (!supplier_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return supplier_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_supplierList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_supplierList) {
            supplier_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_supplierList);
        a_obj_supplierList = NULL;
    }
    return NULL;

}
