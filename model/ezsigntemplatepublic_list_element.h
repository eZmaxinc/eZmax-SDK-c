/*
 * ezsigntemplatepublic_list_element.h
 *
 * A Ezsigntemplatepublic List Element
 */

#ifndef _ezsigntemplatepublic_list_element_H_
#define _ezsigntemplatepublic_list_element_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_list_element_t ezsigntemplatepublic_list_element_t;

#include "field_e_ezsigntemplatepublic_limittype.h"



typedef struct ezsigntemplatepublic_list_element_t {
    int pki_ezsigntemplatepublic_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    char *s_ezsignfoldertype_name_x; // string
    int fki_userlogintype_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    char *s_ezsigntemplatepublic_description; // string
    int b_ezsigntemplatepublic_isactive; //boolean
    char *t_ezsigntemplatepublic_note; // string
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype; //referenced enum
    int i_ezsigntemplatepublic_limit; //numeric
    int i_ezsigntemplatepublic_limitexceeded; //numeric
    char *dt_ezsigntemplatepublic_limitexceededsince; // string
    int i_ezsignfolder; //numeric
    int i_ezsigndocument; //numeric
    char *s_ezsigntemplatepublic_ezsigntemplatedescription; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepublic_list_element_t;

__attribute__((deprecated)) ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_create(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int fki_userlogintype_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    ezmax_api_definition__full_field_e_ezsigntemplatepublic_limittype__e e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit,
    int i_ezsigntemplatepublic_limitexceeded,
    char *dt_ezsigntemplatepublic_limitexceededsince,
    int i_ezsignfolder,
    int i_ezsigndocument,
    char *s_ezsigntemplatepublic_ezsigntemplatedescription
);

void ezsigntemplatepublic_list_element_free(ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element);

ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_parseFromJSON(cJSON *ezsigntemplatepublic_list_elementJSON);

cJSON *ezsigntemplatepublic_list_element_convertToJSON(ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element);

#endif /* _ezsigntemplatepublic_list_element_H_ */

