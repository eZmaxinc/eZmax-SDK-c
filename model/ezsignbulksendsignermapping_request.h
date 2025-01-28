/*
 * ezsignbulksendsignermapping_request.h
 *
 * A Ezsignbulksendsignermapping Object
 */

#ifndef _ezsignbulksendsignermapping_request_H_
#define _ezsignbulksendsignermapping_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_request_t ezsignbulksendsignermapping_request_t;




typedef struct ezsignbulksendsignermapping_request_t {
    int pki_ezsignbulksendsignermapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_user_id; //numeric
    char *s_ezsignbulksendsignermapping_description; // string

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendsignermapping_request_t;

__attribute__((deprecated)) ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_create(
    int pki_ezsignbulksendsignermapping_id,
    int fki_ezsignbulksend_id,
    int fki_user_id,
    char *s_ezsignbulksendsignermapping_description
);

void ezsignbulksendsignermapping_request_free(ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request);

ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request_parseFromJSON(cJSON *ezsignbulksendsignermapping_requestJSON);

cJSON *ezsignbulksendsignermapping_request_convertToJSON(ezsignbulksendsignermapping_request_t *ezsignbulksendsignermapping_request);

#endif /* _ezsignbulksendsignermapping_request_H_ */

