#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_get_list_v1_response_m_payload.h"



common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_create(
    int i_row_returned,
    int i_row_filtered
    ) {
    common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload_local_var = malloc(sizeof(common_get_list_v1_response_m_payload_t));
    if (!common_get_list_v1_response_m_payload_local_var) {
        return NULL;
    }
    common_get_list_v1_response_m_payload_local_var->i_row_returned = i_row_returned;
    common_get_list_v1_response_m_payload_local_var->i_row_filtered = i_row_filtered;

    return common_get_list_v1_response_m_payload_local_var;
}


void common_get_list_v1_response_m_payload_free(common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload) {
    if(NULL == common_get_list_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(common_get_list_v1_response_m_payload);
}

cJSON *common_get_list_v1_response_m_payload_convertToJSON(common_get_list_v1_response_m_payload_t *common_get_list_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // common_get_list_v1_response_m_payload->i_row_returned
    if (!common_get_list_v1_response_m_payload->i_row_returned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowReturned", common_get_list_v1_response_m_payload->i_row_returned) == NULL) {
    goto fail; //Numeric
    }


    // common_get_list_v1_response_m_payload->i_row_filtered
    if (!common_get_list_v1_response_m_payload->i_row_filtered) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iRowFiltered", common_get_list_v1_response_m_payload->i_row_filtered) == NULL) {
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

    // common_get_list_v1_response_m_payload->i_row_returned
    cJSON *i_row_returned = cJSON_GetObjectItemCaseSensitive(common_get_list_v1_response_m_payloadJSON, "iRowReturned");
    if (!i_row_returned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_returned))
    {
    goto end; //Numeric
    }

    // common_get_list_v1_response_m_payload->i_row_filtered
    cJSON *i_row_filtered = cJSON_GetObjectItemCaseSensitive(common_get_list_v1_response_m_payloadJSON, "iRowFiltered");
    if (!i_row_filtered) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_row_filtered))
    {
    goto end; //Numeric
    }


    common_get_list_v1_response_m_payload_local_var = common_get_list_v1_response_m_payload_create (
        i_row_returned->valuedouble,
        i_row_filtered->valuedouble
        );

    return common_get_list_v1_response_m_payload_local_var;
end:
    return NULL;

}
