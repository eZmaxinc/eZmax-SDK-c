/*
 * ezsigntemplateformfieldgroupsigner_request_compound.h
 *
 * An Ezsigntemplateformfieldgroupsigner Object and children to create a complete structure
 */

#ifndef _ezsigntemplateformfieldgroupsigner_request_compound_H_
#define _ezsigntemplateformfieldgroupsigner_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroupsigner_request_compound_t ezsigntemplateformfieldgroupsigner_request_compound_t;

#include "ezsigntemplateformfieldgroupsigner_request.h"



typedef struct ezsigntemplateformfieldgroupsigner_request_compound_t {
    int pki_ezsigntemplateformfieldgroupsigner_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric

} ezsigntemplateformfieldgroupsigner_request_compound_t;

ezsigntemplateformfieldgroupsigner_request_compound_t *ezsigntemplateformfieldgroupsigner_request_compound_create(
    int pki_ezsigntemplateformfieldgroupsigner_id,
    int fki_ezsigntemplatesigner_id
);

void ezsigntemplateformfieldgroupsigner_request_compound_free(ezsigntemplateformfieldgroupsigner_request_compound_t *ezsigntemplateformfieldgroupsigner_request_compound);

ezsigntemplateformfieldgroupsigner_request_compound_t *ezsigntemplateformfieldgroupsigner_request_compound_parseFromJSON(cJSON *ezsigntemplateformfieldgroupsigner_request_compoundJSON);

cJSON *ezsigntemplateformfieldgroupsigner_request_compound_convertToJSON(ezsigntemplateformfieldgroupsigner_request_compound_t *ezsigntemplateformfieldgroupsigner_request_compound);

#endif /* _ezsigntemplateformfieldgroupsigner_request_compound_H_ */

