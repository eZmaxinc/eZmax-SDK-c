/*
 * ezsigntemplate_response.h
 *
 * A Ezsigntemplate Object
 */

#ifndef _ezsigntemplate_response_H_
#define _ezsigntemplate_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_response_t ezsigntemplate_response_t;

#include "common_audit.h"
#include "field_e_ezsigntemplate_type.h"

// Enum  for ezsigntemplate_response

typedef enum  { ezmax_api_definition__full_ezsigntemplate_response__NULL = 0, ezmax_api_definition__full_ezsigntemplate_response__User, ezmax_api_definition__full_ezsigntemplate_response__Usergroup, ezmax_api_definition__full_ezsigntemplate_response__Company } ezmax_api_definition__full_ezsigntemplate_response__e;

char* ezsigntemplate_response_e_ezsigntemplate_type_ToString(ezmax_api_definition__full_ezsigntemplate_response__e e_ezsigntemplate_type);

ezmax_api_definition__full_ezsigntemplate_response__e ezsigntemplate_response_e_ezsigntemplate_type_FromString(char* e_ezsigntemplate_type);



typedef struct ezsigntemplate_response_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    char *s_ezsigntemplate_description; // string
    char *s_ezsigntemplate_filenamepattern; // string
    int b_ezsigntemplate_adminonly; //boolean
    char *s_ezsignfoldertype_name_x; // string
    struct common_audit_t *obj_audit; //model
    int b_ezsigntemplate_editallowed; //boolean
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type; // custom

} ezsigntemplate_response_t;

ezsigntemplate_response_t *ezsigntemplate_response_create(
    int pki_ezsigntemplate_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_filenamepattern,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x,
    common_audit_t *obj_audit,
    int b_ezsigntemplate_editallowed,
    field_e_ezsigntemplate_type_t *e_ezsigntemplate_type
);

void ezsigntemplate_response_free(ezsigntemplate_response_t *ezsigntemplate_response);

ezsigntemplate_response_t *ezsigntemplate_response_parseFromJSON(cJSON *ezsigntemplate_responseJSON);

cJSON *ezsigntemplate_response_convertToJSON(ezsigntemplate_response_t *ezsigntemplate_response);

#endif /* _ezsigntemplate_response_H_ */

