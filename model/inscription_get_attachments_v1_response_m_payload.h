/*
 * inscription_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/inscription/{pkiInscriptionID}/getAttachments
 */

#ifndef _inscription_get_attachments_v1_response_m_payload_H_
#define _inscription_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct inscription_get_attachments_v1_response_m_payload_t inscription_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct inscription_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

} inscription_get_attachments_v1_response_m_payload_t;

inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void inscription_get_attachments_v1_response_m_payload_free(inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload);

inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *inscription_get_attachments_v1_response_m_payloadJSON);

cJSON *inscription_get_attachments_v1_response_m_payload_convertToJSON(inscription_get_attachments_v1_response_m_payload_t *inscription_get_attachments_v1_response_m_payload);

#endif /* _inscription_get_attachments_v1_response_m_payload_H_ */

