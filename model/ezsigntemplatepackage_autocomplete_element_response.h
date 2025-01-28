/*
 * ezsigntemplatepackage_autocomplete_element_response.h
 *
 * A Ezsigntemplatepackage AutocompleteElement Response
 */

#ifndef _ezsigntemplatepackage_autocomplete_element_response_H_
#define _ezsigntemplatepackage_autocomplete_element_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_autocomplete_element_response_t ezsigntemplatepackage_autocomplete_element_response_t;

#include "field_e_ezsignfoldertype_privacylevel.h"



typedef struct ezsigntemplatepackage_autocomplete_element_response_t {
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel; //referenced enum
    char *s_ezsigntemplatepackage_description; // string
    int pki_ezsigntemplatepackage_id; //numeric
    int b_ezsigntemplatepackage_isactive; //boolean
    int b_disabled; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_autocomplete_element_response_t;

__attribute__((deprecated)) ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_create(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplatepackage_description,
    int pki_ezsigntemplatepackage_id,
    int b_ezsigntemplatepackage_isactive,
    int b_disabled
);

void ezsigntemplatepackage_autocomplete_element_response_free(ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response);

ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplatepackage_autocomplete_element_responseJSON);

cJSON *ezsigntemplatepackage_autocomplete_element_response_convertToJSON(ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response);

#endif /* _ezsigntemplatepackage_autocomplete_element_response_H_ */

