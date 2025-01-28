/*
 * ezsigntemplateformfieldgroupsigner_request.h
 *
 * A Ezsigntemplateformfieldgroupsigner Object
 */

#ifndef _ezsigntemplateformfieldgroupsigner_request_H_
#define _ezsigntemplateformfieldgroupsigner_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroupsigner_request_t ezsigntemplateformfieldgroupsigner_request_t;




typedef struct ezsigntemplateformfieldgroupsigner_request_t {
    int pki_ezsigntemplateformfieldgroupsigner_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateformfieldgroupsigner_request_t;

__attribute__((deprecated)) ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_create(
    int pki_ezsigntemplateformfieldgroupsigner_id,
    int fki_ezsigntemplatesigner_id
);

void ezsigntemplateformfieldgroupsigner_request_free(ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request);

ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroupsigner_requestJSON);

cJSON *ezsigntemplateformfieldgroupsigner_request_convertToJSON(ezsigntemplateformfieldgroupsigner_request_t *ezsigntemplateformfieldgroupsigner_request);

#endif /* _ezsigntemplateformfieldgroupsigner_request_H_ */

