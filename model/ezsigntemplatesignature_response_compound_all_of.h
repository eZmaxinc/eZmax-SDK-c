/*
 * ezsigntemplatesignature_response_compound_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatesignature_response_compound_all_of_H_
#define _ezsigntemplatesignature_response_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_response_compound_all_of_t ezsigntemplatesignature_response_compound_all_of_t;

#include "ezsigntemplatesignaturecustomdate_response_compound.h"



typedef struct ezsigntemplatesignature_response_compound_all_of_t {
    int b_ezsigntemplatesignature_customdate; //boolean
    list_t *a_obj_ezsigntemplatesignaturecustomdate; //nonprimitive container

} ezsigntemplatesignature_response_compound_all_of_t;

ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of_create(
    int b_ezsigntemplatesignature_customdate,
    list_t *a_obj_ezsigntemplatesignaturecustomdate
);

void ezsigntemplatesignature_response_compound_all_of_free(ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of);

ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplatesignature_response_compound_all_ofJSON);

cJSON *ezsigntemplatesignature_response_compound_all_of_convertToJSON(ezsigntemplatesignature_response_compound_all_of_t *ezsigntemplatesignature_response_compound_all_of);

#endif /* _ezsigntemplatesignature_response_compound_all_of_H_ */

