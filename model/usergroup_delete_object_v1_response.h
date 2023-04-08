/*
 * usergroup_delete_object_v1_response.h
 *
 * Response for DELETE /1/object/usergroup/{pkiUsergroupID}
 */

#ifndef _usergroup_delete_object_v1_response_H_
#define _usergroup_delete_object_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_delete_object_v1_response_t usergroup_delete_object_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct usergroup_delete_object_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} usergroup_delete_object_v1_response_t;

usergroup_delete_object_v1_response_t *usergroup_delete_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void usergroup_delete_object_v1_response_free(usergroup_delete_object_v1_response_t *usergroup_delete_object_v1_response);

usergroup_delete_object_v1_response_t *usergroup_delete_object_v1_response_parseFromJSON(cJSON *usergroup_delete_object_v1_responseJSON);

cJSON *usergroup_delete_object_v1_response_convertToJSON(usergroup_delete_object_v1_response_t *usergroup_delete_object_v1_response);

#endif /* _usergroup_delete_object_v1_response_H_ */

