/*
 * user_create_object_v2_request.h
 *
 * Request for POST /1/object/user
 */

#ifndef _user_create_object_v2_request_H_
#define _user_create_object_v2_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_create_object_v2_request_t user_create_object_v2_request_t;

#include "user_request_compound_v2.h"



typedef struct user_create_object_v2_request_t {
    list_t *a_obj_user; //nonprimitive container

} user_create_object_v2_request_t;

user_create_object_v2_request_t *user_create_object_v2_request_create(
    list_t *a_obj_user
);

void user_create_object_v2_request_free(user_create_object_v2_request_t *user_create_object_v2_request);

user_create_object_v2_request_t *user_create_object_v2_request_parseFromJSON(cJSON *user_create_object_v2_requestJSON);

cJSON *user_create_object_v2_request_convertToJSON(user_create_object_v2_request_t *user_create_object_v2_request);

#endif /* _user_create_object_v2_request_H_ */

