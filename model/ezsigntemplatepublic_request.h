/*
 * ezsigntemplatepublic_request.h
 *
 * A Ezsigntemplatepublic Object
 */

#ifndef _ezsigntemplatepublic_request_H_
#define _ezsigntemplatepublic_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepublic_request_t ezsigntemplatepublic_request_t;

#include "field_e_ezsigntemplatepublic_limittype.h"

// Enum  for ezsigntemplatepublic_request

typedef enum  { ezmax_api_definition__full_ezsigntemplatepublic_request__NULL = 0, ezmax_api_definition__full_ezsigntemplatepublic_request__Hour, ezmax_api_definition__full_ezsigntemplatepublic_request__Day, ezmax_api_definition__full_ezsigntemplatepublic_request__Month, ezmax_api_definition__full_ezsigntemplatepublic_request__Total } ezmax_api_definition__full_ezsigntemplatepublic_request__e;

char* ezsigntemplatepublic_request_e_ezsigntemplatepublic_limittype_ToString(ezmax_api_definition__full_ezsigntemplatepublic_request__e e_ezsigntemplatepublic_limittype);

ezmax_api_definition__full_ezsigntemplatepublic_request__e ezsigntemplatepublic_request_e_ezsigntemplatepublic_limittype_FromString(char* e_ezsigntemplatepublic_limittype);



typedef struct ezsigntemplatepublic_request_t {
    int pki_ezsigntemplatepublic_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_userlogintype_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    char *s_ezsigntemplatepublic_description; // string
    int b_ezsigntemplatepublic_isactive; //boolean
    char *t_ezsigntemplatepublic_note; // string
    field_e_ezsigntemplatepublic_limittype_t *e_ezsigntemplatepublic_limittype; // custom
    int i_ezsigntemplatepublic_limit; //numeric

} ezsigntemplatepublic_request_t;

ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_create(
    int pki_ezsigntemplatepublic_id,
    int fki_ezsignfoldertype_id,
    int fki_userlogintype_id,
    int fki_ezsigntemplate_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepublic_description,
    int b_ezsigntemplatepublic_isactive,
    char *t_ezsigntemplatepublic_note,
    field_e_ezsigntemplatepublic_limittype_t *e_ezsigntemplatepublic_limittype,
    int i_ezsigntemplatepublic_limit
);

void ezsigntemplatepublic_request_free(ezsigntemplatepublic_request_t *ezsigntemplatepublic_request);

ezsigntemplatepublic_request_t *ezsigntemplatepublic_request_parseFromJSON(cJSON *ezsigntemplatepublic_requestJSON);

cJSON *ezsigntemplatepublic_request_convertToJSON(ezsigntemplatepublic_request_t *ezsigntemplatepublic_request);

#endif /* _ezsigntemplatepublic_request_H_ */

