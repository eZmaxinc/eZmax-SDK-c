/*
 * ezsigndocument_get_download_url_v1_response_m_payload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocument}/getDownloadUrl
 */

#ifndef _ezsigndocument_get_download_url_v1_response_m_payload_H_
#define _ezsigndocument_get_download_url_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_download_url_v1_response_m_payload_t ezsigndocument_get_download_url_v1_response_m_payload_t;




typedef struct ezsigndocument_get_download_url_v1_response_m_payload_t {
    char *s_download_url; // string

} ezsigndocument_get_download_url_v1_response_m_payload_t;

ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload_create(
    char *s_download_url
);

void ezsigndocument_get_download_url_v1_response_m_payload_free(ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload);

ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_download_url_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_download_url_v1_response_m_payload_convertToJSON(ezsigndocument_get_download_url_v1_response_m_payload_t *ezsigndocument_get_download_url_v1_response_m_payload);

#endif /* _ezsigndocument_get_download_url_v1_response_m_payload_H_ */

