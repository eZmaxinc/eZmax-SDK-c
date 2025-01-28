/*
 * language_autocomplete_element_response.h
 *
 * A Language AutocompleteElement Response
 */

#ifndef _language_autocomplete_element_response_H_
#define _language_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct language_autocomplete_element_response_t language_autocomplete_element_response_t;




typedef struct language_autocomplete_element_response_t {
    int pki_language_id; //numeric
    char *s_language_name_x; // string
    int b_language_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} language_autocomplete_element_response_t;

__attribute__((deprecated)) language_autocomplete_element_response_t *language_autocomplete_element_response_create(
    int pki_language_id,
    char *s_language_name_x,
    int b_language_isactive
);

void language_autocomplete_element_response_free(language_autocomplete_element_response_t *language_autocomplete_element_response);

language_autocomplete_element_response_t *language_autocomplete_element_response_parseFromJSON(cJSON *language_autocomplete_element_responseJSON);

cJSON *language_autocomplete_element_response_convertToJSON(language_autocomplete_element_response_t *language_autocomplete_element_response);

#endif /* _language_autocomplete_element_response_H_ */

