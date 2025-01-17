/*
 * font_get_autocomplete_v2_response.h
 *
 * Response for GET /2/object/font/getAutocomplete
 */

#ifndef _font_get_autocomplete_v2_response_H_
#define _font_get_autocomplete_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct font_get_autocomplete_v2_response_t font_get_autocomplete_v2_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "font_get_autocomplete_v2_response_m_payload.h"



typedef struct font_get_autocomplete_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct font_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} font_get_autocomplete_v2_response_t;

font_get_autocomplete_v2_response_t *font_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    font_get_autocomplete_v2_response_m_payload_t *m_payload
);

void font_get_autocomplete_v2_response_free(font_get_autocomplete_v2_response_t *font_get_autocomplete_v2_response);

font_get_autocomplete_v2_response_t *font_get_autocomplete_v2_response_parseFromJSON(cJSON *font_get_autocomplete_v2_responseJSON);

cJSON *font_get_autocomplete_v2_response_convertToJSON(font_get_autocomplete_v2_response_t *font_get_autocomplete_v2_response);

#endif /* _font_get_autocomplete_v2_response_H_ */

