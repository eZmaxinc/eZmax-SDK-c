/*
 * ezsignsigningreason_autocomplete_element_response.h
 *
 * A Ezsignsigningreason AutocompleteElement Response
 */

#ifndef _ezsignsigningreason_autocomplete_element_response_H_
#define _ezsignsigningreason_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_autocomplete_element_response_t ezsignsigningreason_autocomplete_element_response_t;




typedef struct ezsignsigningreason_autocomplete_element_response_t {
    int pki_ezsignsigningreason_id; //numeric
    char *s_ezsignsigningreason_description_x; // string
    int b_ezsignsigningreason_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_autocomplete_element_response_t;

__attribute__((deprecated)) ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response_create(
    int pki_ezsignsigningreason_id,
    char *s_ezsignsigningreason_description_x,
    int b_ezsignsigningreason_isactive
);

void ezsignsigningreason_autocomplete_element_response_free(ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response);

ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response_parseFromJSON(cJSON *ezsignsigningreason_autocomplete_element_responseJSON);

cJSON *ezsignsigningreason_autocomplete_element_response_convertToJSON(ezsignsigningreason_autocomplete_element_response_t *ezsignsigningreason_autocomplete_element_response);

#endif /* _ezsignsigningreason_autocomplete_element_response_H_ */

