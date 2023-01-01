/*
 * ezsignbulksenddocumentmapping_response_compound.h
 *
 * A Ezsignbulksenddocumentmapping Object
 */

#ifndef _ezsignbulksenddocumentmapping_response_compound_H_
#define _ezsignbulksenddocumentmapping_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_response_compound_t ezsignbulksenddocumentmapping_response_compound_t;

#include "ezsigntemplate_response_compound.h"
#include "ezsigntemplatepackage_response_compound.h"



typedef struct ezsignbulksenddocumentmapping_response_compound_t {
    int pki_ezsignbulksenddocumentmapping_id; //numeric
    int fki_ezsignbulksend_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int i_ezsignbulksenddocumentmapping_order; //numeric
    struct ezsigntemplate_response_compound_t *obj_ezsigntemplate; //model
    struct ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage; //model

} ezsignbulksenddocumentmapping_response_compound_t;

ezsignbulksenddocumentmapping_response_compound_t *ezsignbulksenddocumentmapping_response_compound_create(
    int pki_ezsignbulksenddocumentmapping_id,
    int fki_ezsignbulksend_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsignbulksenddocumentmapping_order,
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage
);

void ezsignbulksenddocumentmapping_response_compound_free(ezsignbulksenddocumentmapping_response_compound_t *ezsignbulksenddocumentmapping_response_compound);

ezsignbulksenddocumentmapping_response_compound_t *ezsignbulksenddocumentmapping_response_compound_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_response_compoundJSON);

cJSON *ezsignbulksenddocumentmapping_response_compound_convertToJSON(ezsignbulksenddocumentmapping_response_compound_t *ezsignbulksenddocumentmapping_response_compound);

#endif /* _ezsignbulksenddocumentmapping_response_compound_H_ */

