/*
 * ezsignbulksend_request_v2.h
 *
 * A Ezsignbulksend Object
 */

#ifndef _ezsignbulksend_request_v2_H_
#define _ezsignbulksend_request_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_request_v2_t ezsignbulksend_request_v2_t;

#include "field_e_ezsignbulksend_ezsignformfieldorder.h"



typedef struct ezsignbulksend_request_v2_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    ezmax_api_definition__full_field_e_ezsignbulksend_ezsignformfieldorder__e e_ezsignbulksend_ezsignformfieldorder; //referenced enum
    char *s_ezsignbulksend_description; // string
    char *t_ezsignbulksend_note; // string
    int b_ezsignbulksend_needvalidation; //boolean
    int b_ezsignbulksend_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_request_v2_t;

__attribute__((deprecated)) ezsignbulksend_request_v2_t *ezsignbulksend_request_v2_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    ezmax_api_definition__full_field_e_ezsignbulksend_ezsignformfieldorder__e e_ezsignbulksend_ezsignformfieldorder,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive
);

void ezsignbulksend_request_v2_free(ezsignbulksend_request_v2_t *ezsignbulksend_request_v2);

ezsignbulksend_request_v2_t *ezsignbulksend_request_v2_parseFromJSON(cJSON *ezsignbulksend_request_v2JSON);

cJSON *ezsignbulksend_request_v2_convertToJSON(ezsignbulksend_request_v2_t *ezsignbulksend_request_v2);

#endif /* _ezsignbulksend_request_v2_H_ */

