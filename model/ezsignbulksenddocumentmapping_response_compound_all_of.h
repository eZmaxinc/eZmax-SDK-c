/*
 * ezsignbulksenddocumentmapping_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignbulksenddocumentmapping_response_compound_all_of_H_
#define _ezsignbulksenddocumentmapping_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksenddocumentmapping_response_compound_all_of_t ezsignbulksenddocumentmapping_response_compound_all_of_t;

#include "ezsigntemplate_response_compound.h"
#include "ezsigntemplatepackage_response_compound.h"



typedef struct ezsignbulksenddocumentmapping_response_compound_all_of_t {
    struct ezsigntemplate_response_compound_t *obj_ezsigntemplate; //model
    struct ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage; //model

} ezsignbulksenddocumentmapping_response_compound_all_of_t;

ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of_create(
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    ezsigntemplatepackage_response_compound_t *obj_ezsigntemplatepackage
);

void ezsignbulksenddocumentmapping_response_compound_all_of_free(ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of);

ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_response_compound_all_ofJSON);

cJSON *ezsignbulksenddocumentmapping_response_compound_all_of_convertToJSON(ezsignbulksenddocumentmapping_response_compound_all_of_t *ezsignbulksenddocumentmapping_response_compound_all_of);

#endif /* _ezsignbulksenddocumentmapping_response_compound_all_of_H_ */

