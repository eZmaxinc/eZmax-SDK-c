/*
 * ezsigntemplatesigner_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatesigner
 */

#ifndef _ezsigntemplatesigner_create_object_v1_request_H_
#define _ezsigntemplatesigner_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatesigner_create_object_v1_request_t ezsigntemplatesigner_create_object_v1_request_t;

#include "ezsigntemplatesigner_request_compound.h"



typedef struct ezsigntemplatesigner_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplatesigner; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatesigner_create_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatesigner
);

void ezsigntemplatesigner_create_object_v1_request_free(ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request);

ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatesigner_create_object_v1_requestJSON);

cJSON *ezsigntemplatesigner_create_object_v1_request_convertToJSON(ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request);

#endif /* _ezsigntemplatesigner_create_object_v1_request_H_ */

