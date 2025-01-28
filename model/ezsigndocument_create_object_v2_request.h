/*
 * ezsigndocument_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsigndocument
 */

#ifndef _ezsigndocument_create_object_v2_request_H_
#define _ezsigndocument_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_object_v2_request_t ezsigndocument_create_object_v2_request_t;

#include "ezsigndocument_request_compound.h"



typedef struct ezsigndocument_create_object_v2_request_t {
    list_t *a_obj_ezsigndocument; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsigndocument_create_object_v2_request_t;

__attribute__((deprecated)) ezsigndocument_create_object_v2_request_t *ezsigndocument_create_object_v2_request_create(
    list_t *a_obj_ezsigndocument
);

void ezsigndocument_create_object_v2_request_free(ezsigndocument_create_object_v2_request_t *ezsigndocument_create_object_v2_request);

ezsigndocument_create_object_v2_request_t *ezsigndocument_create_object_v2_request_parseFromJSON(cJSON *ezsigndocument_create_object_v2_requestJSON);

cJSON *ezsigndocument_create_object_v2_request_convertToJSON(ezsigndocument_create_object_v2_request_t *ezsigndocument_create_object_v2_request);

#endif /* _ezsigndocument_create_object_v2_request_H_ */

