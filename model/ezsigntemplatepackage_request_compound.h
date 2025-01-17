/*
 * ezsigntemplatepackage_request_compound.h
 *
 * A Ezsigntemplatepackage Object and children
 */

#ifndef _ezsigntemplatepackage_request_compound_H_
#define _ezsigntemplatepackage_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_request_compound_t ezsigntemplatepackage_request_compound_t;

#include "ezsigntemplatepackage_request.h"



typedef struct ezsigntemplatepackage_request_compound_t {
    int pki_ezsigntemplatepackage_id; //numeric
    int fki_ezsignfoldertype_id; //numeric
    int fki_ezdoctemplatedocument_id; //numeric
    int fki_language_id; //numeric
    char *s_ezsigntemplatepackage_description; // string
    int b_ezsigntemplatepackage_adminonly; //boolean
    int b_ezsigntemplatepackage_isactive; //boolean

} ezsigntemplatepackage_request_compound_t;

ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound_create(
    int pki_ezsigntemplatepackage_id,
    int fki_ezsignfoldertype_id,
    int fki_ezdoctemplatedocument_id,
    int fki_language_id,
    char *s_ezsigntemplatepackage_description,
    int b_ezsigntemplatepackage_adminonly,
    int b_ezsigntemplatepackage_isactive
);

void ezsigntemplatepackage_request_compound_free(ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound);

ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound_parseFromJSON(cJSON *ezsigntemplatepackage_request_compoundJSON);

cJSON *ezsigntemplatepackage_request_compound_convertToJSON(ezsigntemplatepackage_request_compound_t *ezsigntemplatepackage_request_compound);

#endif /* _ezsigntemplatepackage_request_compound_H_ */

