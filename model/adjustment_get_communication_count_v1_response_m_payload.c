#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "adjustment_get_communication_count_v1_response_m_payload.h"



static adjustment_get_communication_count_v1_response_m_payload_t *adjustment_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    adjustment_get_communication_count_v1_response_m_payload_t *adjustment_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(adjustment_get_communication_count_v1_response_m_payload_t));
    if (!adjustment_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(adjustment_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(adjustment_get_communication_count_v1_response_m_payload_t));
    adjustment_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    adjustment_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return adjustment_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) adjustment_get_communication_count_v1_response_m_payload_t *adjustment_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    adjustment_get_communication_count_v1_response_m_payload_t *result = adjustment_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void adjustment_get_communication_count_v1_response_m_payload_free(adjustment_get_communication_count_v1_response_m_payload_t *adjustment_get_communication_count_v1_response_m_payload) {
    if(NULL == adjustment_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(adjustment_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "adjustment_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (adjustment_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(adjustment_get_communication_count_v1_response_m_payload->i_communication_count);
        adjustment_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(adjustment_get_communication_count_v1_response_m_payload);
}

cJSON *adjustment_get_communication_count_v1_response_m_payload_convertToJSON(adjustment_get_communication_count_v1_response_m_payload_t *adjustment_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // adjustment_get_communication_count_v1_response_m_payload->i_communication_count
    if (!adjustment_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *adjustment_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

adjustment_get_communication_count_v1_response_m_payload_t *adjustment_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *adjustment_get_communication_count_v1_response_m_payloadJSON){

    adjustment_get_communication_count_v1_response_m_payload_t *adjustment_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for adjustment_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // adjustment_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(adjustment_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    adjustment_get_communication_count_v1_response_m_payload_local_var = adjustment_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!adjustment_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return adjustment_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
