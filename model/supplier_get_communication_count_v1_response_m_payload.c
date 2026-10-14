#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplier_get_communication_count_v1_response_m_payload.h"



static supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(supplier_get_communication_count_v1_response_m_payload_t));
    if (!supplier_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(supplier_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(supplier_get_communication_count_v1_response_m_payload_t));
    supplier_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    supplier_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return supplier_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    supplier_get_communication_count_v1_response_m_payload_t *result = supplier_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void supplier_get_communication_count_v1_response_m_payload_free(supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload) {
    if(NULL == supplier_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(supplier_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "supplier_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (supplier_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(supplier_get_communication_count_v1_response_m_payload->i_communication_count);
        supplier_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(supplier_get_communication_count_v1_response_m_payload);
}

cJSON *supplier_get_communication_count_v1_response_m_payload_convertToJSON(supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // supplier_get_communication_count_v1_response_m_payload->i_communication_count
    if (!supplier_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *supplier_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *supplier_get_communication_count_v1_response_m_payloadJSON){

    supplier_get_communication_count_v1_response_m_payload_t *supplier_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for supplier_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // supplier_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(supplier_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    supplier_get_communication_count_v1_response_m_payload_local_var = supplier_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!supplier_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return supplier_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
