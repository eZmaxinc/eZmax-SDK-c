/*
 * ezsigntemplatepackage_request.h
 *
 * A Ezsigntemplatepackage Object
 */

#ifndef _ezsigntemplatepackage_request_H_
#define _ezsigntemplatepackage_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_request_t ezsigntemplatepackage_request_t;




typedef struct ezsigntemplatepackage_request_t {
    int pki_ezsigntemplatepackage_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsigntemplatepackage_description; // string
    int b_ezsigntemplatepackage_adminonly; //boolean
    int b_ezsigntemplatepackage_isactive; //boolean

} ezsigntemplatepackage_request_t;

ezsigntemplatepackage_request_t *ezsigntemplatepackage_request_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_isactive
);

void ezsigntemplatepackage_request_free(ezsigntemplatepackage_request_t *ezsigntemplatepackage_request);

ezsigntemplatepackage_request_t *ezsigntemplatepackage_request_parseFromJSON(cJSON *ezsigntemplatepackage_requestJSON);

cJSON *ezsigntemplatepackage_request_convertToJSON(ezsigntemplatepackage_request_t *ezsigntemplatepackage_request);

#endif /* _ezsigntemplatepackage_request_H_ */

