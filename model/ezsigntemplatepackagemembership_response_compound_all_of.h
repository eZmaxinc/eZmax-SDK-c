/*
 * ezsigntemplatepackagemembership_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatepackagemembership_response_compound_all_of_H_
#define _ezsigntemplatepackagemembership_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_response_compound_all_of_t ezsigntemplatepackagemembership_response_compound_all_of_t;

#include "ezsigntemplate_response_compound.h"
#include "ezsigntemplatepackagesignermembership_response_compound.h"



typedef struct ezsigntemplatepackagemembership_response_compound_all_of_t {
    struct ezsigntemplate_response_compound_t *obj_ezsigntemplate; //model
    list_t *a_obj_ezsigntemplatepackagesignermembership; //nonprimitive container

} ezsigntemplatepackagemembership_response_compound_all_of_t;

ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of_create(
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackagesignermembership
);

void ezsigntemplatepackagemembership_response_compound_all_of_free(ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of);

ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplatepackagemembership_response_compound_all_ofJSON);

cJSON *ezsigntemplatepackagemembership_response_compound_all_of_convertToJSON(ezsigntemplatepackagemembership_response_compound_all_of_t *ezsigntemplatepackagemembership_response_compound_all_of);

#endif /* _ezsigntemplatepackagemembership_response_compound_all_of_H_ */

