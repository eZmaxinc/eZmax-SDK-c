/*
 * ezsigntemplatesignature_create_object_v3_request.h
 *
 * Request for POST /3/object/ezsigntemplatesignature
 */

#ifndef _ezsigntemplatesignature_create_object_v3_request_H_
#define _ezsigntemplatesignature_create_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesignature_create_object_v3_request_t ezsigntemplatesignature_create_object_v3_request_t;

#include "ezsigntemplatesignature_request_compound_v2.h"



typedef struct ezsigntemplatesignature_create_object_v3_request_t {
    list_t *a_obj_ezsigntemplatesignature; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesignature_create_object_v3_request_t;

__attribute__((deprecated)) ezsigntemplatesignature_create_object_v3_request_t *ezsigntemplatesignature_create_object_v3_request_create(
    list_t *a_obj_ezsigntemplatesignature
);

void ezsigntemplatesignature_create_object_v3_request_free(ezsigntemplatesignature_create_object_v3_request_t *ezsigntemplatesignature_create_object_v3_request);

ezsigntemplatesignature_create_object_v3_request_t *ezsigntemplatesignature_create_object_v3_request_parseFromJSON(cJSON *ezsigntemplatesignature_create_object_v3_requestJSON);

cJSON *ezsigntemplatesignature_create_object_v3_request_convertToJSON(ezsigntemplatesignature_create_object_v3_request_t *ezsigntemplatesignature_create_object_v3_request);

#endif /* _ezsigntemplatesignature_create_object_v3_request_H_ */

