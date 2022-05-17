/*
 * ezsigntemplatepackagesigner_response_compound.h
 *
 * A Ezsigntemplatepackagesigner Object
 */

#ifndef _ezsigntemplatepackagesigner_response_compound_H_
#define _ezsigntemplatepackagesigner_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesigner_response_compound_t ezsigntemplatepackagesigner_response_compound_t;

#include "ezsigntemplatepackagesigner_response.h"



typedef struct ezsigntemplatepackagesigner_response_compound_t {
    int pki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    char *s_ezsigntemplatepackagesigner_description; // string

} ezsigntemplatepackagesigner_response_compound_t;

ezsigntemplatepackagesigner_response_compound_t *ezsigntemplatepackagesigner_response_compound_create(
    int pki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatepackage_id,
    char *s_ezsigntemplatepackagesigner_description
);

void ezsigntemplatepackagesigner_response_compound_free(ezsigntemplatepackagesigner_response_compound_t *ezsigntemplatepackagesigner_response_compound);

ezsigntemplatepackagesigner_response_compound_t *ezsigntemplatepackagesigner_response_compound_parseFromJSON(cJSON *ezsigntemplatepackagesigner_response_compoundJSON);

cJSON *ezsigntemplatepackagesigner_response_compound_convertToJSON(ezsigntemplatepackagesigner_response_compound_t *ezsigntemplatepackagesigner_response_compound);

#endif /* _ezsigntemplatepackagesigner_response_compound_H_ */

