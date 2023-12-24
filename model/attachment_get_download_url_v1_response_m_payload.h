/*
 * attachment_get_download_url_v1_response_m_payload.h
 *
 * Payload for GET /1/object/attachment/{pkiAttachmentID}/getDownloadUrl
 */

#ifndef _attachment_get_download_url_v1_response_m_payload_H_
#define _attachment_get_download_url_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_get_download_url_v1_response_m_payload_t attachment_get_download_url_v1_response_m_payload_t;




typedef struct attachment_get_download_url_v1_response_m_payload_t {
    char *s_download_url; // string

} attachment_get_download_url_v1_response_m_payload_t;

attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload_create(
    char *s_download_url
);

void attachment_get_download_url_v1_response_m_payload_free(attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload);

attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload_parseFromJSON(cJSON *attachment_get_download_url_v1_response_m_payloadJSON);

cJSON *attachment_get_download_url_v1_response_m_payload_convertToJSON(attachment_get_download_url_v1_response_m_payload_t *attachment_get_download_url_v1_response_m_payload);

#endif /* _attachment_get_download_url_v1_response_m_payload_H_ */

