/*
 * ezsignbulksenddocumentmapping_request_compound.h
 *
 * A Ezsignbulksenddocumentmapping Object and children
 */

#ifndef _ezsignbulksenddocumentmapping_request_compound_H_
#define _ezsignbulksenddocumentmapping_request_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_request_compound_t ezsignbulksenddocumentmapping_request_compound_t;




typedef struct ezsignbulksenddocumentmapping_request_compound_t {
    int pki_ezsignbulksenddocumentmapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksenddocumentmapping_request_compound_t;

__attribute__((deprecated)) ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id
);

void ezsignbulksenddocumentmapping_request_compound_free(ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound);

ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_request_compoundJSON);

cJSON *ezsignbulksenddocumentmapping_request_compound_convertToJSON(ezsignbulksenddocumentmapping_request_compound_t *ezsignbulksenddocumentmapping_request_compound);

#endif /* _ezsignbulksenddocumentmapping_request_compound_H_ */

