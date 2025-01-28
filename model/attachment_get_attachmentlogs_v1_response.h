/*
 * attachment_get_attachmentlogs_v1_response.h
 *
 * Response for GET /1/object/attachment/{pkiAttachmentID}/getAttachmentlogs
 */

#ifndef _attachment_get_attachmentlogs_v1_response_H_
#define _attachment_get_attachmentlogs_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_get_attachmentlogs_v1_response_t attachment_get_attachmentlogs_v1_response_t;

#include "attachment_get_attachmentlogs_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct attachment_get_attachmentlogs_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct attachment_get_attachmentlogs_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_get_attachmentlogs_v1_response_t;

__attribute__((deprecated)) attachment_get_attachmentlogs_v1_response_t *attachment_get_attachmentlogs_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    attachment_get_attachmentlogs_v1_response_m_payload_t *m_payload
);

void attachment_get_attachmentlogs_v1_response_free(attachment_get_attachmentlogs_v1_response_t *attachment_get_attachmentlogs_v1_response);

attachment_get_attachmentlogs_v1_response_t *attachment_get_attachmentlogs_v1_response_parseFromJSON(cJSON *attachment_get_attachmentlogs_v1_responseJSON);

cJSON *attachment_get_attachmentlogs_v1_response_convertToJSON(attachment_get_attachmentlogs_v1_response_t *attachment_get_attachmentlogs_v1_response);

#endif /* _attachment_get_attachmentlogs_v1_response_H_ */

