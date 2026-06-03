#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_reset_url_v1_response_m_payload.h"



static ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload_create_internal(
    char *s_ezsigntemplatepublic_url
    ) {
    ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_reset_url_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var, 0, sizeof(ezsigntemplatepublic_reset_url_v1_response_m_payload_t));
    ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var->_library_owned = 1;
    ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var->s_ezsigntemplatepublic_url = s_ezsigntemplatepublic_url;
    return ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload_create(
    char *s_ezsigntemplatepublic_url
    ) {
    ezsigntemplatepublic_reset_url_v1_response_m_payload_t *result = ezsigntemplatepublic_reset_url_v1_response_m_payload_create_internal (
        s_ezsigntemplatepublic_url
        );
    if (!result) {
    }
    return result;
}

void ezsigntemplatepublic_reset_url_v1_response_m_payload_free(ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_reset_url_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatepublic_reset_url_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_reset_url_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_reset_url_v1_response_m_payload->s_ezsigntemplatepublic_url) {
        free(ezsigntemplatepublic_reset_url_v1_response_m_payload->s_ezsigntemplatepublic_url);
        ezsigntemplatepublic_reset_url_v1_response_m_payload->s_ezsigntemplatepublic_url = NULL;
    }
    free(ezsigntemplatepublic_reset_url_v1_response_m_payload);
}

cJSON *ezsigntemplatepublic_reset_url_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_reset_url_v1_response_m_payload->s_ezsigntemplatepublic_url
    if (!ezsigntemplatepublic_reset_url_v1_response_m_payload->s_ezsigntemplatepublic_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicUrl", ezsigntemplatepublic_reset_url_v1_response_m_payload->s_ezsigntemplatepublic_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_reset_url_v1_response_m_payloadJSON){

    ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var = NULL;

    char *s_ezsigntemplatepublic_url_local_str = NULL;

    // ezsigntemplatepublic_reset_url_v1_response_m_payload->s_ezsigntemplatepublic_url
    cJSON *s_ezsigntemplatepublic_url = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_reset_url_v1_response_m_payloadJSON, "sEzsigntemplatepublicUrl");
    if (cJSON_IsNull(s_ezsigntemplatepublic_url)) {
        s_ezsigntemplatepublic_url = NULL;
    }
    if (!s_ezsigntemplatepublic_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_url))
    {
    goto end; //String
    }


    if (s_ezsigntemplatepublic_url && !cJSON_IsNull(s_ezsigntemplatepublic_url)) s_ezsigntemplatepublic_url_local_str = strdup(s_ezsigntemplatepublic_url->valuestring);

    ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var = ezsigntemplatepublic_reset_url_v1_response_m_payload_create_internal (
        s_ezsigntemplatepublic_url_local_str
        );

    if (!ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var;
end:
    if (s_ezsigntemplatepublic_url_local_str) {
        free(s_ezsigntemplatepublic_url_local_str);
        s_ezsigntemplatepublic_url_local_str = NULL;
    }
    return NULL;

}
