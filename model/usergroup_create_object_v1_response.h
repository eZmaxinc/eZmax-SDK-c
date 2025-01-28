/*
 * usergroup_create_object_v1_response.h
 *
 * Response for POST /1/object/usergroup
 */

#ifndef _usergroup_create_object_v1_response_H_
#define _usergroup_create_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_create_object_v1_response_t usergroup_create_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "usergroup_create_object_v1_response_m_payload.h"



typedef struct usergroup_create_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct usergroup_create_object_v1_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} usergroup_create_object_v1_response_t;

__attribute__((deprecated)) usergroup_create_object_v1_response_t *usergroup_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    usergroup_create_object_v1_response_m_payload_t *m_payload
);

void usergroup_create_object_v1_response_free(usergroup_create_object_v1_response_t *usergroup_create_object_v1_response);

usergroup_create_object_v1_response_t *usergroup_create_object_v1_response_parseFromJSON(cJSON *usergroup_create_object_v1_responseJSON);

cJSON *usergroup_create_object_v1_response_convertToJSON(usergroup_create_object_v1_response_t *usergroup_create_object_v1_response);

#endif /* _usergroup_create_object_v1_response_H_ */

