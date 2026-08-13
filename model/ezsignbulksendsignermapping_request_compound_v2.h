/*
 * ezsignbulksendsignermapping_request_compound_v2.h
 *
 * A Ezsignbulksendsignermapping Object and children
 */

#ifndef _ezsignbulksendsignermapping_request_compound_v2_H_
#define _ezsignbulksendsignermapping_request_compound_v2_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_request_compound_v2_t ezsignbulksendsignermapping_request_compound_v2_t;

#include "field_e_ezsignbulksendsignermapping_role.h"



typedef struct ezsignbulksendsignermapping_request_compound_v2_t {
    int *pki_ezsignbulksendsignermapping_id; //numeric
    int *fki_ezsignbulksend_id; //numeric
    int *fki_user_id; //numeric
    ezmax_api_definition__full_field_e_ezsignbulksendsignermapping_role__e e_ezsignbulksendsignermapping_role; //referenced enum
    char *s_ezsignbulksendsignermapping_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendsignermapping_request_compound_v2_t;

__attribute__((deprecated)) ezsignbulksendsignermapping_request_compound_v2_t *ezsignbulksendsignermapping_request_compound_v2_create(
    int *pki_ezsignbulksendsignermapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_user_id,
    ezmax_api_definition__full_field_e_ezsignbulksendsignermapping_role__e e_ezsignbulksendsignermapping_role,
    char *s_ezsignbulksendsignermapping_description
);

void ezsignbulksendsignermapping_request_compound_v2_free(ezsignbulksendsignermapping_request_compound_v2_t *ezsignbulksendsignermapping_request_compound_v2);

ezsignbulksendsignermapping_request_compound_v2_t *ezsignbulksendsignermapping_request_compound_v2_parseFromJSON(cJSON *ezsignbulksendsignermapping_request_compound_v2JSON);

cJSON *ezsignbulksendsignermapping_request_compound_v2_convertToJSON(ezsignbulksendsignermapping_request_compound_v2_t *ezsignbulksendsignermapping_request_compound_v2);

#endif /* _ezsignbulksendsignermapping_request_compound_v2_H_ */

