/*
 * ezsignfoldertype_list_element.h
 *
 * An Ezsignfoldertype List Element
 */

#ifndef _ezsignfoldertype_list_element_H_
#define _ezsignfoldertype_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignfoldertype_list_element_t ezsignfoldertype_list_element_t;

#include "field_e_ezsignfoldertype_privacylevel.h"

// Enum  for ezsignfoldertype_list_element

typedef enum  { ezmax_api_definition__full_ezsignfoldertype_list_element__NULL = 0, ezmax_api_definition__full_ezsignfoldertype_list_element__User, ezmax_api_definition__full_ezsignfoldertype_list_element__Usergroup } ezmax_api_definition__full_ezsignfoldertype_list_element__e;

char* ezsignfoldertype_list_element_e_ezsignfoldertype_privacylevel_ToString(ezmax_api_definition__full_ezsignfoldertype_list_element__e e_ezsignfoldertype_privacylevel);

ezmax_api_definition__full_ezsignfoldertype_list_element__e ezsignfoldertype_list_element_e_ezsignfoldertype_privacylevel_FromString(char* e_ezsignfoldertype_privacylevel);



typedef struct ezsignfoldertype_list_element_t {
    int pki_ezsignfoldertype_id; //numeric
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel; // custom
    char *s_ezsignfoldertype_name_x; // string
    int b_ezsignfoldertype_isactive; //boolean

} ezsignfoldertype_list_element_t;

ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_create(
    int pki_ezsignfoldertype_id,
    field_e_ezsignfoldertype_privacylevel_t *e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignfoldertype_isactive
);

void ezsignfoldertype_list_element_free(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element);

ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_parseFromJSON(cJSON *ezsignfoldertype_list_elementJSON);

cJSON *ezsignfoldertype_list_element_convertToJSON(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element);

#endif /* _ezsignfoldertype_list_element_H_ */

