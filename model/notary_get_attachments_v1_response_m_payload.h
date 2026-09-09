/*
 * notary_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/notary/{pkiNotaryID}/getAttachments
 */

#ifndef _notary_get_attachments_v1_response_m_payload_H_
#define _notary_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct notary_get_attachments_v1_response_m_payload_t notary_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct notary_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} notary_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void notary_get_attachments_v1_response_m_payload_free(notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload);

notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *notary_get_attachments_v1_response_m_payloadJSON);

cJSON *notary_get_attachments_v1_response_m_payload_convertToJSON(notary_get_attachments_v1_response_m_payload_t *notary_get_attachments_v1_response_m_payload);

#endif /* _notary_get_attachments_v1_response_m_payload_H_ */

