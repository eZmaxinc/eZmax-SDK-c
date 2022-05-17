/*
 * ezsigntemplatepackagemembership_response_compound.h
 *
 * A Ezsigntemplatepackagemembership Object
 */

#ifndef _ezsigntemplatepackagemembership_response_compound_H_
#define _ezsigntemplatepackagemembership_response_compound_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_response_compound_t ezsigntemplatepackagemembership_response_compound_t;

#include "ezsigntemplate_response_compound.h"
#include "ezsigntemplatepackagemembership_response.h"
#include "ezsigntemplatepackagemembership_response_compound_all_of.h"
#include "ezsigntemplatepackagesignermembership_response_compound.h"



typedef struct ezsigntemplatepackagemembership_response_compound_t {
    int pki_ezsigntemplatepackagemembership_id; //numeric
    int fki_ezsigntemplatepackage_id; //numeric
    int fki_ezsigntemplate_id; //numeric
    int i_ezsigntemplatepackagemembership_order; //numeric
    struct ezsigntemplate_response_compound_t *obj_ezsigntemplate; //model
    list_t *a_obj_ezsigntemplatepackagesignermembership; //nonprimitive container

} ezsigntemplatepackagemembership_response_compound_t;

ezsigntemplatepackagemembership_response_compound_t *ezsigntemplatepackagemembership_response_compound_create(
    int pki_ezsigntemplatepackagemembership_id,
    int fki_ezsigntemplatepackage_id,
    int fki_ezsigntemplate_id,
    int i_ezsigntemplatepackagemembership_order,
    ezsigntemplate_response_compound_t *obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackagesignermembership
);

void ezsigntemplatepackagemembership_response_compound_free(ezsigntemplatepackagemembership_response_compound_t *ezsigntemplatepackagemembership_response_compound);

ezsigntemplatepackagemembership_response_compound_t *ezsigntemplatepackagemembership_response_compound_parseFromJSON(cJSON *ezsigntemplatepackagemembership_response_compoundJSON);

cJSON *ezsigntemplatepackagemembership_response_compound_convertToJSON(ezsigntemplatepackagemembership_response_compound_t *ezsigntemplatepackagemembership_response_compound);

#endif /* _ezsigntemplatepackagemembership_response_compound_H_ */

