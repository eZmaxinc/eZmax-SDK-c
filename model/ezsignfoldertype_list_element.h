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



typedef struct ezsignfoldertype_list_element_t {
    int pki_ezsignfoldertype_id; //numeric
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel; //referenced enum
    char *s_ezsignfoldertype_name_x; // string
    int b_ezsignfoldertype_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignfoldertype_list_element_t;

__attribute__((deprecated)) ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_create(
    int pki_ezsignfoldertype_id,
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    int b_ezsignfoldertype_isactive
);

void ezsignfoldertype_list_element_free(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element);

ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_parseFromJSON(cJSON *ezsignfoldertype_list_elementJSON);

cJSON *ezsignfoldertype_list_element_convertToJSON(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element);

#endif /* _ezsignfoldertype_list_element_H_ */

