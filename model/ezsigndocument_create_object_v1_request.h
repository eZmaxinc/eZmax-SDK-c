/*
 * ezsigndocument_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigndocument
 */

#ifndef _ezsigndocument_create_object_v1_request_H_
#define _ezsigndocument_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndocument_create_object_v1_request_t ezsigndocument_create_object_v1_request_t;

#include "ezsigndocument_request.h"
#include "ezsigndocument_request_compound.h"



typedef struct ezsigndocument_create_object_v1_request_t {
    struct ezsigndocument_request_t *obj_ezsigndocument; //model
    struct ezsigndocument_request_compound_t *obj_ezsigndocument_compound; //model

} ezsigndocument_create_object_v1_request_t;

ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request_create(
    ezsigndocument_request_t *obj_ezsigndocument,
    ezsigndocument_request_compound_t *obj_ezsigndocument_compound
);

void ezsigndocument_create_object_v1_request_free(ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request);

ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request_parseFromJSON(cJSON *ezsigndocument_create_object_v1_requestJSON);

cJSON *ezsigndocument_create_object_v1_request_convertToJSON(ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request);

#endif /* _ezsigndocument_create_object_v1_request_H_ */

