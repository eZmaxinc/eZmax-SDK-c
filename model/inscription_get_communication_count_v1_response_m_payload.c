#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscription_get_communication_count_v1_response_m_payload.h"



static inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(inscription_get_communication_count_v1_response_m_payload_t));
    if (!inscription_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(inscription_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(inscription_get_communication_count_v1_response_m_payload_t));
    inscription_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    inscription_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return inscription_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    inscription_get_communication_count_v1_response_m_payload_t *result = inscription_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void inscription_get_communication_count_v1_response_m_payload_free(inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload) {
    if(NULL == inscription_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(inscription_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscription_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscription_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(inscription_get_communication_count_v1_response_m_payload->i_communication_count);
        inscription_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(inscription_get_communication_count_v1_response_m_payload);
}

cJSON *inscription_get_communication_count_v1_response_m_payload_convertToJSON(inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscription_get_communication_count_v1_response_m_payload->i_communication_count
    if (!inscription_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *inscription_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_communication_count_v1_response_m_payloadJSON){

    inscription_get_communication_count_v1_response_m_payload_t *inscription_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for inscription_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // inscription_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(inscription_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    inscription_get_communication_count_v1_response_m_payload_local_var = inscription_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!inscription_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return inscription_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
