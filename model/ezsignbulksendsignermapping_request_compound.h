/*
 * ezsignbulksendsignermapping_request_compound.h
 *
 * A Ezsignbulksendsignermapping Object and children
 */

#ifndef _ezsignbulksendsignermapping_request_compound_H_
#define _ezsignbulksendsignermapping_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_request_compound_t ezsignbulksendsignermapping_request_compound_t;

#include "ezsignbulksendsignermapping_request.h"



typedef struct ezsignbulksendsignermapping_request_compound_t {
    int pki_ezsignbulksendsignermapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_user_id; //numeric
    char *s_ezsignbulksendsignermapping_description; // string

} ezsignbulksendsignermapping_request_compound_t;

ezsignbulksendsignermapping_request_compound_t *ezsignbulksendsignermapping_request_compound_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
);

void ezsignbulksendsignermapping_request_compound_free(ezsignbulksendsignermapping_request_compound_t *ezsignbulksendsignermapping_request_compound);

ezsignbulksendsignermapping_request_compound_t *ezsignbulksendsignermapping_request_compound_parseFromJSON(cJSON *ezsignbulksendsignermapping_request_compoundJSON);

cJSON *ezsignbulksendsignermapping_request_compound_convertToJSON(ezsignbulksendsignermapping_request_compound_t *ezsignbulksendsignermapping_request_compound);

#endif /* _ezsignbulksendsignermapping_request_compound_H_ */

