/*
 * ezsigntemplatesignature_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsigntemplatesignature
 */

#ifndef _ezsigntemplatesignature_create_object_v2_request_H_
#define _ezsigntemplatesignature_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_create_object_v2_request_t ezsigntemplatesignature_create_object_v2_request_t;

#include "ezsigntemplatesignature_request_compound_v2.h"



typedef struct ezsigntemplatesignature_create_object_v2_request_t {
    list_t *a_obj_ezsigntemplatesignature; //nonprimitive container

} ezsigntemplatesignature_create_object_v2_request_t;

ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request_create(
    list_t *a_obj_ezsigntemplatesignature
);

void ezsigntemplatesignature_create_object_v2_request_free(ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request);

ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request_parseFromJSON(cJSON *ezsigntemplatesignature_create_object_v2_requestJSON);

cJSON *ezsigntemplatesignature_create_object_v2_request_convertToJSON(ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request);

#endif /* _ezsigntemplatesignature_create_object_v2_request_H_ */

