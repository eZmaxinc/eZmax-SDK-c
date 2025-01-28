/*
 * subnet_edit_object_v1_request.h
 *
 * Request for PUT /1/object/subnet/{pkiSubnetID}
 */

#ifndef _subnet_edit_object_v1_request_H_
#define _subnet_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct subnet_edit_object_v1_request_t subnet_edit_object_v1_request_t;

#include "subnet_request_compound.h"



typedef struct subnet_edit_object_v1_request_t {
    struct subnet_request_compound_t *obj_subnet; //model

    int _library_owned; // Is the library responsible for freeing this object?
} subnet_edit_object_v1_request_t;

__attribute__((deprecated)) subnet_edit_object_v1_request_t *subnet_edit_object_v1_request_create(
    subnet_request_compound_t *obj_subnet
);

void subnet_edit_object_v1_request_free(subnet_edit_object_v1_request_t *subnet_edit_object_v1_request);

subnet_edit_object_v1_request_t *subnet_edit_object_v1_request_parseFromJSON(cJSON *subnet_edit_object_v1_requestJSON);

cJSON *subnet_edit_object_v1_request_convertToJSON(subnet_edit_object_v1_request_t *subnet_edit_object_v1_request);

#endif /* _subnet_edit_object_v1_request_H_ */

