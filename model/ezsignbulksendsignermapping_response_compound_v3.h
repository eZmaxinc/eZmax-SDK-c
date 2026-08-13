/*
 * ezsignbulksendsignermapping_response_compound_v3.h
 *
 * A Ezsignbulksendsignermapping Object
 */

#ifndef _ezsignbulksendsignermapping_response_compound_v3_H_
#define _ezsignbulksendsignermapping_response_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_response_compound_v3_t ezsignbulksendsignermapping_response_compound_v3_t;

#include "field_e_ezsignbulksendsignermapping_role.h"



typedef struct ezsignbulksendsignermapping_response_compound_v3_t {
    int *pki_ezsignbulksendsignermapping_id; //numeric
    int *fki_ezsignbulksend_id; //numeric
    int *fki_user_id; //numeric
    ezmax_api_definition__full_field_e_ezsignbulksendsignermapping_role__e e_ezsignbulksendsignermapping_role; //referenced enum
    char *s_ezsignbulksendsignermapping_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendsignermapping_response_compound_v3_t;

__attribute__((deprecated)) ezsignbulksendsignermapping_response_compound_v3_t *ezsignbulksendsignermapping_response_compound_v3_create(
    int *pki_ezsignbulksendsignermapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_user_id,
    ezmax_api_definition__full_field_e_ezsignbulksendsignermapping_role__e e_ezsignbulksendsignermapping_role,
    char *s_ezsignbulksendsignermapping_description
);

void ezsignbulksendsignermapping_response_compound_v3_free(ezsignbulksendsignermapping_response_compound_v3_t *ezsignbulksendsignermapping_response_compound_v3);

ezsignbulksendsignermapping_response_compound_v3_t *ezsignbulksendsignermapping_response_compound_v3_parseFromJSON(cJSON *ezsignbulksendsignermapping_response_compound_v3JSON);

cJSON *ezsignbulksendsignermapping_response_compound_v3_convertToJSON(ezsignbulksendsignermapping_response_compound_v3_t *ezsignbulksendsignermapping_response_compound_v3);

#endif /* _ezsignbulksendsignermapping_response_compound_v3_H_ */

