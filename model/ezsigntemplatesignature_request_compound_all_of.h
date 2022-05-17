/*
 * ezsigntemplatesignature_request_compound_all_of.h
 *
 * 
 */

#ifndef _ezsigntemplatesignature_request_compound_all_of_H_
#define _ezsigntemplatesignature_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_request_compound_all_of_t ezsigntemplatesignature_request_compound_all_of_t;

#include "ezsigntemplatesignaturecustomdate_request_compound.h"



typedef struct ezsigntemplatesignature_request_compound_all_of_t {
    int b_ezsigntemplatesignature_customdate; //boolean
    list_t *a_obj_ezsigntemplatesignaturecustomdate; //nonprimitive container

} ezsigntemplatesignature_request_compound_all_of_t;

ezsigntemplatesignature_request_compound_all_of_t *ezsigntemplatesignature_request_compound_all_of_create(
    int b_ezsigntemplatesignature_customdate,
    list_t *a_obj_ezsigntemplatesignaturecustomdate
);

void ezsigntemplatesignature_request_compound_all_of_free(ezsigntemplatesignature_request_compound_all_of_t *ezsigntemplatesignature_request_compound_all_of);

ezsigntemplatesignature_request_compound_all_of_t *ezsigntemplatesignature_request_compound_all_of_parseFromJSON(cJSON *ezsigntemplatesignature_request_compound_all_ofJSON);

cJSON *ezsigntemplatesignature_request_compound_all_of_convertToJSON(ezsigntemplatesignature_request_compound_all_of_t *ezsigntemplatesignature_request_compound_all_of);

#endif /* _ezsigntemplatesignature_request_compound_all_of_H_ */

