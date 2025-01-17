/*
 * ezsigntemplatepackagesignermembership_request_compound.h
 *
 * A Ezsigntemplatepackagesignermembership Object and children
 */

#ifndef _ezsigntemplatepackagesignermembership_request_compound_H_
#define _ezsigntemplatepackagesignermembership_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesignermembership_request_compound_t ezsigntemplatepackagesignermembership_request_compound_t;




typedef struct ezsigntemplatepackagesignermembership_request_compound_t {
    int pki_ezsigntemplatepackagesignermembership_id; //numeric
    int fki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackagesigner_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric
    int i_ezsigntemplatepackagesignermembership_copy; //numeric

} ezsigntemplatepackagesignermembership_request_compound_t;

ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound_create(
    int pki_ezsigntemplatepackagesignermembership_id,
    int fki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackagesigner_id,
    int fki_ezsigntemplatesigner_id,
    int i_ezsigntemplatepackagesignermembership_copy
);

void ezsigntemplatepackagesignermembership_request_compound_free(ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound);

ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_request_compoundJSON);

cJSON *ezsigntemplatepackagesignermembership_request_compound_convertToJSON(ezsigntemplatepackagesignermembership_request_compound_t *ezsigntemplatepackagesignermembership_request_compound);

#endif /* _ezsigntemplatepackagesignermembership_request_compound_H_ */

