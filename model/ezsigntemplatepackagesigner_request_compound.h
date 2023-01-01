/*
 * ezsigntemplatepackagesigner_request_compound.h
 *
 * A Ezsigntemplatepackagesigner Object and children
 */

#ifndef _ezsigntemplatepackagesigner_request_compound_H_
#define _ezsigntemplatepackagesigner_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_request_compound_t ezsigntemplatepackagesigner_request_compound_t;




typedef struct ezsigntemplatepackagesigner_request_compound_t {
    int pki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    char *s_ezsigntemplatepackagesigner_description; // string

} ezsigntemplatepackagesigner_request_compound_t;

ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepackagesigner_description
);

void ezsigntemplatepackagesigner_request_compound_free(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound);

ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagesigner_request_compoundJSON);

cJSON *ezsigntemplatepackagesigner_request_compound_convertToJSON(ezsigntemplatepackagesigner_request_compound_t *ezsigntemplatepackagesigner_request_compound);

#endif /* _ezsigntemplatepackagesigner_request_compound_H_ */

