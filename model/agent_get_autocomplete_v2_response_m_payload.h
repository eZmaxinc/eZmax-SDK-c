/*
 * agent_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/agent/getAutocomplete
 */

#ifndef _agent_get_autocomplete_v2_response_m_payload_H_
#define _agent_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct agent_get_autocomplete_v2_response_m_payload_t agent_get_autocomplete_v2_response_m_payload_t;

#include "agent_autocomplete_element_response.h"



typedef struct agent_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_agent; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} agent_get_autocomplete_v2_response_m_payload_t;

__attribute__((deprecated)) agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_agent
);

void agent_get_autocomplete_v2_response_m_payload_free(agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload);

agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *agent_get_autocomplete_v2_response_m_payloadJSON);

cJSON *agent_get_autocomplete_v2_response_m_payload_convertToJSON(agent_get_autocomplete_v2_response_m_payload_t *agent_get_autocomplete_v2_response_m_payload);

#endif /* _agent_get_autocomplete_v2_response_m_payload_H_ */

