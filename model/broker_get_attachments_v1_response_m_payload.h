/*
 * broker_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/broker/{pkiBrokerID}/getAttachments
 */

#ifndef _broker_get_attachments_v1_response_m_payload_H_
#define _broker_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct broker_get_attachments_v1_response_m_payload_t broker_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct broker_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} broker_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) broker_get_attachments_v1_response_m_payload_t *broker_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void broker_get_attachments_v1_response_m_payload_free(broker_get_attachments_v1_response_m_payload_t *broker_get_attachments_v1_response_m_payload);

broker_get_attachments_v1_response_m_payload_t *broker_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *broker_get_attachments_v1_response_m_payloadJSON);

cJSON *broker_get_attachments_v1_response_m_payload_convertToJSON(broker_get_attachments_v1_response_m_payload_t *broker_get_attachments_v1_response_m_payload);

#endif /* _broker_get_attachments_v1_response_m_payload_H_ */

