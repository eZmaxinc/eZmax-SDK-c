/*
 * ezsigntemplateformfieldgroupsigner_response.h
 *
 * A Ezsigntemplateformfieldgroupsigner Object
 */

#ifndef _ezsigntemplateformfieldgroupsigner_response_H_
#define _ezsigntemplateformfieldgroupsigner_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateformfieldgroupsigner_response_t ezsigntemplateformfieldgroupsigner_response_t;




typedef struct ezsigntemplateformfieldgroupsigner_response_t {
    int pki_ezsigntemplateformfieldgroupsigner_id; //numeric
    int fki_ezsigntemplatesigner_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplateformfieldgroupsigner_response_t;

__attribute__((deprecated)) ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response_create(
    int pki_ezsigntemplateformfieldgroupsigner_id,
    int fki_ezsigntemplatesigner_id
);

void ezsigntemplateformfieldgroupsigner_response_free(ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response);

ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response_parseFromJSON(cJSON *ezsigntemplateformfieldgroupsigner_responseJSON);

cJSON *ezsigntemplateformfieldgroupsigner_response_convertToJSON(ezsigntemplateformfieldgroupsigner_response_t *ezsigntemplateformfieldgroupsigner_response);

#endif /* _ezsigntemplateformfieldgroupsigner_response_H_ */

