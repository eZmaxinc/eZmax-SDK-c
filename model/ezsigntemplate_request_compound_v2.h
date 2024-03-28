/*
 * ezsigntemplate_request_compound_v2.h
 *
 * A Ezsigntemplate Object and children
 */

#ifndef _ezsigntemplate_request_compound_v2_H_
#define _ezsigntemplate_request_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_request_compound_v2_t ezsigntemplate_request_compound_v2_t;

#include "field_e_ezsigntemplate_type.h"

// Enum  for ezsigntemplate_request_compound_v2

typedef enum  { ezmax_api_definition__full_ezsigntemplate_request_compound_v2__NULL = 0, ezmax_api_definition__full_ezsigntemplate_request_compound_v2__User, ezmax_api_definition__full_ezsigntemplate_request_compound_v2__Usergroup, ezmax_api_definition__full_ezsigntemplate_request_compound_v2__Company } ezmax_api_definition__full_ezsigntemplate_request_compound_v2__e;

char* ezsigntemplate_request_compound_v2_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_ezsigntemplate_request_compound_v2__e e_ezsigntemplate_type);

ezmax_api_definition__full_ezsigntemplate_request_compound_v2__e ezsigntemplate_request_compound_v2_e_ezsigntemplate_type_FromString(char* e_ezsigntemplate_type);



typedef struct ezsigntemplate_request_compound_v2_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsigntemplate_description; // string
    char *s_ezsigntemplate_filenamepattern; // string
    int b_ezsigntemplate_adminonly; //boolean
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type; // custom

} ezsigntemplate_request_compound_v2_t;

ezsigntemplate_request_compound_v2_t *ezsigntemplate_request_compound_v2_create(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_filenamepattern,
    int b_ezsigntemplate_adminonly,
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type
);

void ezsigntemplate_request_compound_v2_free(ezsigntemplate_request_compound_v2_t *ezsigntemplate_request_compound_v2);

ezsigntemplate_request_compound_v2_t *ezsigntemplate_request_compound_v2_parseFromJSON(cJSON *ezsigntemplate_request_compound_v2JSON);

cJSON *ezsigntemplate_request_compound_v2_convertToJSON(ezsigntemplate_request_compound_v2_t *ezsigntemplate_request_compound_v2);

#endif /* _ezsigntemplate_request_compound_v2_H_ */

