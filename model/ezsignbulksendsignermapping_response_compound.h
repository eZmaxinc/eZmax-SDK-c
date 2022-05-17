/*
 * ezsignbulksendsignermapping_response_compound.h
 *
 * A Ezsignbulksendsignermapping Object
 */

#ifndef _ezsignbulksendsignermapping_response_compound_H_
#define _ezsignbulksendsignermapping_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_response_compound_t ezsignbulksendsignermapping_response_compound_t;

#include "ezsignbulksendsignermapping_response.h"



typedef struct ezsignbulksendsignermapping_response_compound_t {
    int pki_ezsignbulksendsignermapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_user_id; //numeric
    char *s_ezsignbulksendsignermapping_description; // string

} ezsignbulksendsignermapping_response_compound_t;

ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
);

void ezsignbulksendsignermapping_response_compound_free(ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound);

ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound_parseFromJSON(cJSON *ezsignbulksendsignermapping_response_compoundJSON);

cJSON *ezsignbulksendsignermapping_response_compound_convertToJSON(ezsignbulksendsignermapping_response_compound_t *ezsignbulksendsignermapping_response_compound);

#endif /* _ezsignbulksendsignermapping_response_compound_H_ */

