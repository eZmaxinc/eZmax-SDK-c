/*
 * ezsignbulksendsignermapping_response.h
 *
 * A Ezsignbulksendsignermapping Object
 */

#ifndef _ezsignbulksendsignermapping_response_H_
#define _ezsignbulksendsignermapping_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_response_t ezsignbulksendsignermapping_response_t;




typedef struct ezsignbulksendsignermapping_response_t {
    int pki_ezsignbulksendsignermapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_user_id; //numeric
    char *s_ezsignbulksendsignermapping_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendsignermapping_response_t;

__attribute__((deprecated)) ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
);

void ezsignbulksendsignermapping_response_free(ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response);

ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response_parseFromJSON(cJSON *ezsignbulksendsignermapping_responseJSON);

cJSON *ezsignbulksendsignermapping_response_convertToJSON(ezsignbulksendsignermapping_response_t *ezsignbulksendsignermapping_response);

#endif /* _ezsignbulksendsignermapping_response_H_ */

