/*
 * ezsigntemplateglobal_autocomplete_element_response.h
 *
 * A Ezsigntemplate AutocompleteElement Response
 */

#ifndef _ezsigntemplateglobal_autocomplete_element_response_H_
#define _ezsigntemplateglobal_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobal_autocomplete_element_response_t ezsigntemplateglobal_autocomplete_element_response_t;




typedef struct ezsigntemplateglobal_autocomplete_element_response_t {
    int pki_ezsigntemplateglobal_id; //numeric
    char *s_ezsigntemplateglobal_description; // string
    int b_ezsigntemplateglobal_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateglobal_autocomplete_element_response_t;

__attribute__((deprecated)) ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response_create(
    int pki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobal_description,
    int b_ezsigntemplateglobal_isactive
);

void ezsigntemplateglobal_autocomplete_element_response_free(ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response);

ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplateglobal_autocomplete_element_responseJSON);

cJSON *ezsigntemplateglobal_autocomplete_element_response_convertToJSON(ezsigntemplateglobal_autocomplete_element_response_t *ezsigntemplateglobal_autocomplete_element_response);

#endif /* _ezsigntemplateglobal_autocomplete_element_response_H_ */

