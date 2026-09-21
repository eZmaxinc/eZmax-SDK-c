#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "notary_get_communication_count_v1_response_m_payload.h"



static notary_get_communication_count_v1_response_m_payload_t *notary_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    notary_get_communication_count_v1_response_m_payload_t *notary_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(notary_get_communication_count_v1_response_m_payload_t));
    if (!notary_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(notary_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(notary_get_communication_count_v1_response_m_payload_t));
    notary_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    notary_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return notary_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) notary_get_communication_count_v1_response_m_payload_t *notary_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    notary_get_communication_count_v1_response_m_payload_t *result = notary_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void notary_get_communication_count_v1_response_m_payload_free(notary_get_communication_count_v1_response_m_payload_t *notary_get_communication_count_v1_response_m_payload) {
    if(NULL == notary_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(notary_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "notary_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (notary_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(notary_get_communication_count_v1_response_m_payload->i_communication_count);
        notary_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(notary_get_communication_count_v1_response_m_payload);
}

cJSON *notary_get_communication_count_v1_response_m_payload_convertToJSON(notary_get_communication_count_v1_response_m_payload_t *notary_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // notary_get_communication_count_v1_response_m_payload->i_communication_count
    if (!notary_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *notary_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

notary_get_communication_count_v1_response_m_payload_t *notary_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *notary_get_communication_count_v1_response_m_payloadJSON){

    notary_get_communication_count_v1_response_m_payload_t *notary_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for notary_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // notary_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(notary_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    notary_get_communication_count_v1_response_m_payload_local_var = notary_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!notary_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return notary_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
