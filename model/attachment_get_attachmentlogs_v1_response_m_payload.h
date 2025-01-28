/*
 * attachment_get_attachmentlogs_v1_response_m_payload.h
 *
 * Response for GET /1/object/attachment/{pkiAttachmentID}/getAttachmentlogs
 */

#ifndef _attachment_get_attachmentlogs_v1_response_m_payload_H_
#define _attachment_get_attachmentlogs_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_get_attachmentlogs_v1_response_m_payload_t attachment_get_attachmentlogs_v1_response_m_payload_t;

#include "attachmentlog_response_compound.h"



typedef struct attachment_get_attachmentlogs_v1_response_m_payload_t {
    list_t *a_obj_attachmentlog; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_get_attachmentlogs_v1_response_m_payload_t;

__attribute__((deprecated)) attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload_create(
    list_t *a_obj_attachmentlog
);

void attachment_get_attachmentlogs_v1_response_m_payload_free(attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload);

attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload_parseFromJSON(cJSON *attachment_get_attachmentlogs_v1_response_m_payloadJSON);

cJSON *attachment_get_attachmentlogs_v1_response_m_payload_convertToJSON(attachment_get_attachmentlogs_v1_response_m_payload_t *attachment_get_attachmentlogs_v1_response_m_payload);

#endif /* _attachment_get_attachmentlogs_v1_response_m_payload_H_ */

