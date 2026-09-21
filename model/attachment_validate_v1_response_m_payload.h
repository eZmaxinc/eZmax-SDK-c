/*
 * attachment_validate_v1_response_m_payload.h
 *
 * Response for POST /1/object/attachment/{pkiAttachmentID}/validate
 */

#ifndef _attachment_validate_v1_response_m_payload_H_
#define _attachment_validate_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_validate_v1_response_m_payload_t attachment_validate_v1_response_m_payload_t;




typedef struct attachment_validate_v1_response_m_payload_t {
    int *pki_attachment_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_validate_v1_response_m_payload_t;

__attribute__((deprecated)) attachment_validate_v1_response_m_payload_t *attachment_validate_v1_response_m_payload_create(
    int *pki_attachment_id
);

void attachment_validate_v1_response_m_payload_free(attachment_validate_v1_response_m_payload_t *attachment_validate_v1_response_m_payload);

attachment_validate_v1_response_m_payload_t *attachment_validate_v1_response_m_payload_parseFromJSON(cJSON *attachment_validate_v1_response_m_payloadJSON);

cJSON *attachment_validate_v1_response_m_payload_convertToJSON(attachment_validate_v1_response_m_payload_t *attachment_validate_v1_response_m_payload);

#endif /* _attachment_validate_v1_response_m_payload_H_ */

