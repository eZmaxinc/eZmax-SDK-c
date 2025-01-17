/*
 * variableexpense_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/variableexpense/getAutocomplete
 */

#ifndef _variableexpense_get_autocomplete_v2_response_H_
#define _variableexpense_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_get_autocomplete_v2_response_t variableexpense_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "variableexpense_get_autocomplete_v2_response_m_payload.h"



typedef struct variableexpense_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct variableexpense_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} variableexpense_get_autocomplete_v2_response_t;

variableexpense_get_autocomplete_v2_response_t *variableexpense_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    variableexpense_get_autocomplete_v2_response_m_payload_t *m_payload
);

void variableexpense_get_autocomplete_v2_response_free(variableexpense_get_autocomplete_v2_response_t *variableexpense_get_autocomplete_v2_response);

variableexpense_get_autocomplete_v2_response_t *variableexpense_get_autocomplete_v2_response_parseFromJSON(cJSON *variableexpense_get_autocomplete_v2_responseJSON);

cJSON *variableexpense_get_autocomplete_v2_response_convertToJSON(variableexpense_get_autocomplete_v2_response_t *variableexpense_get_autocomplete_v2_response);

#endif /* _variableexpense_get_autocomplete_v2_response_H_ */

