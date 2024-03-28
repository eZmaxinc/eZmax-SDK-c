/*
 * ezsigntemplate_request.h
 *
 * A Ezsigntemplate Object
 */

#ifndef _ezsigntemplate_request_H_
#define _ezsigntemplate_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_request_t ezsigntemplate_request_t;




typedef struct ezsigntemplate_request_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsigntemplate_description; // string
    char *s_ezsigntemplate_filenamepattern; // string
    int b_ezsigntemplate_adminonly; //boolean

} ezsigntemplate_request_t;

ezsigntemplate_request_t *ezsigntemplate_request_create(
    int pki_ezsigntemplate_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplate_description,
    char *s_ezsigntemplate_filenamepattern,
    int b_ezsigntemplate_adminonly
);

void ezsigntemplate_request_free(ezsigntemplate_request_t *ezsigntemplate_request);

ezsigntemplate_request_t *ezsigntemplate_request_parseFromJSON(cJSON *ezsigntemplate_requestJSON);

cJSON *ezsigntemplate_request_convertToJSON(ezsigntemplate_request_t *ezsigntemplate_request);

#endif /* _ezsigntemplate_request_H_ */

