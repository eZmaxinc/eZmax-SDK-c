/*
 * usergroup_create_object_v1_request.h
 *
 * Request for POST /1/object/usergroup
 */

#ifndef _usergroup_create_object_v1_request_H_
#define _usergroup_create_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_create_object_v1_request_t usergroup_create_object_v1_request_t;

#include "usergroup_request_compound.h"



typedef struct usergroup_create_object_v1_request_t {
    list_t *a_obj_usergroup; //nonprimitive container

} usergroup_create_object_v1_request_t;

usergroup_create_object_v1_request_t *usergroup_create_object_v1_request_create(
    list_t *a_obj_usergroup
);

void usergroup_create_object_v1_request_free(usergroup_create_object_v1_request_t *usergroup_create_object_v1_request);

usergroup_create_object_v1_request_t *usergroup_create_object_v1_request_parseFromJSON(cJSON *usergroup_create_object_v1_requestJSON);

cJSON *usergroup_create_object_v1_request_convertToJSON(usergroup_create_object_v1_request_t *usergroup_create_object_v1_request);

#endif /* _usergroup_create_object_v1_request_H_ */

