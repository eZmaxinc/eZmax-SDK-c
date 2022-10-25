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

// Enum  for ezsigntemplate_autocomplete_element_response

typedef enum  { ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__NULL = 0, ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__User, ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__Usergroup } ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__e;

char* ezsigntemplate_autocomplete_element_response_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__e ezsigntemplate_autocomplete_element_response_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);



typedef struct ezsigntemplate_autocomplete_element_response_t {
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel; // custom
    char *s_ezsigntemplate_description; // string
    int pki_ezsigntemplate_id; //numeric
    int b_ezsigntemplate_isactive; //boolean

} ezsigntemplate_autocomplete_element_response_t;

ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_create(
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplate_description,
    int pki_ezsigntemplate_id,
    int b_ezsigntemplate_isactive
);

void ezsigntemplate_autocomplete_element_response_free(ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response);

ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplate_autocomplete_element_responseJSON);

cJSON *ezsigntemplate_autocomplete_element_response_convertToJSON(ezsigntemplate_autocomplete_element_response_t *ezsigntemplate_autocomplete_element_response);

#endif /* _ezsigntemplate_autocomplete_element_response_H_ */

