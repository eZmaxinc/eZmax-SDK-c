#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_get_list_v1_response_m_payload.h"



static salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_salary
    ) {
    salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload_local_var = malloc(sizeof(salary_get_list_v1_response_m_payload_t));
    if (!salary_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(salary_get_list_v1_response_m_payload_local_var, 0, sizeof(salary_get_list_v1_response_m_payload_t));
    salary_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    salary_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    salary_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    salary_get_list_v1_response_m_payload_local_var->a_obj_salary = a_obj_salary;
    return salary_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered,
    list_t *a_obj_salary
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
    salary_get_list_v1_response_m_payload_t *result = salary_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy,
        a_obj_salary
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void salary_get_list_v1_response_m_payload_free(salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload) {
    if(NULL == salary_get_list_v1_response_m_payload){
        return ;
    }
    if(salary_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "salary_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (salary_get_list_v1_response_m_payload->i_row_returned) {
        free(salary_get_list_v1_response_m_payload->i_row_returned);
        salary_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (salary_get_list_v1_response_m_payload->i_row_filtered) {
        free(salary_get_list_v1_response_m_payload->i_row_filtered);
        salary_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    if (salary_get_list_v1_response_m_payload->a_obj_salary) {
        list_ForEach(listEntry, salary_get_list_v1_response_m_payload->a_obj_salary) {
            salary_list_element_free(listEntry->data);
        }
        list_freeList(salary_get_list_v1_response_m_payload->a_obj_salary);
        salary_get_list_v1_response_m_payload->a_obj_salary = NULL;
    }
    free(salary_get_list_v1_response_m_payload);
}

cJSON *salary_get_list_v1_response_m_payload_convertToJSON(salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // salary_get_list_v1_response_m_payload->i_row_returned
    if (!salary_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *salary_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // salary_get_list_v1_response_m_payload->i_row_filtered
    if (!salary_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *salary_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }


    // salary_get_list_v1_response_m_payload->a_obj_salary
    if (!salary_get_list_v1_response_m_payload->a_obj_salary) {
        goto fail;
    }
    cJSON *a_obj_salary = cJSON_AddArrayToObject(item, "a_objSalary");
    if(a_obj_salary == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_salaryListEntry;
    if (salary_get_list_v1_response_m_payload->a_obj_salary) {
    list_ForEach(a_obj_salaryListEntry, salary_get_list_v1_response_m_payload->a_obj_salary) {
    cJSON *itemLocal = salary_list_element_convertToJSON(a_obj_salaryListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_salary, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload_parseFromJSON(cJSON *salary_get_list_v1_response_m_payloadJSON){

    salary_get_list_v1_response_m_payload_t *salary_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for salary_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for salary_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // define the local list for salary_get_list_v1_response_m_payload->a_obj_salary
    list_t *a_obj_salaryList = NULL;

    // salary_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(salary_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // salary_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(salary_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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

    // salary_get_list_v1_response_m_payload->a_obj_salary
    cJSON *a_obj_salary = cJSON_GetObjectItemCaseSensitive(salary_get_list_v1_response_m_payloadJSON, "a_objSalary");
    if (cJSON_IsNull(a_obj_salary)) {
        a_obj_salary = NULL;
    }
    if (!a_obj_salary) {
        goto end;
    }

    
    cJSON *a_obj_salary_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_salary)){
        goto end; //nonprimitive container
    }

    a_obj_salaryList = list_createList();

    cJSON_ArrayForEach(a_obj_salary_local_nonprimitive,a_obj_salary )
    {
        if(!cJSON_IsObject(a_obj_salary_local_nonprimitive)){
            goto end;
        }
        salary_list_element_t *a_obj_salaryItem = salary_list_element_parseFromJSON(a_obj_salary_local_nonprimitive);

        list_addElement(a_obj_salaryList, a_obj_salaryItem);
    }



    salary_get_list_v1_response_m_payload_local_var = salary_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var,
        a_obj_salaryList
        );

    if (!salary_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return salary_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    if (a_obj_salaryList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_salaryList) {
            salary_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_salaryList);
        a_obj_salaryList = NULL;
    }
    return NULL;

}
