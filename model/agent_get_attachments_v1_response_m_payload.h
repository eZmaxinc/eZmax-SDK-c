/*
 * agent_get_attachments_v1_response_m_payload.h
 *
 * Response for GET /1/object/agent/{pkiAgentID}/getAttachments
 */

#ifndef _agent_get_attachments_v1_response_m_payload_H_
#define _agent_get_attachments_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_get_attachments_v1_response_m_payload_t agent_get_attachments_v1_response_m_payload_t;

#include "custom_attachmentdocumenttype_response.h"



typedef struct agent_get_attachments_v1_response_m_payload_t {
    list_t *a_obj_attachmentdocumenttype; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} agent_get_attachments_v1_response_m_payload_t;

__attribute__((deprecated)) agent_get_attachments_v1_response_m_payload_t *agent_get_attachments_v1_response_m_payload_create(
    list_t *a_obj_attachmentdocumenttype
);

void agent_get_attachments_v1_response_m_payload_free(agent_get_attachments_v1_response_m_payload_t *agent_get_attachments_v1_response_m_payload);

agent_get_attachments_v1_response_m_payload_t *agent_get_attachments_v1_response_m_payload_parseFromJSON(cJSON *agent_get_attachments_v1_response_m_payloadJSON);

cJSON *agent_get_attachments_v1_response_m_payload_convertToJSON(agent_get_attachments_v1_response_m_payload_t *agent_get_attachments_v1_response_m_payload);

#endif /* _agent_get_attachments_v1_response_m_payload_H_ */

