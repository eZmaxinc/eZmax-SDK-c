#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontemp_get_communication_count_v1_response_m_payload.h"



inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(inscriptiontemp_get_communication_count_v1_response_m_payload_t));
    if (!inscriptiontemp_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptiontemp_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    return inscriptiontemp_get_communication_count_v1_response_m_payload_local_var;
}


void inscriptiontemp_get_communication_count_v1_response_m_payload_free(inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload) {
    if(NULL == inscriptiontemp_get_communication_count_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(inscriptiontemp_get_communication_count_v1_response_m_payload);
}

cJSON *inscriptiontemp_get_communication_count_v1_response_m_payload_convertToJSON(inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontemp_get_communication_count_v1_response_m_payload->i_communication_count
    if (!inscriptiontemp_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", inscriptiontemp_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *inscriptiontemp_get_communication_count_v1_response_m_payloadJSON){

    inscriptiontemp_get_communication_count_v1_response_m_payload_t *inscriptiontemp_get_communication_count_v1_response_m_payload_local_var = NULL;

    // inscriptiontemp_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(inscriptiontemp_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }


    inscriptiontemp_get_communication_count_v1_response_m_payload_local_var = inscriptiontemp_get_communication_count_v1_response_m_payload_create (
        i_communication_count->valuedouble
        );

    return inscriptiontemp_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
