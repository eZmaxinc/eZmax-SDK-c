#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_get_communication_count_v1_response_m_payload.h"



static ezsignfolder_get_communication_count_v1_response_m_payload_t *ezsignfolder_get_communication_count_v1_response_m_payload_create_internal(
    int i_communication_count
    ) {
    ezsignfolder_get_communication_count_v1_response_m_payload_t *ezsignfolder_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(ezsignfolder_get_communication_count_v1_response_m_payload_t));
    if (!ezsignfolder_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsignfolder_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    ezsignfolder_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsignfolder_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsignfolder_get_communication_count_v1_response_m_payload_t *ezsignfolder_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    return ezsignfolder_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count
        );
}

void ezsignfolder_get_communication_count_v1_response_m_payload_free(ezsignfolder_get_communication_count_v1_response_m_payload_t *ezsignfolder_get_communication_count_v1_response_m_payload) {
    if(NULL == ezsignfolder_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(ezsignfolder_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignfolder_get_communication_count_v1_response_m_payload);
}

cJSON *ezsignfolder_get_communication_count_v1_response_m_payload_convertToJSON(ezsignfolder_get_communication_count_v1_response_m_payload_t *ezsignfolder_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_get_communication_count_v1_response_m_payload->i_communication_count
    if (!ezsignfolder_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", ezsignfolder_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_get_communication_count_v1_response_m_payload_t *ezsignfolder_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *ezsignfolder_get_communication_count_v1_response_m_payloadJSON){

    ezsignfolder_get_communication_count_v1_response_m_payload_t *ezsignfolder_get_communication_count_v1_response_m_payload_local_var = NULL;

    // ezsignfolder_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(ezsignfolder_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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


    ezsignfolder_get_communication_count_v1_response_m_payload_local_var = ezsignfolder_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count->valuedouble
        );

    return ezsignfolder_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
