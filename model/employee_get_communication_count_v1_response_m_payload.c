#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "employee_get_communication_count_v1_response_m_payload.h"



static employee_get_communication_count_v1_response_m_payload_t *employee_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    employee_get_communication_count_v1_response_m_payload_t *employee_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(employee_get_communication_count_v1_response_m_payload_t));
    if (!employee_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(employee_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(employee_get_communication_count_v1_response_m_payload_t));
    employee_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    employee_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return employee_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) employee_get_communication_count_v1_response_m_payload_t *employee_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    employee_get_communication_count_v1_response_m_payload_t *result = employee_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void employee_get_communication_count_v1_response_m_payload_free(employee_get_communication_count_v1_response_m_payload_t *employee_get_communication_count_v1_response_m_payload) {
    if(NULL == employee_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(employee_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "employee_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (employee_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(employee_get_communication_count_v1_response_m_payload->i_communication_count);
        employee_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(employee_get_communication_count_v1_response_m_payload);
}

cJSON *employee_get_communication_count_v1_response_m_payload_convertToJSON(employee_get_communication_count_v1_response_m_payload_t *employee_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // employee_get_communication_count_v1_response_m_payload->i_communication_count
    if (!employee_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *employee_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

employee_get_communication_count_v1_response_m_payload_t *employee_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *employee_get_communication_count_v1_response_m_payloadJSON){

    employee_get_communication_count_v1_response_m_payload_t *employee_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for employee_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // employee_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(employee_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (cJSON_IsNull(i_communication_count)) {
        i_communication_count = NULL;
    }
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }
    i_communication_count_local_var = malloc(sizeof(int));
    if(!i_communication_count_local_var)
    {
        goto end;
    }
    *i_communication_count_local_var = i_communication_count->valuedouble;



    employee_get_communication_count_v1_response_m_payload_local_var = employee_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!employee_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return employee_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
