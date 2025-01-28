/*
 * ezsignbulksendsignermapping_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignbulksendsignermapping
 */

#ifndef _ezsignbulksendsignermapping_create_object_v1_request_H_
#define _ezsignbulksendsignermapping_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_create_object_v1_request_t ezsignbulksendsignermapping_create_object_v1_request_t;

#include "ezsignbulksendsignermapping_request_compound.h"



typedef struct ezsignbulksendsignermapping_create_object_v1_request_t {
    list_t *a_obj_ezsignbulksendsignermapping; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendsignermapping_create_object_v1_request_t;

__attribute__((deprecated)) ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request_create(
    list_t *a_obj_ezsignbulksendsignermapping
);

void ezsignbulksendsignermapping_create_object_v1_request_free(ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request);

ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request_parseFromJSON(cJSON *ezsignbulksendsignermapping_create_object_v1_requestJSON);

cJSON *ezsignbulksendsignermapping_create_object_v1_request_convertToJSON(ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request);

#endif /* _ezsignbulksendsignermapping_create_object_v1_request_H_ */

