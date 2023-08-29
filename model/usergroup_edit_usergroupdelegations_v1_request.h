/*
 * usergroup_edit_usergroupdelegations_v1_request.h
 *
 * Request for PUT /1/object/usergroup/{pkiUsergroupID}/editUsergroupdelegations
 */

#ifndef _usergroup_edit_usergroupdelegations_v1_request_H_
#define _usergroup_edit_usergroupdelegations_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_edit_usergroupdelegations_v1_request_t usergroup_edit_usergroupdelegations_v1_request_t;

#include "usergroupdelegation_request_compound.h"



typedef struct usergroup_edit_usergroupdelegations_v1_request_t {
    list_t *a_obj_usergroupdelegation; //nonprimitive container

} usergroup_edit_usergroupdelegations_v1_request_t;

usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request_create(
    list_t *a_obj_usergroupdelegation
);

void usergroup_edit_usergroupdelegations_v1_request_free(usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request);

usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request_parseFromJSON(cJSON *usergroup_edit_usergroupdelegations_v1_requestJSON);

cJSON *usergroup_edit_usergroupdelegations_v1_request_convertToJSON(usergroup_edit_usergroupdelegations_v1_request_t *usergroup_edit_usergroupdelegations_v1_request);

#endif /* _usergroup_edit_usergroupdelegations_v1_request_H_ */

