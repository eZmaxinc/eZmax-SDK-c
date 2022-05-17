/*
 * ezsigntemplate_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplate_response_compound_all_of_H_
#define _ezsigntemplate_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplate_response_compound_all_of_t ezsigntemplate_response_compound_all_of_t;

#include "ezsigntemplatedocument_response.h"
#include "ezsigntemplatesigner_response_compound.h"



typedef struct ezsigntemplate_response_compound_all_of_t {
    struct ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument; //model
    list_t *a_obj_ezsigntemplatesigner; //nonprimitive container

} ezsigntemplate_response_compound_all_of_t;

ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of_create(
    ezsigntemplatedocument_response_t *obj_ezsigntemplatedocument,
    list_t *a_obj_ezsigntemplatesigner
);

void ezsigntemplate_response_compound_all_of_free(ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of);

ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplate_response_compound_all_ofJSON);

cJSON *ezsigntemplate_response_compound_all_of_convertToJSON(ezsigntemplate_response_compound_all_of_t *ezsigntemplate_response_compound_all_of);

#endif /* _ezsigntemplate_response_compound_all_of_H_ */

