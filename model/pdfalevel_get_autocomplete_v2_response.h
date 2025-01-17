/*
 * pdfalevel_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/pdfalevel/getAutocomplete
 */

#ifndef _pdfalevel_get_autocomplete_v2_response_H_
#define _pdfalevel_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct pdfalevel_get_autocomplete_v2_response_t pdfalevel_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "pdfalevel_get_autocomplete_v2_response_m_payload.h"



typedef struct pdfalevel_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct pdfalevel_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} pdfalevel_get_autocomplete_v2_response_t;

pdfalevel_get_autocomplete_v2_response_t *pdfalevel_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    pdfalevel_get_autocomplete_v2_response_m_payload_t *m_payload
);

void pdfalevel_get_autocomplete_v2_response_free(pdfalevel_get_autocomplete_v2_response_t *pdfalevel_get_autocomplete_v2_response);

pdfalevel_get_autocomplete_v2_response_t *pdfalevel_get_autocomplete_v2_response_parseFromJSON(cJSON *pdfalevel_get_autocomplete_v2_responseJSON);

cJSON *pdfalevel_get_autocomplete_v2_response_convertToJSON(pdfalevel_get_autocomplete_v2_response_t *pdfalevel_get_autocomplete_v2_response);

#endif /* _pdfalevel_get_autocomplete_v2_response_H_ */

