/*
 * ezsignbulksendsignermapping_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsignbulksendsignermapping
 */

#ifndef _ezsignbulksendsignermapping_create_object_v2_request_H_
#define _ezsignbulksendsignermapping_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignbulksendsignermapping_create_object_v2_request_t ezsignbulksendsignermapping_create_object_v2_request_t;

#include "ezsignbulksendsignermapping_request_compound_v2.h"



typedef struct ezsignbulksendsignermapping_create_object_v2_request_t {
    list_t *a_obj_ezsignbulksendsignermapping; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignbulksendsignermapping_create_object_v2_request_t;

__attribute__((deprecated)) ezsignbulksendsignermapping_create_object_v2_request_t *ezsignbulksendsignermapping_create_object_v2_request_create(
    list_t *a_obj_ezsignbulksendsignermapping
);

void ezsignbulksendsignermapping_create_object_v2_request_free(ezsignbulksendsignermapping_create_object_v2_request_t *ezsignbulksendsignermapping_create_object_v2_request);

ezsignbulksendsignermapping_create_object_v2_request_t *ezsignbulksendsignermapping_create_object_v2_request_parseFromJSON(cJSON *ezsignbulksendsignermapping_create_object_v2_requestJSON);

cJSON *ezsignbulksendsignermapping_create_object_v2_request_convertToJSON(ezsignbulksendsignermapping_create_object_v2_request_t *ezsignbulksendsignermapping_create_object_v2_request);

#endif /* _ezsignbulksendsignermapping_create_object_v2_request_H_ */

