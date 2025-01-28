/*
 * ezsigntemplatepackagesignermembership_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigntemplatepackagesignermembership
 */

#ifndef _ezsigntemplatepackagesignermembership_create_object_v1_request_H_
#define _ezsigntemplatepackagesignermembership_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigntemplatepackagesignermembership_create_object_v1_request_t ezsigntemplatepackagesignermembership_create_object_v1_request_t;

#include "ezsigntemplatepackagesignermembership_request_compound.h"



typedef struct ezsigntemplatepackagesignermembership_create_object_v1_request_t {
    list_t *a_obj_ezsigntemplatepackagesignermembership; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigntemplatepackagesignermembership_create_object_v1_request_t;

__attribute__((deprecated)) ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepackagesignermembership
);

void ezsigntemplatepackagesignermembership_create_object_v1_request_free(ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request);

ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_create_object_v1_requestJSON);

cJSON *ezsigntemplatepackagesignermembership_create_object_v1_request_convertToJSON(ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request);

#endif /* _ezsigntemplatepackagesignermembership_create_object_v1_request_H_ */

