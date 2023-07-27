/*
 * phonetype_autocomplete_element_response.h
 *
 * A Phonetype AutocompleteElement Response
 */

#ifndef _phonetype_autocomplete_element_response_H_
#define _phonetype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct phonetype_autocomplete_element_response_t phonetype_autocomplete_element_response_t;




typedef struct phonetype_autocomplete_element_response_t {
    int pki_phonetype_id; //numeric
    char *s_phonetype_name_x; // string
    int b_phonetype_isactive; //boolean

} phonetype_autocomplete_element_response_t;

phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_create(
    int pki_phonetype_id,
    char *s_phonetype_name_x,
    int b_phonetype_isactive
);

void phonetype_autocomplete_element_response_free(phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response);

phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response_parseFromJSON(cJSON *phonetype_autocomplete_element_responseJSON);

cJSON *phonetype_autocomplete_element_response_convertToJSON(phonetype_autocomplete_element_response_t *phonetype_autocomplete_element_response);

#endif /* _phonetype_autocomplete_element_response_H_ */

