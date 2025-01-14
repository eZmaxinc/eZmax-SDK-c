/*
 * authenticationexternal_create_object_v1_request.h
 *
 * Request for POST /1/object/authenticationexternal
 */

#ifndef _authenticationexternal_create_object_v1_request_H_
#define _authenticationexternal_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_create_object_v1_request_t authenticationexternal_create_object_v1_request_t;

#include "authenticationexternal_request_compound.h"



typedef struct authenticationexternal_create_object_v1_request_t {
    list_t *a_obj_authenticationexternal; //nonprimitive container

} authenticationexternal_create_object_v1_request_t;

authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request_create(
    list_t *a_obj_authenticationexternal
);

void authenticationexternal_create_object_v1_request_free(authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request);

authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request_parseFromJSON(cJSON *authenticationexternal_create_object_v1_requestJSON);

cJSON *authenticationexternal_create_object_v1_request_convertToJSON(authenticationexternal_create_object_v1_request_t *authenticationexternal_create_object_v1_request);

#endif /* _authenticationexternal_create_object_v1_request_H_ */

