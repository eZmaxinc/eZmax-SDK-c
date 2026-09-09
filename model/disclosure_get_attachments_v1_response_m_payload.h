/*
 * disclosure_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/disclosure/{pkiDisclosureID}/getAttachments
 */

#ifndef _disclosure_get_attachments_v1_response_m_payload_H_
#define _disclosure_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct disclosure_get_attachments_v1_response_m_payload_t disclosure_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct disclosure_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} disclosure_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) disclosure_get_attachments_v1_response_m_payload_t *disclosure_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void disclosure_get_attachments_v1_response_m_payload_free(disclosure_get_attachments_v1_response_m_payload_t *disclosure_get_attachments_v1_response_m_payload);

disclosure_get_attachments_v1_response_m_payload_t *disclosure_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *disclosure_get_attachments_v1_response_m_payloadJSON);

cJSON *disclosure_get_attachments_v1_response_m_payload_convertToJSON(disclosure_get_attachments_v1_response_m_payload_t *disclosure_get_attachments_v1_response_m_payload);

#endif /* _disclosure_get_attachments_v1_response_m_payload_H_ */

