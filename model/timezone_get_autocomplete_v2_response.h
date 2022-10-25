/*
 * timezone_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/timezone/getAutocomplete
 */

#ifndef _timezone_get_autocomplete_v2_response_H_
#define _timezone_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct timezone_get_autocomplete_v2_response_t timezone_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "timezone_get_autocomplete_v2_response_all_of.h"
#include "timezone_get_autocomplete_v2_response_m_payload.h"



typedef struct timezone_get_autocomplete_v2_response_t {
    struct timezone_get_autocomplete_v2_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} timezone_get_autocomplete_v2_response_t;

timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response_create(
    timezone_get_autocomplete_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void timezone_get_autocomplete_v2_response_free(timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response);

timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response_parseFromJSON(cJSON *timezone_get_autocomplete_v2_responseJSON);

cJSON *timezone_get_autocomplete_v2_response_convertToJSON(timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response);

#endif /* _timezone_get_autocomplete_v2_response_H_ */

