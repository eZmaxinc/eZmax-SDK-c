/*
 * activesession_get_current_v2_response_m_payload.h
 *
 * Payload for GET /1/object/activesession/getCurrent
 */

#ifndef _activesession_get_current_v2_response_m_payload_H_
#define _activesession_get_current_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_get_current_v2_response_m_payload_t activesession_get_current_v2_response_m_payload_t;

#include "activesession_response_compound.h"



typedef struct activesession_get_current_v2_response_m_payload_t {
    struct activesession_response_compound_t *obj_activesession; //model

} activesession_get_current_v2_response_m_payload_t;

activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload_create(
    activesession_response_compound_t *obj_activesession
);

void activesession_get_current_v2_response_m_payload_free(activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload);

activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload_parseFromJSON(cJSON *activesession_get_current_v2_response_m_payloadJSON);

cJSON *activesession_get_current_v2_response_m_payload_convertToJSON(activesession_get_current_v2_response_m_payload_t *activesession_get_current_v2_response_m_payload);

#endif /* _activesession_get_current_v2_response_m_payload_H_ */

