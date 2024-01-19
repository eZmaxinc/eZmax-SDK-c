/*
 * ezsigndiscussion_create_object_v1_request.h
 *
 * Request for POST /1/object/ezsigndiscussion
 */

#ifndef _ezsigndiscussion_create_object_v1_request_H_
#define _ezsigndiscussion_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsigndiscussion_create_object_v1_request_t ezsigndiscussion_create_object_v1_request_t;

#include "ezsigndiscussion_request_compound.h"



typedef struct ezsigndiscussion_create_object_v1_request_t {
    list_t *a_obj_ezsigndiscussion; //nonprimitive container

} ezsigndiscussion_create_object_v1_request_t;

ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request_create(
    list_t *a_obj_ezsigndiscussion
);

void ezsigndiscussion_create_object_v1_request_free(ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request);

ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request_parseFromJSON(cJSON *ezsigndiscussion_create_object_v1_requestJSON);

cJSON *ezsigndiscussion_create_object_v1_request_convertToJSON(ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request);

#endif /* _ezsigndiscussion_create_object_v1_request_H_ */

