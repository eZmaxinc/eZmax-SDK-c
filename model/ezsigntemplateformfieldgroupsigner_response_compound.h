/*
 * ezsigntemplateformfieldgroupsigner_response_compound.h
 *
 * An Ezsigntemplateformfieldgroupsigner Object and children
 */

#ifndef _ezsigntemplateformfieldgroupsigner_response_compound_H_
#define _ezsigntemplateformfieldgroupsigner_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroupsigner_response_compound_t ezsigntemplateformfieldgroupsigner_response_compound_t;

#include "ezsigntemplateformfieldgroupsigner_response.h"



typedef struct ezsigntemplateformfieldgroupsigner_response_compound_t {
    int pki_ezsigntemplateformfieldgroupsigner_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric

} ezsigntemplateformfieldgroupsigner_response_compound_t;

ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_create(
    int pki_ezsigntemplateformfieldgroupsigner_id,
    int fki_ezsigntemplatesigner_id
);

void ezsigntemplateformfieldgroupsigner_response_compound_free(ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound);

ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound_parseFromJSON(cJSON *ezsigntemplateformfieldgroupsigner_response_compoundJSON);

cJSON *ezsigntemplateformfieldgroupsigner_response_compound_convertToJSON(ezsigntemplateformfieldgroupsigner_response_compound_t *ezsigntemplateformfieldgroupsigner_response_compound);

#endif /* _ezsigntemplateformfieldgroupsigner_response_compound_H_ */

