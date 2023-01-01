/*
 * ezsigntemplatesigner_request_compound.h
 *
 * A Ezsigntemplatesigner Object and children
 */

#ifndef _ezsigntemplatesigner_request_compound_H_
#define _ezsigntemplatesigner_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_request_compound_t ezsigntemplatesigner_request_compound_t;




typedef struct ezsigntemplatesigner_request_compound_t {
    int pki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    char *s_ezsigntemplatesigner_description; // string

} ezsigntemplatesigner_request_compound_t;

ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatesigner_description
);

void ezsigntemplatesigner_request_compound_free(ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound);

ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound_parseFromJSON(cJSON *ezsigntemplatesigner_request_compoundJSON);

cJSON *ezsigntemplatesigner_request_compound_convertToJSON(ezsigntemplatesigner_request_compound_t *ezsigntemplatesigner_request_compound);

#endif /* _ezsigntemplatesigner_request_compound_H_ */

