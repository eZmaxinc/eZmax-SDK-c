#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "purchase_get_communication_count_v1_response_m_payload.h"



static purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(purchase_get_communication_count_v1_response_m_payload_t));
    if (!purchase_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(purchase_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(purchase_get_communication_count_v1_response_m_payload_t));
    purchase_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    purchase_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return purchase_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    purchase_get_communication_count_v1_response_m_payload_t *result = purchase_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void purchase_get_communication_count_v1_response_m_payload_free(purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload) {
    if(NULL == purchase_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(purchase_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "purchase_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (purchase_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(purchase_get_communication_count_v1_response_m_payload->i_communication_count);
        purchase_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(purchase_get_communication_count_v1_response_m_payload);
}

cJSON *purchase_get_communication_count_v1_response_m_payload_convertToJSON(purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // purchase_get_communication_count_v1_response_m_payload->i_communication_count
    if (!purchase_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *purchase_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *purchase_get_communication_count_v1_response_m_payloadJSON){

    purchase_get_communication_count_v1_response_m_payload_t *purchase_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for purchase_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // purchase_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(purchase_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    purchase_get_communication_count_v1_response_m_payload_local_var = purchase_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!purchase_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return purchase_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
