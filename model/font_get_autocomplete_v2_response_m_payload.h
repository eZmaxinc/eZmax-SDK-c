/*
 * font_get_autocomplete_v2_response_m_payload.h
 *
 * Payload for POST /2/object/font/getAutocomplete
 */

#ifndef _font_get_autocomplete_v2_response_m_payload_H_
#define _font_get_autocomplete_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct font_get_autocomplete_v2_response_m_payload_t font_get_autocomplete_v2_response_m_payload_t;

#include "font_autocomplete_element_response.h"



typedef struct font_get_autocomplete_v2_response_m_payload_t {
    list_t *a_obj_font; //nonprimitive container

} font_get_autocomplete_v2_response_m_payload_t;

font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload_create(
    list_t *a_obj_font
);

void font_get_autocomplete_v2_response_m_payload_free(font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload);

font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload_parseFromJSON(cJSON *font_get_autocomplete_v2_response_m_payloadJSON);

cJSON *font_get_autocomplete_v2_response_m_payload_convertToJSON(font_get_autocomplete_v2_response_m_payload_t *font_get_autocomplete_v2_response_m_payload);

#endif /* _font_get_autocomplete_v2_response_m_payload_H_ */

