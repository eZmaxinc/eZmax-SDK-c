/*
 * ezsigntemplatesigner_request.h
 *
 * A Ezsigntemplatesigner Object
 */

#ifndef _ezsigntemplatesigner_request_H_
#define _ezsigntemplatesigner_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_request_t ezsigntemplatesigner_request_t;




typedef struct ezsigntemplatesigner_request_t {
    int pki_ezsigntemplatesigner_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    char *s_ezsigntemplatesigner_description; // string

} ezsigntemplatesigner_request_t;

ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_create(
    int pki_ezsigntemplatesigner_id,
    int fki_ezsigntemplate_id,
    char *s_ezsigntemplatesigner_description
);

void ezsigntemplatesigner_request_free(ezsigntemplatesigner_request_t *ezsigntemplatesigner_request);

ezsigntemplatesigner_request_t *ezsigntemplatesigner_request_parseFromJSON(cJSON *ezsigntemplatesigner_requestJSON);

cJSON *ezsigntemplatesigner_request_convertToJSON(ezsigntemplatesigner_request_t *ezsigntemplatesigner_request);

#endif /* _ezsigntemplatesigner_request_H_ */

