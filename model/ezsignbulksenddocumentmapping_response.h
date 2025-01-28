/*
 * ezsignbulksenddocumentmapping_response.h
 *
 * A Ezsignbulksenddocumentmapping Object
 */

#ifndef _ezsignbulksenddocumentmapping_response_H_
#define _ezsignbulksenddocumentmapping_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_response_t ezsignbulksenddocumentmapping_response_t;




typedef struct ezsignbulksenddocumentmapping_response_t {
    int pki_ezsignbulksenddocumentmapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int i_ezsignbulksenddocumentmapping_order; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksenddocumentmapping_response_t;

__attribute__((deprecated)) ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsignbulksenddocumentmapping_order
);

void ezsignbulksenddocumentmapping_response_free(ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response);

ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_responseJSON);

cJSON *ezsignbulksenddocumentmapping_response_convertToJSON(ezsignbulksenddocumentmapping_response_t *ezsignbulksenddocumentmapping_response);

#endif /* _ezsignbulksenddocumentmapping_response_H_ */

