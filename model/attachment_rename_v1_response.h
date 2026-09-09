/*
 * attachment_rename_v1_response.h
 *
 * Response for POST /1/object/attachment/{pkiAttachmentID}/rename
 */

#ifndef _attachment_rename_v1_response_H_
#define _attachment_rename_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct attachment_rename_v1_response_t attachment_rename_v1_response_t;

#include "attachment_rename_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct attachment_rename_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct attachment_rename_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} attachment_rename_v1_response_t;

__attribute__((deprecated)) attachment_rename_v1_response_t *attachment_rename_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    attachment_rename_v1_response_m_payload_t *m_payload
);

void attachment_rename_v1_response_free(attachment_rename_v1_response_t *attachment_rename_v1_response);

attachment_rename_v1_response_t *attachment_rename_v1_response_parseFromJSON(cJSON *attachment_rename_v1_responseJSON);

cJSON *attachment_rename_v1_response_convertToJSON(attachment_rename_v1_response_t *attachment_rename_v1_response);

#endif /* _attachment_rename_v1_response_H_ */

