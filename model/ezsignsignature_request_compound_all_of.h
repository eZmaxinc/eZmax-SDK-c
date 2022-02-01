/*
 * ezsignsignature_request_compound_all_of.h
 *
 * 
 */

#ifndef _ezsignsignature_request_compound_all_of_H_
#define _ezsignsignature_request_compound_all_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_request_compound_all_of_t ezsignsignature_request_compound_all_of_t;

#include "ezsignsignaturecustomdate_request.h"



typedef struct ezsignsignature_request_compound_all_of_t {
    int b_ezsignsignature_customdate; //boolean
    list_t *a_obj_ezsignsignaturecustomdate; //nonprimitive container

} ezsignsignature_request_compound_all_of_t;

ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of_create(
    int b_ezsignsignature_customdate,
    list_t *a_obj_ezsignsignaturecustomdate
);

void ezsignsignature_request_compound_all_of_free(ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of);

ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of_parseFromJSON(cJSON *ezsignsignature_request_compound_all_ofJSON);

cJSON *ezsignsignature_request_compound_all_of_convertToJSON(ezsignsignature_request_compound_all_of_t *ezsignsignature_request_compound_all_of);

#endif /* _ezsignsignature_request_compound_all_of_H_ */

