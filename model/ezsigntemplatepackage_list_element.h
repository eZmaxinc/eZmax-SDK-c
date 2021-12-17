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

#include "field_e_ezsigntemplatepackage_type.h"

// Enum  for ezsigntemplatepackage_list_element

typedef enum  { ezmax_api_definition_ezsigntemplatepackage_list_element__NULL = 0, ezmax_api_definition_ezsigntemplatepackage_list_element__Company, ezmax_api_definition_ezsigntemplatepackage_list_element__Department, ezmax_api_definition_ezsigntemplatepackage_list_element__Team, ezmax_api_definition_ezsigntemplatepackage_list_element__User, ezmax_api_definition_ezsigntemplatepackage_list_element__Usergroup } ezmax_api_definition_ezsigntemplatepackage_list_element__e;

char* ezsigntemplatepackage_list_element_e_ezsigntemplatepackage_type_ToString(ezmax_api_definition_ezsigntemplatepackage_list_element__e e_ezsigntemplatepackage_type);

ezmax_api_definition_ezsigntemplatepackage_list_element__e ezsigntemplatepackage_list_element_e_ezsigntemplatepackage_type_FromString(char* e_ezsigntemplatepackage_type);



typedef struct ezsigntemplatepackage_list_element_t {
    int pki_ezsigntemplatepackage_id; //numeric
    int fki_department_id; //numeric
    int fki_team_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    field_e_ezsigntemplatepackage_type_t *e_ezsigntemplatepackage_type; // custom
    char *s_ezsigntemplatepackage_description; // string
    int b_ezsigntemplatepackage_isactive; //boolean
    int i_ezsigntemplatepackagemembership; //numeric

} ezsigntemplatepackage_list_element_t;

ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_create(
    int pki_ezsigntemplatepackage_id,
    int fki_department_id,
    int fki_team_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    field_e_ezsigntemplatepackage_type_t *e_ezsigntemplatepackage_type,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_isactive,
    int i_ezsigntemplatepackagemembership
);

void ezsigntemplatepackage_list_element_free(ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element);

ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element_parseFromJSON(cJSON *ezsigntemplatepackage_list_elementJSON);

cJSON *ezsigntemplatepackage_list_element_convertToJSON(ezsigntemplatepackage_list_element_t *ezsigntemplatepackage_list_element);

#endif /* _ezsigntemplatepackage_list_element_H_ */

