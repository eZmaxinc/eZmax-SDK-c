#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_get_download_url_v1_response_m_payload.h"



attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload_create(
    char *s_download_url
    ) {
    attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload_local_var = malloc(sizeof(attachment_get_download_url_v1_response_m_payload_t));
    if (!attachment_get_download_url_v1_response_m_payload_local_var) {
        return NULL;
    }
    attachment_get_download_url_v1_response_m_payload_local_var->s_download_url = s_download_url;

    return attachment_get_download_url_v1_response_m_payload_local_var;
}


void attachment_get_download_url_v1_response_m_payload_free(attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload) {
    if(NULL == attachment_get_download_url_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_get_download_url_v1_response_m_payload->s_download_url) {
        free(attachment_get_download_url_v1_response_m_payload->s_download_url);
        attachment_get_download_url_v1_response_m_payload->s_download_url = NULL;
    }
    free(attachment_get_download_url_v1_response_m_payload);
}

cJSON *attachment_get_download_url_v1_response_m_payload_convertToJSON(attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // attachment_get_download_url_v1_response_m_payload->s_download_url
    if (!attachment_get_download_url_v1_response_m_payload->s_download_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDownloadUrl", attachment_get_download_url_v1_response_m_payload->s_download_url) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload_parseFromJSON(cJSON *attachment_get_download_url_v1_response_m_payloadJSON){

    attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload_local_var = NULL;

    // attachment_get_download_url_v1_response_m_payload->s_download_url
    cJSON *s_download_url = cJSON_GetObjectItemCaseSensitive(attachment_get_download_url_v1_response_m_payloadJSON, "sDownloadUrl");
    if (!s_download_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_download_url))
    {
    goto end; //String
    }


    attachment_get_download_url_v1_response_m_payload_local_var = attachment_get_download_url_v1_response_m_payload_create (
        strdup(s_download_url->valuestring)
        );

    return attachment_get_download_url_v1_response_m_payload_local_var;
end:
    return NULL;

}
