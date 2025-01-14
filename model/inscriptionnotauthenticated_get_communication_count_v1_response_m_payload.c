#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionnotauthenticated_get_communication_count_v1_response_m_payload.h"



inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_t));
    if (!inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    return inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_local_var;
}


void inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_free(inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_count_v1_response_m_payload) {
    if(NULL == inscriptionnotauthenticated_get_communication_count_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(inscriptionnotauthenticated_get_communication_count_v1_response_m_payload);
}

cJSON *inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_convertToJSON(inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionnotauthenticated_get_communication_count_v1_response_m_payload->i_communication_count
    if (!inscriptionnotauthenticated_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", inscriptionnotauthenticated_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *inscriptionnotauthenticated_get_communication_count_v1_response_m_payloadJSON){

    inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_t *inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_local_var = NULL;

    // inscriptionnotauthenticated_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(inscriptionnotauthenticated_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }


    inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_local_var = inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_create (
        i_communication_count->valuedouble
        );

    return inscriptionnotauthenticated_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
