#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "officetaxreport_get_communication_count_v1_response_m_payload.h"



static officetaxreport_get_communication_count_v1_response_m_payload_t *officetaxreport_get_communication_count_v1_response_m_payload_create_internal(
    int *i_communication_count
    ) {
    officetaxreport_get_communication_count_v1_response_m_payload_t *officetaxreport_get_communication_count_v1_response_m_payload_local_var = malloc(sizeof(officetaxreport_get_communication_count_v1_response_m_payload_t));
    if (!officetaxreport_get_communication_count_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(officetaxreport_get_communication_count_v1_response_m_payload_local_var, 0, sizeof(officetaxreport_get_communication_count_v1_response_m_payload_t));
    officetaxreport_get_communication_count_v1_response_m_payload_local_var->_library_owned = 1;
    officetaxreport_get_communication_count_v1_response_m_payload_local_var->i_communication_count = i_communication_count;
    return officetaxreport_get_communication_count_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) officetaxreport_get_communication_count_v1_response_m_payload_t *officetaxreport_get_communication_count_v1_response_m_payload_create(
    int *i_communication_count
    ) {
    int *i_communication_count_copy = NULL;
    if (i_communication_count) {
        i_communication_count_copy = malloc(sizeof(int));
        if (i_communication_count_copy) *i_communication_count_copy = *i_communication_count;
    }
    officetaxreport_get_communication_count_v1_response_m_payload_t *result = officetaxreport_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_copy
        );
    if (!result) {
        free(i_communication_count_copy);
    }
    return result;
}

void officetaxreport_get_communication_count_v1_response_m_payload_free(officetaxreport_get_communication_count_v1_response_m_payload_t *officetaxreport_get_communication_count_v1_response_m_payload) {
    if(NULL == officetaxreport_get_communication_count_v1_response_m_payload){
        return ;
    }
    if(officetaxreport_get_communication_count_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "officetaxreport_get_communication_count_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (officetaxreport_get_communication_count_v1_response_m_payload->i_communication_count) {
        free(officetaxreport_get_communication_count_v1_response_m_payload->i_communication_count);
        officetaxreport_get_communication_count_v1_response_m_payload->i_communication_count = NULL;
    }
    free(officetaxreport_get_communication_count_v1_response_m_payload);
}

cJSON *officetaxreport_get_communication_count_v1_response_m_payload_convertToJSON(officetaxreport_get_communication_count_v1_response_m_payload_t *officetaxreport_get_communication_count_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // officetaxreport_get_communication_count_v1_response_m_payload->i_communication_count
    if (!officetaxreport_get_communication_count_v1_response_m_payload->i_communication_count) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iCommunicationCount", *officetaxreport_get_communication_count_v1_response_m_payload->i_communication_count) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

officetaxreport_get_communication_count_v1_response_m_payload_t *officetaxreport_get_communication_count_v1_response_m_payload_parseFromJSON(cJSON *officetaxreport_get_communication_count_v1_response_m_payloadJSON){

    officetaxreport_get_communication_count_v1_response_m_payload_t *officetaxreport_get_communication_count_v1_response_m_payload_local_var = NULL;

    // define the local variable for officetaxreport_get_communication_count_v1_response_m_payload->i_communication_count
    int *i_communication_count_local_var = NULL;

    // officetaxreport_get_communication_count_v1_response_m_payload->i_communication_count
    cJSON *i_communication_count = cJSON_GetObjectItemCaseSensitive(officetaxreport_get_communication_count_v1_response_m_payloadJSON, "iCommunicationCount");
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



    officetaxreport_get_communication_count_v1_response_m_payload_local_var = officetaxreport_get_communication_count_v1_response_m_payload_create_internal (
        i_communication_count_local_var
        );

    if (!officetaxreport_get_communication_count_v1_response_m_payload_local_var) {
        goto end;
    }

    return officetaxreport_get_communication_count_v1_response_m_payload_local_var;
end:
    if (i_communication_count_local_var) {
        free(i_communication_count_local_var);
        i_communication_count_local_var = NULL;
    }
    return NULL;

}
