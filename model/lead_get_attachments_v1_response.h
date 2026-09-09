/*
 * lead_get_attachments_v1_response.h
 *
 * Response for GET /1/object/lead/{pkiLeadID}/getAttachments
 */

#ifndef _lead_get_attachments_v1_response_H_
#define _lead_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct lead_get_attachments_v1_response_t lead_get_attachments_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "lead_get_attachments_v1_response_m_payload.h"



typedef struct lead_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct lead_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} lead_get_attachments_v1_response_t;

__attribute__((deprecated)) lead_get_attachments_v1_response_t *lead_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    lead_get_attachments_v1_response_m_payload_t *m_payload
);

void lead_get_attachments_v1_response_free(lead_get_attachments_v1_response_t *lead_get_attachments_v1_response);

lead_get_attachments_v1_response_t *lead_get_attachments_v1_response_parseFromJSON(cJSON *lead_get_attachments_v1_responseJSON);

cJSON *lead_get_attachments_v1_response_convertToJSON(lead_get_attachments_v1_response_t *lead_get_attachments_v1_response);

#endif /* _lead_get_attachments_v1_response_H_ */

