/*
 * font_autocomplete_element_response.h
 *
 * A Font AutocompleteElement Response
 */

#ifndef _font_autocomplete_element_response_H_
#define _font_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct font_autocomplete_element_response_t font_autocomplete_element_response_t;




typedef struct font_autocomplete_element_response_t {
    char *s_font_name; // string
    int pki_font_id; //numeric
    int b_font_isactive; //boolean

} font_autocomplete_element_response_t;

font_autocomplete_element_response_t *font_autocomplete_element_response_create(
    char *s_font_name,
    int pki_font_id,
    int b_font_isactive
);

void font_autocomplete_element_response_free(font_autocomplete_element_response_t *font_autocomplete_element_response);

font_autocomplete_element_response_t *font_autocomplete_element_response_parseFromJSON(cJSON *font_autocomplete_element_responseJSON);

cJSON *font_autocomplete_element_response_convertToJSON(font_autocomplete_element_response_t *font_autocomplete_element_response);

#endif /* _font_autocomplete_element_response_H_ */

