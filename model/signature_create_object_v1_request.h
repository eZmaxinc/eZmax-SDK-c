/*
 * signature_create_object_v1_request.h
 *
 * Request for POST /1/object/signature
 */

#ifndef _signature_create_object_v1_request_H_
#define _signature_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_create_object_v1_request_t signature_create_object_v1_request_t;

#include "signature_request_compound.h"



typedef struct signature_create_object_v1_request_t {
    list_t *a_obj_signature; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} signature_create_object_v1_request_t;

__attribute__((deprecated)) signature_create_object_v1_request_t *signature_create_object_v1_request_create(
    list_t *a_obj_signature
);

void signature_create_object_v1_request_free(signature_create_object_v1_request_t *signature_create_object_v1_request);

signature_create_object_v1_request_t *signature_create_object_v1_request_parseFromJSON(cJSON *signature_create_object_v1_requestJSON);

cJSON *signature_create_object_v1_request_convertToJSON(signature_create_object_v1_request_t *signature_create_object_v1_request);

#endif /* _signature_create_object_v1_request_H_ */

