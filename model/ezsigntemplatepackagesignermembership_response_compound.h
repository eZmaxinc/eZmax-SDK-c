/*
 * ezsigntemplatepackagesignermembership_response_compound.h
 *
 * A Ezsigntemplatepackagesignermembership Object
 */

#ifndef _ezsigntemplatepackagesignermembership_response_compound_H_
#define _ezsigntemplatepackagesignermembership_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesignermembership_response_compound_t ezsigntemplatepackagesignermembership_response_compound_t;




typedef struct ezsigntemplatepackagesignermembership_response_compound_t {
    int pki_ezsigntemplatepackagesignermembership_id; //numeric
    int fki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric
    int i_ezsigntemplatepackagesignermembership_copy; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesignermembership_response_compound_t;

__attribute__((deprecated)) ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound_create(
    int pki_ezsigntemplatepackagesignermembership_id,
    int fki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatepackagesignermembership_copy
);

void ezsigntemplatepackagesignermembership_response_compound_free(ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound);

ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_response_compoundJSON);

cJSON *ezsigntemplatepackagesignermembership_response_compound_convertToJSON(ezsigntemplatepackagesignermembership_response_compound_t *ezsigntemplatepackagesignermembership_response_compound);

#endif /* _ezsigntemplatepackagesignermembership_response_compound_H_ */

