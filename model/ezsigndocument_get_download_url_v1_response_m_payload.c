#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_download_url_v1_response_m_payload.h"



static ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload_create_internal(
    char *s_download_url
    ) {
    ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload_local_var = malloc(sizeof(ezsigndocument_get_download_url_v1_response_m_payload_t));
    if (!ezsigndocument_get_download_url_v1_response_m_payload_local_var) {
        return NULL;
    }
    ezsigndocument_get_download_url_v1_response_m_payload_local_var->s_download_url = s_download_url;

    ezsigndocument_get_download_url_v1_response_m_payload_local_var->_library_owned = 1;
    return ezsigndocument_get_download_url_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload_create(
    char *s_download_url
    ) {
    return ezsigndocument_get_download_url_v1_response_m_payload_create_internal (
        s_download_url
        );
}

void ezsigndocument_get_download_url_v1_response_m_payload_free(ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload) {
    if(NULL == ezsigndocument_get_download_url_v1_response_m_payload){
        return ;
    }
    if(ezsigndocument_get_download_url_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_get_download_url_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_download_url_v1_response_m_payload->s_download_url) {
        free(ezsigndocument_get_download_url_v1_response_m_payload->s_download_url);
        ezsigndocument_get_download_url_v1_response_m_payload->s_download_url = NULL;
    }
    free(ezsigndocument_get_download_url_v1_response_m_payload);
}

cJSON *ezsigndocument_get_download_url_v1_response_m_payload_convertToJSON(ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_download_url_v1_response_m_payload->s_download_url
    if (!ezsigndocument_get_download_url_v1_response_m_payload->s_download_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDownloadUrl", ezsigndocument_get_download_url_v1_response_m_payload->s_download_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_download_url_v1_response_m_payloadJSON){

    ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload_local_var = NULL;

    // ezsigndocument_get_download_url_v1_response_m_payload->s_download_url
    cJSON *s_download_url = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_download_url_v1_response_m_payloadJSON, "sDownloadUrl");
    if (cJSON_IsNull(s_download_url)) {
        s_download_url = NULL;
    }
    if (!s_download_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_download_url))
    {
    goto end; //String
    }


    ezsigndocument_get_download_url_v1_response_m_payload_local_var = ezsigndocument_get_download_url_v1_response_m_payload_create_internal (
        strdup(s_download_url->valuestring)
        );

    return ezsigndocument_get_download_url_v1_response_m_payload_local_var;
end:
    return NULL;

}
