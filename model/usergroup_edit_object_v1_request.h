/*
 * usergroup_edit_object_v1_request.h
 *
 * Request for PUT /1/object/usergroup/{pkiUsergroupID}
 */

#ifndef _usergroup_edit_object_v1_request_H_
#define _usergroup_edit_object_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_edit_object_v1_request_t usergroup_edit_object_v1_request_t;

#include "usergroup_request_compound.h"



typedef struct usergroup_edit_object_v1_request_t {
    struct usergroup_request_compound_t *obj_usergroup; //model

    int _library_owned; // Is the library responsible for freeing this object?
} usergroup_edit_object_v1_request_t;

__attribute__((deprecated)) usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request_create(
    usergroup_request_compound_t *obj_usergroup
);

void usergroup_edit_object_v1_request_free(usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request);

usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request_parseFromJSON(cJSON *usergroup_edit_object_v1_requestJSON);

cJSON *usergroup_edit_object_v1_request_convertToJSON(usergroup_edit_object_v1_request_t *usergroup_edit_object_v1_request);

#endif /* _usergroup_edit_object_v1_request_H_ */

