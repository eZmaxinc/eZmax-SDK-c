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

// Enum  for ezsignfoldertype_autocomplete_element_response

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_autocomplete_element_response__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_autocomplete_element_response__User, ezmax_api_definition__full_ezsignfoldertype_autocomplete_element_response__Usergroup } ezmax_api_definition__full_ezsignfoldertype_autocomplete_element_response__e;

char* ezsignfoldertype_autocomplete_element_response_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfoldertype_autocomplete_element_response__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_ezsignfoldertype_autocomplete_element_response__e ezsignfoldertype_autocomplete_element_response_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);



typedef struct ezsignfoldertype_autocomplete_element_response_t {
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel; // custom
    char *s_ezsignfoldertype_name_x; // string
    int pki_ezsignfoldertype_id; //numeric
    int b_ezsignfoldertype_isactive; //boolean

} ezsignfoldertype_autocomplete_element_response_t;

ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_create(
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    int pki_ezsignfoldertype_id,
    int b_ezsignfoldertype_isactive
);

void ezsignfoldertype_autocomplete_element_response_free(ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response);

ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_parseFromJSON(cJSON *ezsignfoldertype_autocomplete_element_responseJSON);

cJSON *ezsignfoldertype_autocomplete_element_response_convertToJSON(ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response);

#endif /* _ezsignfoldertype_autocomplete_element_response_H_ */

