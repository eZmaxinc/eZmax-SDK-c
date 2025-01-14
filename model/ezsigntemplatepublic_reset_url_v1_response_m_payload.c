#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_reset_url_v1_response_m_payload.h"



ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload_create(
    char *s_ezsigntemplatepublic_url
    ) {
    ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_reset_url_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var->s_ezsigntemplatepublic_url = s_ezsigntemplatepublic_url;

    return ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var;
}


void ezsigntemplatepublic_reset_url_v1_response_m_payload_free(ezsigntemplatepublic_reset_url_v1_response_m_payload_t *ezsigntemplatepublic_reset_url_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_reset_url_v1_response_m_payload){
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

    // ezsigntemplatepublic_reset_url_v1_response_m_payload->s_ezsigntemplatepublic_url
    cJSON *s_ezsigntemplatepublic_url = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_reset_url_v1_response_m_payloadJSON, "sEzsigntemplatepublicUrl");
    if (!s_ezsigntemplatepublic_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepublic_url))
    {
    goto end; //String
    }


    ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var = ezsigntemplatepublic_reset_url_v1_response_m_payload_create (
        strdup(s_ezsigntemplatepublic_url->valuestring)
        );

    return ezsigntemplatepublic_reset_url_v1_response_m_payload_local_var;
end:
    return NULL;

}
