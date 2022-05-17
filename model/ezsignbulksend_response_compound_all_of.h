/*
 * ezsignbulksend_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignbulksend_response_compound_all_of_H_
#define _ezsignbulksend_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksend_response_compound_all_of_t ezsignbulksend_response_compound_all_of_t;

#include "ezsignbulksenddocumentmapping_response_compound.h"
#include "ezsignbulksendsignermapping_response.h"



typedef struct ezsignbulksend_response_compound_all_of_t {
    list_t *a_obj_ezsignbulksenddocumentmapping; //nonprimitive container
    list_t *a_obj_ezsignbulksendsignermapping; //nonprimitive container

} ezsignbulksend_response_compound_all_of_t;

ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of_create(
    list_t *a_obj_ezsignbulksenddocumentmapping,
    list_t *a_obj_ezsignbulksendsignermapping
);

void ezsignbulksend_response_compound_all_of_free(ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of);

ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of_parseFromJSON(cJSON *ezsignbulksend_response_compound_all_ofJSON);

cJSON *ezsignbulksend_response_compound_all_of_convertToJSON(ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of);

#endif /* _ezsignbulksend_response_compound_all_of_H_ */

