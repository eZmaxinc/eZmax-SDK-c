/*
 * activesession_get_current_v1_response.h
 *
 * Response for GET /1/object/activesession/getCurrent
 */

#ifndef _activesession_get_current_v1_response_H_
#define _activesession_get_current_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct activesession_get_current_v1_response_t activesession_get_current_v1_response_t;

#include "activesession_get_current_v1_response_m_payload.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct activesession_get_current_v1_response_t {
    struct activesession_get_current_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} activesession_get_current_v1_response_t;

activesession_get_current_v1_response_t *activesession_get_current_v1_response_create(
    activesession_get_current_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void activesession_get_current_v1_response_free(activesession_get_current_v1_response_t *activesession_get_current_v1_response);

activesession_get_current_v1_response_t *activesession_get_current_v1_response_parseFromJSON(cJSON *activesession_get_current_v1_responseJSON);

cJSON *activesession_get_current_v1_response_convertToJSON(activesession_get_current_v1_response_t *activesession_get_current_v1_response);

#endif /* _activesession_get_current_v1_response_H_ */

