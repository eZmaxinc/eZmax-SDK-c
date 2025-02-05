/*
 * currency_autocomplete_element_response.h
 *
 * A Currency AutocompleteElement Response
 */

#ifndef _currency_autocomplete_element_response_H_
#define _currency_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct currency_autocomplete_element_response_t currency_autocomplete_element_response_t;




typedef struct currency_autocomplete_element_response_t {
    int pki_currency_id; //numeric
    char *s_currency_description_x; // string
    int b_currency_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} currency_autocomplete_element_response_t;

__attribute__((deprecated)) currency_autocomplete_element_response_t *currency_autocomplete_element_response_create(
    int pki_currency_id,
    char *s_currency_description_x,
    int b_currency_isactive
);

void currency_autocomplete_element_response_free(currency_autocomplete_element_response_t *currency_autocomplete_element_response);

currency_autocomplete_element_response_t *currency_autocomplete_element_response_parseFromJSON(cJSON *currency_autocomplete_element_responseJSON);

cJSON *currency_autocomplete_element_response_convertToJSON(currency_autocomplete_element_response_t *currency_autocomplete_element_response);

#endif /* _currency_autocomplete_element_response_H_ */

