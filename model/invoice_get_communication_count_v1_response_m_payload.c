#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_get_communication_count_v1_response_m_payload.h"



invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(invoice_get_communication_count_v1_response_m_payload_t));
    if (!invoice_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    invoice_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    return invoice_get_communication_count_v1_response_m_payload_local_var;
}


void invoice_get_communication_count_v1_response_m_payload_free(invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload) {
    if(NULL == invoice_get_communication_count_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(invoice_get_communication_count_v1_response_m_payload);
}

cJSON *invoice_get_communication_count_v1_response_m_payload_convertToJSON(invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // invoice_get_communication_count_v1_response_m_payload->i_communication_count
    if (!invoice_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", invoice_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *invoice_get_communication_count_v1_response_m_payloadJSON){

    invoice_get_communication_count_v1_response_m_payload_t *invoice_get_communication_count_v1_response_m_payload_local_var = NULL;

    // invoice_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(invoice_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }


    invoice_get_communication_count_v1_response_m_payload_local_var = invoice_get_communication_count_v1_response_m_payload_create (
        i_communication_count->valuedouble
        );

    return invoice_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
