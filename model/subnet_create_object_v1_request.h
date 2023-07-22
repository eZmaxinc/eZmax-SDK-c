/*
 * subnet_create_object_v1_request.h
 *
 * Request for POST /1/object/subnet
 */

#ifndef _subnet_create_object_v1_request_H_
#define _subnet_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_create_object_v1_request_t subnet_create_object_v1_request_t;

#include "subnet_request_compound.h"



typedef struct subnet_create_object_v1_request_t {
    list_t *a_obj_subnet; //nonprimitive container

} subnet_create_object_v1_request_t;

subnet_create_object_v1_request_t *subnet_create_object_v1_request_create(
    list_t *a_obj_subnet
);

void subnet_create_object_v1_request_free(subnet_create_object_v1_request_t *subnet_create_object_v1_request);

subnet_create_object_v1_request_t *subnet_create_object_v1_request_parseFromJSON(cJSON *subnet_create_object_v1_requestJSON);

cJSON *subnet_create_object_v1_request_convertToJSON(subnet_create_object_v1_request_t *subnet_create_object_v1_request);

#endif /* _subnet_create_object_v1_request_H_ */

