/*
 * cors_create_object_v1_request.h
 *
 * Request for POST /1/object/cors
 */

#ifndef _cors_create_object_v1_request_H_
#define _cors_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_create_object_v1_request_t cors_create_object_v1_request_t;

#include "cors_request_compound.h"



typedef struct cors_create_object_v1_request_t {
    list_t *a_obj_cors; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} cors_create_object_v1_request_t;

__attribute__((deprecated)) cors_create_object_v1_request_t *cors_create_object_v1_request_create(
    list_t *a_obj_cors
);

void cors_create_object_v1_request_free(cors_create_object_v1_request_t *cors_create_object_v1_request);

cors_create_object_v1_request_t *cors_create_object_v1_request_parseFromJSON(cJSON *cors_create_object_v1_requestJSON);

cJSON *cors_create_object_v1_request_convertToJSON(cors_create_object_v1_request_t *cors_create_object_v1_request);

#endif /* _cors_create_object_v1_request_H_ */

