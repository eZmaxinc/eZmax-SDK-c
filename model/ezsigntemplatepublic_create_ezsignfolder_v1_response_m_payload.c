#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload.h"



ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create(
    char *s_ezsigntemplatepublic_signingurl
    ) {
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var = malloc(sizeof(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t));
    if (!ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var->s_ezsigntemplatepublic_signingurl = s_ezsigntemplatepublic_signingurl;

    return ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var;
}


void ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_free(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_t *ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload) {
    if(NULL == ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload){
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

    // ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload->s_ezsigntemplatepublic_signingurl
    cJSON *s_ezsigntemplatepublic_signingurl = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payloadJSON, "sEzsigntemplatepublicSigningurl");
    if (s_ezsigntemplatepublic_signingurl) { 
    if(!cJSON_IsString(s_ezsigntemplatepublic_signingurl) && !cJSON_IsNull(s_ezsigntemplatepublic_signingurl))
    {
    goto end; //String
    }
    }


    ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var = ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_create (
        s_ezsigntemplatepublic_signingurl && !cJSON_IsNull(s_ezsigntemplatepublic_signingurl) ? strdup(s_ezsigntemplatepublic_signingurl->valuestring) : NULL
        );

    return ezsigntemplatepublic_create_ezsignfolder_v1_response_m_payload_local_var;
end:
    return NULL;

}
