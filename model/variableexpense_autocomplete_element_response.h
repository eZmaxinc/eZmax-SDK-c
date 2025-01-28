/*
 * variableexpense_autocomplete_element_response.h
 *
 * A Variableexpense AutocompleteElement Response
 */

#ifndef _variableexpense_autocomplete_element_response_H_
#define _variableexpense_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct variableexpense_autocomplete_element_response_t variableexpense_autocomplete_element_response_t;




typedef struct variableexpense_autocomplete_element_response_t {
    char *s_variableexpense_description_x; // string
    int pki_variableexpense_id; //numeric
    int b_variableexpense_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} variableexpense_autocomplete_element_response_t;

__attribute__((deprecated)) variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_create(
    char *s_variableexpense_description_x,
    int pki_variableexpense_id,
    int b_variableexpense_isactive
);

void variableexpense_autocomplete_element_response_free(variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response);

variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_parseFromJSON(cJSON *variableexpense_autocomplete_element_responseJSON);

cJSON *variableexpense_autocomplete_element_response_convertToJSON(variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response);

#endif /* _variableexpense_autocomplete_element_response_H_ */

