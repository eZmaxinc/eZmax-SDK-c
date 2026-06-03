#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload.h"



static ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create_internal(
    char *s_ezsigntemplatepublic_signingurl
    ) {
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var, 0, sizeof(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t));
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var->_library_owned = 1;
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var->s_ezsigntemplatepublic_signingurl = s_ezsigntemplatepublic_signingurl;
    return ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create(
    char *s_ezsigntemplatepublic_signingurl
    ) {
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *result = ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create_internal (
        s_ezsigntemplatepublic_signingurl
        );
    if (!result) {
    }
    return result;
}

void ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_free(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload){
        return ;
    }
    if(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->s_ezsigntemplatepublic_signingurl) {
        free(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->s_ezsigntemplatepublic_signingurl);
        ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->s_ezsigntemplatepublic_signingurl = NULL;
    }
    free(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload);
}

cJSON *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_convertToJSON(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->s_ezsigntemplatepublic_signingurl
    if(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->s_ezsigntemplatepublic_signingurl) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepublicSigningurl", ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->s_ezsigntemplatepublic_signingurl) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_parseFromJSON(cJSON *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payloadJSON){

    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var = NULL;

    char *s_ezsigntemplatepublic_signingurl_local_str = NULL;

    // ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->s_ezsigntemplatepublic_signingurl
    cJSON *s_ezsigntemplatepublic_signingurl = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payloadJSON, "sEzsigntemplatepublicSigningurl");
    if (cJSON_IsNull(s_ezsigntemplatepublic_signingurl)) {
        s_ezsigntemplatepublic_signingurl = NULL;
    }
    if (s_ezsigntemplatepublic_signingurl) { 
    if(!cJSON_IsString(s_ezsigntemplatepublic_signingurl) && !cJSON_IsNull(s_ezsigntemplatepublic_signingurl))
    {
    goto end; //String
    }
    }


    if (s_ezsigntemplatepublic_signingurl && !cJSON_IsNull(s_ezsigntemplatepublic_signingurl)) s_ezsigntemplatepublic_signingurl_local_str = strdup(s_ezsigntemplatepublic_signingurl->valuestring);

    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var = ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create_internal (
        s_ezsigntemplatepublic_signingurl_local_str
        );

    if (!ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var) {
        goto end;
    }

    return ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var;
end:
    if (s_ezsigntemplatepublic_signingurl_local_str) {
        free(s_ezsigntemplatepublic_signingurl_local_str);
        s_ezsigntemplatepublic_signingurl_local_str = NULL;
    }
    return NULL;

}
