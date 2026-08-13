/*
 * ezsignbulksenddocumentmapping_response_compound_v3.h
 *
 * A Ezsignbulksenddocumentmapping Object
 */

#ifndef _ezsignbulksenddocumentmapping_response_compound_v3_H_
#define _ezsignbulksenddocumentmapping_response_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_response_compound_v3_t ezsignbulksenddocumentmapping_response_compound_v3_t;

#include "ezsigntemplate_response_compound_v4.h"
#include "ezsigntemplatepackage_response_compound_v3.h"



typedef struct ezsignbulksenddocumentmapping_response_compound_v3_t {
    int *pki_ezsignbulksenddocumentmapping_id; //numeric
    int *fki_ezsignbulksend_id; //numeric
    int *fki_ezsigntemplatepackage_id; //numeric
    int *fki_ezsigntemplate_id; //numeric
    int *i_ezsignbulksenddocumentmapping_order; //numeric
    struct ezsigntemplate_response_compound_v4_t *obj_ezsigntemplate; //model
    struct ezsigntemplatepackage_response_compound_v3_t *obj_ezsigntemplatepackage; //model

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksenddocumentmapping_response_compound_v3_t;

__attribute__((deprecated)) ezsignbulksenddocumentmapping_response_compound_v3_t *ezsignbulksenddocumentmapping_response_compound_v3_create(
    int *pki_ezsignbulksenddocumentmapping_id,
    int *fki_ezsignbulksend_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezsigntemplate_id,
    int *i_ezsignbulksenddocumentmapping_order,
    ezsigntemplate_response_compound_v4_t *obj_ezsigntemplate,
    ezsigntemplatepackage_response_compound_v3_t *obj_ezsigntemplatepackage
);

void ezsignbulksenddocumentmapping_response_compound_v3_free(ezsignbulksenddocumentmapping_response_compound_v3_t *ezsignbulksenddocumentmapping_response_compound_v3);

ezsignbulksenddocumentmapping_response_compound_v3_t *ezsignbulksenddocumentmapping_response_compound_v3_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_response_compound_v3JSON);

cJSON *ezsignbulksenddocumentmapping_response_compound_v3_convertToJSON(ezsignbulksenddocumentmapping_response_compound_v3_t *ezsignbulksenddocumentmapping_response_compound_v3);

#endif /* _ezsignbulksenddocumentmapping_response_compound_v3_H_ */

