/*
 * ezsigntemplatepackage_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatepackage_response_compound_all_of_H_
#define _ezsigntemplatepackage_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackage_response_compound_all_of_t ezsigntemplatepackage_response_compound_all_of_t;

#include "ezsigntemplatepackagemembership_response_compound.h"
#include "ezsigntemplatepackagesigner_response_compound.h"



typedef struct ezsigntemplatepackage_response_compound_all_of_t {
    list_t *a_obj_ezsigntemplatepackagesigner; //nonprimitive container
    list_t *a_obj_ezsigntemplatepackagemembership; //nonprimitive container

} ezsigntemplatepackage_response_compound_all_of_t;

ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of_create(
    list_t *a_obj_ezsigntemplatepackagesigner,
    list_t *a_obj_ezsigntemplatepackagemembership
);

void ezsigntemplatepackage_response_compound_all_of_free(ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of);

ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplatepackage_response_compound_all_ofJSON);

cJSON *ezsigntemplatepackage_response_compound_all_of_convertToJSON(ezsigntemplatepackage_response_compound_all_of_t *ezsigntemplatepackage_response_compound_all_of);

#endif /* _ezsigntemplatepackage_response_compound_all_of_H_ */

