/*
 * adjustment_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/adjustment/{pkiAdjustmentID}/getAttachments
 */

#ifndef _adjustment_get_attachments_v1_response_m_payload_H_
#define _adjustment_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct adjustment_get_attachments_v1_response_m_payload_t adjustment_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct adjustment_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} adjustment_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) adjustment_get_attachments_v1_response_m_payload_t *adjustment_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void adjustment_get_attachments_v1_response_m_payload_free(adjustment_get_attachments_v1_response_m_payload_t *adjustment_get_attachments_v1_response_m_payload);

adjustment_get_attachments_v1_response_m_payload_t *adjustment_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *adjustment_get_attachments_v1_response_m_payloadJSON);

cJSON *adjustment_get_attachments_v1_response_m_payload_convertToJSON(adjustment_get_attachments_v1_response_m_payload_t *adjustment_get_attachments_v1_response_m_payload);

#endif /* _adjustment_get_attachments_v1_response_m_payload_H_ */

