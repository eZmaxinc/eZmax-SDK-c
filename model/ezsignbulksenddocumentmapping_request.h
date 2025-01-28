/*
 * ezsignbulksenddocumentmapping_request.h
 *
 * A Ezsignbulksenddocumentmapping Object
 */

#ifndef _ezsignbulksenddocumentmapping_request_H_
#define _ezsignbulksenddocumentmapping_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_request_t ezsignbulksenddocumentmapping_request_t;




typedef struct ezsignbulksenddocumentmapping_request_t {
    int pki_ezsignbulksenddocumentmapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksenddocumentmapping_request_t;

__attribute__((deprecated)) ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id
);

void ezsignbulksenddocumentmapping_request_free(ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request);

ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_requestJSON);

cJSON *ezsignbulksenddocumentmapping_request_convertToJSON(ezsignbulksenddocumentmapping_request_t *ezsignbulksenddocumentmapping_request);

#endif /* _ezsignbulksenddocumentmapping_request_H_ */

