/*
 * permission_create_object_v1_request.h
 *
 * Request for POST /1/object/permission
 */

#ifndef _permission_create_object_v1_request_H_
#define _permission_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_create_object_v1_request_t permission_create_object_v1_request_t;

#include "permission_request_compound.h"



typedef struct permission_create_object_v1_request_t {
    list_t *a_obj_permission; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} permission_create_object_v1_request_t;

__attribute__((deprecated)) permission_create_object_v1_request_t *permission_create_object_v1_request_create(
    list_t *a_obj_permission
);

void permission_create_object_v1_request_free(permission_create_object_v1_request_t *permission_create_object_v1_request);

permission_create_object_v1_request_t *permission_create_object_v1_request_parseFromJSON(cJSON *permission_create_object_v1_requestJSON);

cJSON *permission_create_object_v1_request_convertToJSON(permission_create_object_v1_request_t *permission_create_object_v1_request);

#endif /* _permission_create_object_v1_request_H_ */

