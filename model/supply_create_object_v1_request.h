/*
 * supply_create_object_v1_request.h
 *
 * Request for POST /1/object/supply
 */

#ifndef _supply_create_object_v1_request_H_
#define _supply_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct supply_create_object_v1_request_t supply_create_object_v1_request_t;

#include "supply_request_compound.h"



typedef struct supply_create_object_v1_request_t {
    list_t *a_obj_supply; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} supply_create_object_v1_request_t;

__attribute__((deprecated)) supply_create_object_v1_request_t *supply_create_object_v1_request_create(
    list_t *a_obj_supply
);

void supply_create_object_v1_request_free(supply_create_object_v1_request_t *supply_create_object_v1_request);

supply_create_object_v1_request_t *supply_create_object_v1_request_parseFromJSON(cJSON *supply_create_object_v1_requestJSON);

cJSON *supply_create_object_v1_request_convertToJSON(supply_create_object_v1_request_t *supply_create_object_v1_request);

#endif /* _supply_create_object_v1_request_H_ */

