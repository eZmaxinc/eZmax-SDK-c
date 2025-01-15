/*
 * user_edit_permissions_v1_request.h
 *
 * Request for PUT /1/object/user/{pkiUserID}/editPermissions
 */

#ifndef _user_edit_permissions_v1_request_H_
#define _user_edit_permissions_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_edit_permissions_v1_request_t user_edit_permissions_v1_request_t;

#include "permission_request.h"



typedef struct user_edit_permissions_v1_request_t {
    list_t *a_obj_permission; //nonprimitive container

} user_edit_permissions_v1_request_t;

user_edit_permissions_v1_request_t *user_edit_permissions_v1_request_create(
    list_t *a_obj_permission
);

void user_edit_permissions_v1_request_free(user_edit_permissions_v1_request_t *user_edit_permissions_v1_request);

user_edit_permissions_v1_request_t *user_edit_permissions_v1_request_parseFromJSON(cJSON *user_edit_permissions_v1_requestJSON);

cJSON *user_edit_permissions_v1_request_convertToJSON(user_edit_permissions_v1_request_t *user_edit_permissions_v1_request);

#endif /* _user_edit_permissions_v1_request_H_ */

