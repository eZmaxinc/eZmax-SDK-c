/*
 * branding_create_object_v1_request.h
 *
 * Request for POST /1/object/branding
 */

#ifndef _branding_create_object_v1_request_H_
#define _branding_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct branding_create_object_v1_request_t branding_create_object_v1_request_t;

#include "branding_request_compound.h"



typedef struct branding_create_object_v1_request_t {
    list_t *a_obj_branding; //nonprimitive container

} branding_create_object_v1_request_t;

branding_create_object_v1_request_t *branding_create_object_v1_request_create(
    list_t *a_obj_branding
);

void branding_create_object_v1_request_free(branding_create_object_v1_request_t *branding_create_object_v1_request);

branding_create_object_v1_request_t *branding_create_object_v1_request_parseFromJSON(cJSON *branding_create_object_v1_requestJSON);

cJSON *branding_create_object_v1_request_convertToJSON(branding_create_object_v1_request_t *branding_create_object_v1_request);

#endif /* _branding_create_object_v1_request_H_ */

