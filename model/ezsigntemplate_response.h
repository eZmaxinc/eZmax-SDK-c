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




typedef struct ezsigntemplate_response_t {
    int pki_ezsigntemplate_id; //numeric
    int fki_ezsigntemplatedocument_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_language_name_x; // string
    char *s_ezsigntemplate_description; // string
    int b_ezsigntemplate_adminonly; //boolean
    char *s_ezsignfoldertype_name_x; // string

} ezsigntemplate_response_t;

ezsigntemplate_response_t *ezsigntemplate_response_create(
    int pki_ezsigntemplate_id,
    int fki_ezsigntemplatedocument_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_language_name_x,
    char *s_ezsigntemplate_description,
    int b_ezsigntemplate_adminonly,
    char *s_ezsignfoldertype_name_x
);

void ezsigntemplate_response_free(ezsigntemplate_response_t *ezsigntemplate_response);

ezsigntemplate_response_t *ezsigntemplate_response_parseFromJSON(cJSON *ezsigntemplate_responseJSON);

cJSON *ezsigntemplate_response_convertToJSON(ezsigntemplate_response_t *ezsigntemplate_response);

#endif /* _ezsigntemplate_response_H_ */

