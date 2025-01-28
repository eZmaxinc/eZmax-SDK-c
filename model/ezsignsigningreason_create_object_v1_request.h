/*
 * ezsignsigningreason_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignsigningreason
 */

#ifndef _ezsignsigningreason_create_object_v1_request_H_
#define _ezsignsigningreason_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsigningreason_create_object_v1_request_t ezsignsigningreason_create_object_v1_request_t;

#include "ezsignsigningreason_request_compound.h"



typedef struct ezsignsigningreason_create_object_v1_request_t {
    list_t *a_obj_ezsignsigningreason; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsigningreason_create_object_v1_request_t;

__attribute__((deprecated)) ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request_create(
    list_t *a_obj_ezsignsigningreason
);

void ezsignsigningreason_create_object_v1_request_free(ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request);

ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request_parseFromJSON(cJSON *ezsignsigningreason_create_object_v1_requestJSON);

cJSON *ezsignsigningreason_create_object_v1_request_convertToJSON(ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request);

#endif /* _ezsignsigningreason_create_object_v1_request_H_ */

