#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_get_list_v1_response_m_payload.h"



static common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_create_internal(
    int *i_row_returned,
    int *i_row_filtered
    ) {
    common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_local_var = malloc(sizeof(common_get_list_v1_response_m_payload_t));
    if (!common_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(common_get_list_v1_response_m_payload_local_var, 0, sizeof(common_get_list_v1_response_m_payload_t));
    common_get_list_v1_response_m_payload_local_var->_library_owned = 1;
    common_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    common_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;
    return common_get_list_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_create(
    int *i_row_returned,
    int *i_row_filtered
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
    common_get_list_v1_response_m_payload_t *result = common_get_list_v1_response_m_payload_create_internal (
        i_row_returned_copy,
        i_row_filtered_copy
        );
    if (!result) {
        free(i_row_returned_copy);
        free(i_row_filtered_copy);
    }
    return result;
}

void common_get_list_v1_response_m_payload_free(common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload) {
    if(NULL == common_get_list_v1_response_m_payload){
        return ;
    }
    if(common_get_list_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_get_list_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_get_list_v1_response_m_payload->i_row_returned) {
        free(common_get_list_v1_response_m_payload->i_row_returned);
        common_get_list_v1_response_m_payload->i_row_returned = NULL;
    }
    if (common_get_list_v1_response_m_payload->i_row_filtered) {
        free(common_get_list_v1_response_m_payload->i_row_filtered);
        common_get_list_v1_response_m_payload->i_row_filtered = NULL;
    }
    free(common_get_list_v1_response_m_payload);
}

cJSON *common_get_list_v1_response_m_payload_convertToJSON(common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // common_get_list_v1_response_m_payload->i_row_returned
    if (!common_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", *common_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // common_get_list_v1_response_m_payload->i_row_filtered
    if (!common_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", *common_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_parseFromJSON(cJSON *common_get_list_v1_response_m_payloadJSON){

    common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_local_var = NULL;

    // define the local variable for common_get_list_v1_response_m_payload->i_row_returned
    int *i_row_returned_local_var = NULL;

    // define the local variable for common_get_list_v1_response_m_payload->i_row_filtered
    int *i_row_filtered_local_var = NULL;

    // common_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(common_get_list_v1_response_m_payloadJSON, "iRowReturned");
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

    // common_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(common_get_list_v1_response_m_payloadJSON, "iRowFiltered");
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



    common_get_list_v1_response_m_payload_local_var = common_get_list_v1_response_m_payload_create_internal (
        i_row_returned_local_var,
        i_row_filtered_local_var
        );

    if (!common_get_list_v1_response_m_payload_local_var) {
        goto end;
    }

    return common_get_list_v1_response_m_payload_local_var;
end:
    if (i_row_returned_local_var) {
        free(i_row_returned_local_var);
        i_row_returned_local_var = NULL;
    }
    if (i_row_filtered_local_var) {
        free(i_row_filtered_local_var);
        i_row_filtered_local_var = NULL;
    }
    return NULL;

}
