/*
 * period_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/period/getAutocomplete
 */

#ifndef _period_get_autocomplete_v2_response_H_
#define _period_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct period_get_autocomplete_v2_response_t period_get_autocomplete_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "period_get_autocomplete_v2_response_m_payload.h"



typedef struct period_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct period_get_autocomplete_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} period_get_autocomplete_v2_response_t;

__attribute__((deprecated)) period_get_autocomplete_v2_response_t *period_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    period_get_autocomplete_v2_response_m_payload_t *m_payload
);

void period_get_autocomplete_v2_response_free(period_get_autocomplete_v2_response_t *period_get_autocomplete_v2_response);

period_get_autocomplete_v2_response_t *period_get_autocomplete_v2_response_parseFromJSON(cJSON *period_get_autocomplete_v2_responseJSON);

cJSON *period_get_autocomplete_v2_response_convertToJSON(period_get_autocomplete_v2_response_t *period_get_autocomplete_v2_response);

#endif /* _period_get_autocomplete_v2_response_H_ */

