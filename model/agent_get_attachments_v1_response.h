/*
 * agent_get_attachments_v1_response.h
 *
 * Response for GET /1/object/agent/{pkiAgentID}/getAttachments
 */

#ifndef _agent_get_attachments_v1_response_H_
#define _agent_get_attachments_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_get_attachments_v1_response_t agent_get_attachments_v1_response_t;

#include "agent_get_attachments_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct agent_get_attachments_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct agent_get_attachments_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} agent_get_attachments_v1_response_t;

__attribute__((deprecated)) agent_get_attachments_v1_response_t *agent_get_attachments_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    agent_get_attachments_v1_response_m_payload_t *m_payload
);

void agent_get_attachments_v1_response_free(agent_get_attachments_v1_response_t *agent_get_attachments_v1_response);

agent_get_attachments_v1_response_t *agent_get_attachments_v1_response_parseFromJSON(cJSON *agent_get_attachments_v1_responseJSON);

cJSON *agent_get_attachments_v1_response_convertToJSON(agent_get_attachments_v1_response_t *agent_get_attachments_v1_response);

#endif /* _agent_get_attachments_v1_response_H_ */

