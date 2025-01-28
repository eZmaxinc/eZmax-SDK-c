/*
 * ezsigntemplatepackage_list_element.h
 *
 * An Ezsigntemplatepackage List Element
 */

#ifndef _ezsigntemplatepackage_list_element_H_
#define _ezsigntemplatepackage_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_list_element_t ezsigntemplatepackage_list_element_t;




typedef struct ezsigntemplatepackage_list_element_t {
    int pki_ezsigntemplatepackage_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsigntemplatepackage_description; // string
    int b_ezsigntemplatepackage_needvalidation; //boolean
    int i_ezsigntemplatepackagemembership; //numeric
    char *s_ezsignfoldertype_name_x; // string
    int b_ezsigntemplatepackage_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackage_list_element_t;

__attribute__((deprecated)) ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_needvalidation,
    int i_ezsigntemplatepackagemembership,
    char *s_ezsignfoldertype_name_x,
    int b_ezsigntemplatepackage_isactive
);

void ezsigntemplatepackage_list_element_free(ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element);

ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_parseFromJSON(cJSON *ezsigntemplatepackage_list_elementJSON);

cJSON *ezsigntemplatepackage_list_element_convertToJSON(ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element);

#endif /* _ezsigntemplatepackage_list_element_H_ */

