#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_get_communication_count_v1_response_m_payload.h"



static salary_get_communication_count_v1_response_m_payload_t *salary_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    salary_get_communication_count_v1_response_m_payload_t *salary_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(salary_get_communication_count_v1_response_m_payload_t));
    if (!salary_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(salary_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(salary_get_communication_count_v1_response_m_payload_t));
    salary_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    salary_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return salary_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) salary_get_communication_count_v1_response_m_payload_t *salary_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    salary_get_communication_count_v1_response_m_payload_t *result = salary_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void salary_get_communication_count_v1_response_m_payload_free(salary_get_communication_count_v1_response_m_payload_t *salary_get_communication_count_v1_response_m_payload) {
    if(NULL == salary_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(salary_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "salary_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (salary_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(salary_get_communication_count_v1_response_m_payload->i_communication_count);
        salary_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(salary_get_communication_count_v1_response_m_payload);
}

cJSON *salary_get_communication_count_v1_response_m_payload_convertToJSON(salary_get_communication_count_v1_response_m_payload_t *salary_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // salary_get_communication_count_v1_response_m_payload->i_communication_count
    if (!salary_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *salary_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

salary_get_communication_count_v1_response_m_payload_t *salary_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *salary_get_communication_count_v1_response_m_payloadJSON){

    salary_get_communication_count_v1_response_m_payload_t *salary_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for salary_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // salary_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(salary_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    salary_get_communication_count_v1_response_m_payload_local_var = salary_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!salary_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return salary_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
