/*
 * ezsigntemplate_list_element.h
 *
 * A Ezsigntemplate List Element
 */

#ifndef _ezsigntemplate_list_element_H_
#define _ezsigntemplate_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_list_element_t ezsigntemplate_list_element_t;

#include "field_e_ezsigntemplate_type.h"



typedef struct ezsigntemplate_list_element_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsigntemplate_description; // string
    int i_ezsigntemplatedocument_pagetotal; //numeric
    int i_ezsigntemplate_signaturetotal; //numeric
    int i_ezsigntemplate_formfieldtotal; //numeric
    int b_ezsigntemplate_incomplete; //boolean
    char *s_ezsignfoldertype_name_x; // string
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplate_list_element_t;

__attribute__((deprecated)) ezsigntemplate_list_element_t *ezsigntemplate_list_element_create(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplate_description,
    int i_ezsigntemplatedocument_pagetotal,
    int i_ezsigntemplate_signaturetotal,
    int i_ezsigntemplate_formfieldtotal,
    int b_ezsigntemplate_incomplete,
    char *s_ezsignfoldertype_name_x,
    ezmax_api_definition__full_field_e_ezsigntemplate_type__e e_ezsigntemplate_type
);

void ezsigntemplate_list_element_free(ezsigntemplate_list_element_t *ezsigntemplate_list_element);

ezsigntemplate_list_element_t *ezsigntemplate_list_element_parseFromJSON(cJSON *ezsigntemplate_list_elementJSON);

cJSON *ezsigntemplate_list_element_convertToJSON(ezsigntemplate_list_element_t *ezsigntemplate_list_element);

#endif /* _ezsigntemplate_list_element_H_ */

