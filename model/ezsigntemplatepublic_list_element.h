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

// Enum  for ezsigntemplatepublic_list_element

typedef enum  { ezmax_api_definition__full_ezsigntemplatepublic_list_element__NULL = 0, ezmax_api_definition__full_ezsigntemplatepublic_list_element__Hour, ezmax_api_definition__full_ezsigntemplatepublic_list_element__Day, ezmax_api_definition__full_ezsigntemplatepublic_list_element__Month, ezmax_api_definition__full_ezsigntemplatepublic_list_element__Total } ezmax_api_definition__full_ezsigntemplatepublic_list_element__e;

char* ezsigntemplatepublic_list_element_e_ezsigntemplatepublic_limittype_ToString(ezmax_api_definition__full_ezsigntemplatepublic_list_element__e e_ezsigntemplatepublic_limittype);

ezmax_api_definition__full_ezsigntemplatepublic_list_element__e ezsigntemplatepublic_list_element_e_ezsigntemplatepublic_limittype_FromString(char* e_ezsigntemplatepublic_limittype);



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
    field_e_ezsigntemplatepublic_limittype_t *e_ezsigntemplatepublic_limittype; // custom
    int i_ezsigntemplatepublic_limit; //numeric
    int i_ezsigntemplatepublic_limitexceeded; //numeric
    char *dt_ezsigntemplatepublic_limitexceededsince; // string
    int i_ezsignfolder; //numeric
    int i_ezsigndocument; //numeric
    char *s_ezsigntemplatepublic_ezsigntemplatedescription; // string

} ezsigntemplatepublic_list_element_t;

ezsigntemplatepublic_list_element_t *ezsigntemplatepublic_list_element_create(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    int fki_userlogintype_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    field_e_ezsigntemplatepublic_limittype_t *e_ezsigntemplatepublic_limittype,
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

