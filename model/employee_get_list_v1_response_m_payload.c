#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_get_list_v1_response_m_payload.h"



static employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_employee
    ) {
    employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload_local_var = malloc(sizeof(employee_get_list_v1_response_m_payload_t));
    if (!employee_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(employee_get_list_v1_response_m_payload_local_var, 0, sizeof(employee_get_list_v1_response_m_payload_t));
    employee_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    employee_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    employee_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    employee_get_list_v1_response_m_payload_local_var->a_obj_employee = a_obj_employee;
    return employee_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_employee
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
    employee_get_list_v1_response_m_payload_t *result = employee_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_employee
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void employee_get_list_v1_response_m_payload_free(employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload) {
    if(NULL == employee_get_list_v1_response_m_payload){
        return ;
    }
    if(employee_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "employee_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (employee_get_list_v1_response_m_payload->i_row_returned) {
        free(employee_get_list_v1_response_m_payload->i_row_returned);
        employee_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (employee_get_list_v1_response_m_payload->i_row_filtered) {
        free(employee_get_list_v1_response_m_payload->i_row_filtered);
        employee_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (employee_get_list_v1_response_m_payload->a_obj_employee) {
        list_ForEach(listEntry, employee_get_list_v1_response_m_payload->a_obj_employee) {
            employee_list_element_free(listEntry->data);
        }
        list_freeList(employee_get_list_v1_response_m_payload->a_obj_employee);
        employee_get_list_v1_response_m_payload->a_obj_employee = NULL;
    }
    free(employee_get_list_v1_response_m_payload);
}

cJSON *employee_get_list_v1_response_m_payload_convertToJSON(employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // employee_get_list_v1_response_m_payload->i_row_returned
    if (!employee_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *employee_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // employee_get_list_v1_response_m_payload->i_row_filtered
    if (!employee_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *employee_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // employee_get_list_v1_response_m_payload->a_obj_employee
    if (!employee_get_list_v1_response_m_payload->a_obj_employee) {
        goto fail;
    }
    cJSON *a_obj_employee = cJSON_AddArrayToObject(item, "a_objEmployee");
    if(a_obj_employee == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_employeeListEntry;
    if (employee_get_list_v1_response_m_payload->a_obj_employee) {
    list_ForEach(a_obj_employeeListEntry, employee_get_list_v1_response_m_payload->a_obj_employee) {
    cJSON *itemLocal = employee_list_element_convertToJSON(a_obj_employeeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_employee, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload_parseFromJSON(cJSON *employee_get_list_v1_response_m_payloadJSON){

    employee_get_list_v1_response_m_payload_t *employee_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for employee_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for employee_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for employee_get_list_v1_response_m_payload->a_obj_employee
    list_t *a_obj_employeeList = NULL;

    // employee_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(employee_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // employee_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(employee_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // employee_get_list_v1_response_m_payload->a_obj_employee
    cJSON *a_obj_employee = cJSON_GetObjectItemCaseSensitive(employee_get_list_v1_response_m_payloadJSON, "a_objEmployee");
    if (cJSON_IsNull(a_obj_employee)) {
        a_obj_employee = NULL;
    }
    if (!a_obj_employee) {
        goto end;
    }

    
    cJSON *a_obj_employee_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_employee)){
        goto end; //nonprimitive container
    }

    a_obj_employeeList = list_createList();

    cJSON_ArrayForEach(a_obj_employee_local_nonprimitive,a_obj_employee )
    {
        if(!cJSON_IsObject(a_obj_employee_local_nonprimitive)){
            goto end;
        }
        employee_list_element_t *a_obj_employeeItem = employee_list_element_parseFromJSON(a_obj_employee_local_nonprimitive);

        list_addElement(a_obj_employeeList, a_obj_employeeItem);
    }



    employee_get_list_v1_response_m_payload_local_var = employee_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_employeeList
        );

    if (!employee_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return employee_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_employeeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_employeeList) {
            employee_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_employeeList);
        a_obj_employeeList = NULL;
    }
    return NULL;

}
