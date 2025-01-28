/*
 * ezsignsignature_create_object_v3_request.h
 *
 * Request for POST /3/object/ezsignsignature
 */

#ifndef _ezsignsignature_create_object_v3_request_H_
#define _ezsignsignature_create_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_create_object_v3_request_t ezsignsignature_create_object_v3_request_t;

#include "ezsignsignature_request_compound_v2.h"



typedef struct ezsignsignature_create_object_v3_request_t {
    list_t *a_obj_ezsignsignature; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} ezsignsignature_create_object_v3_request_t;

__attribute__((deprecated)) ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request_create(
    list_t *a_obj_ezsignsignature
);

void ezsignsignature_create_object_v3_request_free(ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request);

ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request_parseFromJSON(cJSON *ezsignsignature_create_object_v3_requestJSON);

cJSON *ezsignsignature_create_object_v3_request_convertToJSON(ezsignsignature_create_object_v3_request_t *ezsignsignature_create_object_v3_request);

#endif /* _ezsignsignature_create_object_v3_request_H_ */

