/*
 * ezsignbulksend_request_compound.h
 *
 * A Ezsignbulksend Object and children
 */

#ifndef _ezsignbulksend_request_compound_H_
#define _ezsignbulksend_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_request_compound_t ezsignbulksend_request_compound_t;




typedef struct ezsignbulksend_request_compound_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsignbulksend_description; // string
    char *t_ezsignbulksend_note; // string
    int b_ezsignbulksend_needvalidation; //boolean
    int b_ezsignbulksend_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_request_compound_t;

__attribute__((deprecated)) ezsignbulksend_request_compound_t *ezsignbulksend_request_compound_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive
);

void ezsignbulksend_request_compound_free(ezsignbulksend_request_compound_t *ezsignbulksend_request_compound);

ezsignbulksend_request_compound_t *ezsignbulksend_request_compound_parseFromJSON(cJSON *ezsignbulksend_request_compoundJSON);

cJSON *ezsignbulksend_request_compound_convertToJSON(ezsignbulksend_request_compound_t *ezsignbulksend_request_compound);

#endif /* _ezsignbulksend_request_compound_H_ */

