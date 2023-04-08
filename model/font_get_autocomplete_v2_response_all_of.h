/*
 * font_get_autocomplete_v2_response_all_of.h
 *
 * 
 */

#ifndef _font_get_autocomplete_v2_response_all_of_H_
#define _font_get_autocomplete_v2_response_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct font_get_autocomplete_v2_response_all_of_t font_get_autocomplete_v2_response_all_of_t;

#include "font_get_autocomplete_v2_response_m_payload.h"



typedef struct font_get_autocomplete_v2_response_all_of_t {
    struct font_get_autocomplete_v2_response_m_payload_t *m_payload; //model

} font_get_autocomplete_v2_response_all_of_t;

font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of_create(
    font_get_autocomplete_v2_response_m_payload_t *m_payload
);

void font_get_autocomplete_v2_response_all_of_free(font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of);

font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *font_get_autocomplete_v2_response_all_ofJSON);

cJSON *font_get_autocomplete_v2_response_all_of_convertToJSON(font_get_autocomplete_v2_response_all_of_t *font_get_autocomplete_v2_response_all_of);

#endif /* _font_get_autocomplete_v2_response_all_of_H_ */

