/*
 * agent_import_into_edm_v1_response_m_payload.h
 *
 * Payload for POST /1/object/agent/{pkiAgentID}/importIntoEDM
 */

#ifndef _agent_import_into_edm_v1_response_m_payload_H_
#define _agent_import_into_edm_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_import_into_edm_v1_response_m_payload_t agent_import_into_edm_v1_response_m_payload_t;

#include "custom_attachment_import_into_edm_response.h"



typedef struct agent_import_into_edm_v1_response_m_payload_t {
    list_t *a_obj_attachment; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} agent_import_into_edm_v1_response_m_payload_t;

__attribute__((deprecated)) agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload_create(
    list_t *a_obj_attachment
);

void agent_import_into_edm_v1_response_m_payload_free(agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload);

agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload_parseFromJSON(cJSON *agent_import_into_edm_v1_response_m_payloadJSON);

cJSON *agent_import_into_edm_v1_response_m_payload_convertToJSON(agent_import_into_edm_v1_response_m_payload_t *agent_import_into_edm_v1_response_m_payload);

#endif /* _agent_import_into_edm_v1_response_m_payload_H_ */

