/*
 * ezsigntemplateglobalsigner_response_compound.h
 *
 * A Ezsigntemplateglobalsigner Object
 */

#ifndef _ezsigntemplateglobalsigner_response_compound_H_
#define _ezsigntemplateglobalsigner_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplateglobalsigner_response_compound_t ezsigntemplateglobalsigner_response_compound_t;

#include "ezsigntemplateglobalsigner_response.h"



typedef struct ezsigntemplateglobalsigner_response_compound_t {
    int pki_ezsigntemplateglobalsigner_id; //numeric
    int fki_ezsigntemplateglobal_id; //numeric
    char *s_ezsigntemplateglobalsigner_description; // string

} ezsigntemplateglobalsigner_response_compound_t;

ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound_create(
    int pki_ezsigntemplateglobalsigner_id,
    int fki_ezsigntemplateglobal_id,
    char *s_ezsigntemplateglobalsigner_description
);

void ezsigntemplateglobalsigner_response_compound_free(ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound);

ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound_parseFromJSON(cJSON *ezsigntemplateglobalsigner_response_compoundJSON);

cJSON *ezsigntemplateglobalsigner_response_compound_convertToJSON(ezsigntemplateglobalsigner_response_compound_t *ezsigntemplateglobalsigner_response_compound);

#endif /* _ezsigntemplateglobalsigner_response_compound_H_ */

