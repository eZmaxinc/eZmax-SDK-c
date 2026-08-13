/*
 * ezsigntemplatepackagemembership_response_compound_v3.h
 *
 * A Ezsigntemplatepackagemembership Object
 */

#ifndef _ezsigntemplatepackagemembership_response_compound_v3_H_
#define _ezsigntemplatepackagemembership_response_compound_v3_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagemembership_response_compound_v3_t ezsigntemplatepackagemembership_response_compound_v3_t;

#include "ezsigntemplate_response_compound_v4.h"
#include "ezsigntemplatepackagesignermembership_response_compound.h"



typedef struct ezsigntemplatepackagemembership_response_compound_v3_t {
    int *pki_ezsigntemplatepackagemembership_id; //numeric
    int *fki_ezsigntemplatepackage_id; //numeric
    int *fki_ezsigntemplate_id; //numeric
    int *i_ezsigntemplatepackagemembership_order; //numeric
    struct ezsigntemplate_response_compound_v4_t *obj_ezsigntemplate; //model
    list_t *a_obj_ezsigntemplatepackagesignermembership; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagemembership_response_compound_v3_t;

__attribute__((deprecated)) ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3_create(
    int *pki_ezsigntemplatepackagemembership_id,
    int *fki_ezsigntemplatepackage_id,
    int *fki_ezsigntemplate_id,
    int *i_ezsigntemplatepackagemembership_order,
    ezsigntemplate_response_compound_v4_t *obj_ezsigntemplate,
    list_t *a_obj_ezsigntemplatepackagesignermembership
);

void ezsigntemplatepackagemembership_response_compound_v3_free(ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3);

ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3_parseFromJSON(cJSON *ezsigntemplatepackagemembership_response_compound_v3JSON);

cJSON *ezsigntemplatepackagemembership_response_compound_v3_convertToJSON(ezsigntemplatepackagemembership_response_compound_v3_t *ezsigntemplatepackagemembership_response_compound_v3);

#endif /* _ezsigntemplatepackagemembership_response_compound_v3_H_ */

