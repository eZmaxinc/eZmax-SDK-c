/*
 * country_autocomplete_element_response.h
 *
 * A Country AutocompleteElement Response
 */

#ifndef _country_autocomplete_element_response_H_
#define _country_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct country_autocomplete_element_response_t country_autocomplete_element_response_t;




typedef struct country_autocomplete_element_response_t {
    int pki_country_id; //numeric
    char *s_country_name_x; // string
    char *s_country_shortname; // string
    int b_country_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} country_autocomplete_element_response_t;

__attribute__((deprecated)) country_autocomplete_element_response_t *country_autocomplete_element_response_create(
    int pki_country_id,
    char *s_country_name_x,
    char *s_country_shortname,
    int b_country_isactive
);

void country_autocomplete_element_response_free(country_autocomplete_element_response_t *country_autocomplete_element_response);

country_autocomplete_element_response_t *country_autocomplete_element_response_parseFromJSON(cJSON *country_autocomplete_element_responseJSON);

cJSON *country_autocomplete_element_response_convertToJSON(country_autocomplete_element_response_t *country_autocomplete_element_response);

#endif /* _country_autocomplete_element_response_H_ */

