/*
 * ezsigndocument_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/ezsigndocument/{pkiEzsigndocumentID}/getAttachments
 */

#ifndef _ezsigndocument_get_attachments_v1_response_m_payload_H_
#define _ezsigndocument_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_get_attachments_v1_response_m_payload_t ezsigndocument_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct ezsigndocument_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void ezsigndocument_get_attachments_v1_response_m_payload_free(ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload);

ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *ezsigndocument_get_attachments_v1_response_m_payloadJSON);

cJSON *ezsigndocument_get_attachments_v1_response_m_payload_convertToJSON(ezsigndocument_get_attachments_v1_response_m_payload_t *ezsigndocument_get_attachments_v1_response_m_payload);

#endif /* _ezsigndocument_get_attachments_v1_response_m_payload_H_ */

