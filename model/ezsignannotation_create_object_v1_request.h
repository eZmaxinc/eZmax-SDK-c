/*
 * ezsignannotation_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsignannotation
 */

#ifndef _ezsignannotation_create_object_v1_request_H_
#define _ezsignannotation_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignannotation_create_object_v1_request_t ezsignannotation_create_object_v1_request_t;

#include "ezsignannotation_request_compound.h"



typedef struct ezsignannotation_create_object_v1_request_t {
    list_t *a_obj_ezsignannotation; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignannotation_create_object_v1_request_t;

__attribute__((deprecated)) ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request_create(
    list_t *a_obj_ezsignannotation
);

void ezsignannotation_create_object_v1_request_free(ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request);

ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request_parseFromJSON(cJSON *ezsignannotation_create_object_v1_requestJSON);

cJSON *ezsignannotation_create_object_v1_request_convertToJSON(ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request);

#endif /* _ezsignannotation_create_object_v1_request_H_ */

