/*
 * ezsigntsarequirement_autocomplete_element_response.h
 *
 * A Ezsigntsarequirement AutocompleteElement Response
 */

#ifndef _ezsigntsarequirement_autocomplete_element_response_H_
#define _ezsigntsarequirement_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntsarequirement_autocomplete_element_response_t ezsigntsarequirement_autocomplete_element_response_t;




typedef struct ezsigntsarequirement_autocomplete_element_response_t {
    char *s_ezsigntsarequirement_description_x; // string
    int pki_ezsigntsarequirement_id; //numeric
    int b_ezsigntsarequirement_isactive; //boolean
    int b_disabled; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntsarequirement_autocomplete_element_response_t;

__attribute__((deprecated)) ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response_create(
    char *s_ezsigntsarequirement_description_x,
    int pki_ezsigntsarequirement_id,
    int b_ezsigntsarequirement_isactive,
    int b_disabled
);

void ezsigntsarequirement_autocomplete_element_response_free(ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response);

ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response_parseFromJSON(cJSON *ezsigntsarequirement_autocomplete_element_responseJSON);

cJSON *ezsigntsarequirement_autocomplete_element_response_convertToJSON(ezsigntsarequirement_autocomplete_element_response_t *ezsigntsarequirement_autocomplete_element_response);

#endif /* _ezsigntsarequirement_autocomplete_element_response_H_ */

