/*
 * ezsigndocument_create_object_v3_request.h
 *
 * Request for POST /3/object/ezsigndocument
 */

#ifndef _ezsigndocument_create_object_v3_request_H_
#define _ezsigndocument_create_object_v3_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_object_v3_request_t ezsigndocument_create_object_v3_request_t;

#include "ezsigndocument_request_compound.h"



typedef struct ezsigndocument_create_object_v3_request_t {
    list_t *a_obj_ezsigndocument; //nonprimitive container

} ezsigndocument_create_object_v3_request_t;

ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request_create(
    list_t *a_obj_ezsigndocument
);

void ezsigndocument_create_object_v3_request_free(ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request);

ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request_parseFromJSON(cJSON *ezsigndocument_create_object_v3_requestJSON);

cJSON *ezsigndocument_create_object_v3_request_convertToJSON(ezsigndocument_create_object_v3_request_t *ezsigndocument_create_object_v3_request);

#endif /* _ezsigndocument_create_object_v3_request_H_ */

