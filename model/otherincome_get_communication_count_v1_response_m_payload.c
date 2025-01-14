#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "otherincome_get_communication_count_v1_response_m_payload.h"



otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload_create(
    int i_communication_count
    ) {
    otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(otherincome_get_communication_count_v1_response_m_payload_t));
    if (!otherincome_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    otherincome_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;

    return otherincome_get_communication_count_v1_response_m_payload_local_var;
}


void otherincome_get_communication_count_v1_response_m_payload_free(otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload) {
    if(NULL == otherincome_get_communication_count_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(otherincome_get_communication_count_v1_response_m_payload);
}

cJSON *otherincome_get_communication_count_v1_response_m_payload_convertToJSON(otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // otherincome_get_communication_count_v1_response_m_payload->i_communication_count
    if (!otherincome_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", otherincome_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *otherincome_get_communication_count_v1_response_m_payloadJSON){

    otherincome_get_communication_count_v1_response_m_payload_t *otherincome_get_communication_count_v1_response_m_payload_local_var = NULL;

    // otherincome_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(otherincome_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
    if (!i_communication_count) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_communication_count))
    {
    goto end; //Numeric
    }


    otherincome_get_communication_count_v1_response_m_payload_local_var = otherincome_get_communication_count_v1_response_m_payload_create (
        i_communication_count->valuedouble
        );

    return otherincome_get_communication_count_v1_response_m_payload_local_var;
end:
    return NULL;

}
