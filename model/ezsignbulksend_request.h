/*
 * ezsignbulksend_request.h
 *
 * A Ezsignbulksend Object
 */

#ifndef _ezsignbulksend_request_H_
#define _ezsignbulksend_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_request_t ezsignbulksend_request_t;




typedef struct ezsignbulksend_request_t {
    int pki_ezsignbulksend_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsignbulksend_description; // string
    char *t_ezsignbulksend_note; // string
    int b_ezsignbulksend_needvalidation; //boolean
    int b_ezsignbulksend_isactive; //boolean

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksend_request_t;

__attribute__((deprecated)) ezsignbulksend_request_t *ezsignbulksend_request_create(
    int pki_ezsignbulksend_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsignbulksend_description,
    char *t_ezsignbulksend_note,
    int b_ezsignbulksend_needvalidation,
    int b_ezsignbulksend_isactive
);

void ezsignbulksend_request_free(ezsignbulksend_request_t *ezsignbulksend_request);

ezsignbulksend_request_t *ezsignbulksend_request_parseFromJSON(cJSON *ezsignbulksend_requestJSON);

cJSON *ezsignbulksend_request_convertToJSON(ezsignbulksend_request_t *ezsignbulksend_request);

#endif /* _ezsignbulksend_request_H_ */

