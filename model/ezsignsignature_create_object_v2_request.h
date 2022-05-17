/*
 * ezsignsignature_create_object_v2_request.h
 *
 * Request for POST /2/object/ezsignsignature
 */

#ifndef _ezsignsignature_create_object_v2_request_H_
#define _ezsignsignature_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct ezsignsignature_create_object_v2_request_t ezsignsignature_create_object_v2_request_t;

#include "ezsignsignature_request_compound.h"



typedef struct ezsignsignature_create_object_v2_request_t {
    list_t *a_obj_ezsignsignature; //nonprimitive container

} ezsignsignature_create_object_v2_request_t;

ezsignsignature_create_object_v2_request_t *ezsignsignature_create_object_v2_request_create(
    list_t *a_obj_ezsignsignature
);

void ezsignsignature_create_object_v2_request_free(ezsignsignature_create_object_v2_request_t *ezsignsignature_create_object_v2_request);

ezsignsignature_create_object_v2_request_t *ezsignsignature_create_object_v2_request_parseFromJSON(cJSON *ezsignsignature_create_object_v2_requestJSON);

cJSON *ezsignsignature_create_object_v2_request_convertToJSON(ezsignsignature_create_object_v2_request_t *ezsignsignature_create_object_v2_request);

#endif /* _ezsignsignature_create_object_v2_request_H_ */

