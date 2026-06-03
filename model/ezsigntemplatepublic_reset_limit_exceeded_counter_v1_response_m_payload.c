#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload.h"



static ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_create_internal(
    char *dt_ezsigntemplatepublic_limitexceededsince
    ) {
    ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var, 0, sizeof(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t));
    ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var->_library_owned = 1;
    ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var->dt_ezsigntemplatepublic_limitexceededsince = dt_ezsigntemplatepublic_limitexceededsince;
    return ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_create(
    char *dt_ezsigntemplatepublic_limitexceededsince
    ) {
    ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *result = ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_create_internal (
        dt_ezsigntemplatepublic_limitexceededsince
        );
    if (!result) {
    }
    return result;
}

void ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_free(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload->dt_ezsigntemplatepublic_limitexceededsince) {
        free(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload->dt_ezsigntemplatepublic_limitexceededsince);
        ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload->dt_ezsigntemplatepublic_limitexceededsince = NULL;
    }
    free(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload);
}

cJSON *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload->dt_ezsigntemplatepublic_limitexceededsince
    if (!ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload->dt_ezsigntemplatepublic_limitexceededsince) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzsigntemplatepublicLimitexceededsince", ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload->dt_ezsigntemplatepublic_limitexceededsince) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payloadJSON){

    ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_t *ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var = NULL;

    char *dt_ezsigntemplatepublic_limitexceededsince_local_str = NULL;

    // ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload->dt_ezsigntemplatepublic_limitexceededsince
    cJSON *dt_ezsigntemplatepublic_limitexceededsince = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payloadJSON, "dtEzsigntemplatepublicLimitexceededsince");
    if (cJSON_IsNull(dt_ezsigntemplatepublic_limitexceededsince)) {
        dt_ezsigntemplatepublic_limitexceededsince = NULL;
    }
    if (!dt_ezsigntemplatepublic_limitexceededsince) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezsigntemplatepublic_limitexceededsince))
    {
    goto end; //String
    }


    if (dt_ezsigntemplatepublic_limitexceededsince && !cJSON_IsNull(dt_ezsigntemplatepublic_limitexceededsince)) dt_ezsigntemplatepublic_limitexceededsince_local_str = strdup(dt_ezsigntemplatepublic_limitexceededsince->valuestring);

    ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var = ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_create_internal (
        dt_ezsigntemplatepublic_limitexceededsince_local_str
        );

    if (!ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsigntemplatepublic_reset_limit_exceeded_counter_v1_response_m_payload_local_var;
end:
    if (dt_ezsigntemplatepublic_limitexceededsince_local_str) {
        free(dt_ezsigntemplatepublic_limitexceededsince_local_str);
        dt_ezsigntemplatepublic_limitexceededsince_local_str = NULL;
    }
    return NULL;

}
