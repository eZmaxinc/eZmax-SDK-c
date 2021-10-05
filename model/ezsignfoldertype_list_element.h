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




typedef struct ezsignfoldertype_list_element_t {
    int pki_ezsignfoldertype_id; //numeric
    char *s_ezsignfoldertype_name_x; // string

} ezsignfoldertype_list_element_t;

ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_create(
    int pki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x
);

void ezsignfoldertype_list_element_free(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element);

ezsignfoldertype_list_element_t *ezsignfoldertype_list_element_parseFromJSON(cJSON *ezsignfoldertype_list_elementJSON);

cJSON *ezsignfoldertype_list_element_convertToJSON(ezsignfoldertype_list_element_t *ezsignfoldertype_list_element);

#endif /* _ezsignfoldertype_list_element_H_ */

