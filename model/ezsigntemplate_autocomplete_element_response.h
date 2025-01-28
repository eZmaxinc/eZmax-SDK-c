/*
 * ezsigntemplate_autocomplete_element_response.h
 *
 * A Ezsigntemplate AutocompleteElement Response
 */

#ifndef _ezsigntemplate_autocomplete_element_response_H_
#define _ezsigntemplate_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_autocomplete_element_response_t ezsigntemplate_autocomplete_element_response_t;

#include "field_e_ezsignfoldertype_privacylevel.h"



typedef struct ezsigntemplate_autocomplete_element_response_t {
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel; //referenced enum
    char *s_ezsigntemplate_description; // string
    int pki_ezsigntemplate_id; //numeric
    int b_ezsigntemplate_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_autocomplete_element_response_t;

__attribute__((deprecated)) ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_create(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplate_description,
    int pki_ezsigntemplate_id,
    int b_ezsigntemplate_isactive
);

void ezsigntemplate_autocomplete_element_response_free(ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response);

ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplate_autocomplete_element_responseJSON);

cJSON *ezsigntemplate_autocomplete_element_response_convertToJSON(ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response);

#endif /* _ezsigntemplate_autocomplete_element_response_H_ */

