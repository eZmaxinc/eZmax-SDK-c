/*
 * ezsignfoldertype_autocomplete_element_response.h
 *
 * A Ezsignfoldertype AutocompleteElement Response
 */

#ifndef _ezsignfoldertype_autocomplete_element_response_H_
#define _ezsignfoldertype_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_autocomplete_element_response_t ezsignfoldertype_autocomplete_element_response_t;

#include "field_e_ezsignfoldertype_privacylevel.h"



typedef struct ezsignfoldertype_autocomplete_element_response_t {
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel; //referenced enum
    char *s_ezsignfoldertype_name_x; // string
    int pki_ezsignfoldertype_id; //numeric
    int b_ezsignfoldertype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldertype_autocomplete_element_response_t;

__attribute__((deprecated)) ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_create(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    int pki_ezsignfoldertype_id,
    int b_ezsignfoldertype_isactive
);

void ezsignfoldertype_autocomplete_element_response_free(ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response);

ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_parseFromJSON(cJSON *ezsignfoldertype_autocomplete_element_responseJSON);

cJSON *ezsignfoldertype_autocomplete_element_response_convertToJSON(ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response);

#endif /* _ezsignfoldertype_autocomplete_element_response_H_ */

