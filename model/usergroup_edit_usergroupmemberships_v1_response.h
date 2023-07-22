/*
 * usergroup_edit_usergroupmemberships_v1_response.h
 *
 * Response for PUT /1/object/usergroup/{pkiUsergroupID}/editUsergroupmemberships
 */

#ifndef _usergroup_edit_usergroupmemberships_v1_response_H_
#define _usergroup_edit_usergroupmemberships_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_edit_usergroupmemberships_v1_response_t usergroup_edit_usergroupmemberships_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "usergroup_edit_usergroupmemberships_v1_response_m_payload.h"



typedef struct usergroup_edit_usergroupmemberships_v1_response_t {
    struct usergroup_edit_usergroupmemberships_v1_response_m_payload_t *m_payload; //model
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} usergroup_edit_usergroupmemberships_v1_response_t;

usergroup_edit_usergroupmemberships_v1_response_t *usergroup_edit_usergroupmemberships_v1_response_create(
    usergroup_edit_usergroupmemberships_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void usergroup_edit_usergroupmemberships_v1_response_free(usergroup_edit_usergroupmemberships_v1_response_t *usergroup_edit_usergroupmemberships_v1_response);

usergroup_edit_usergroupmemberships_v1_response_t *usergroup_edit_usergroupmemberships_v1_response_parseFromJSON(cJSON *usergroup_edit_usergroupmemberships_v1_responseJSON);

cJSON *usergroup_edit_usergroupmemberships_v1_response_convertToJSON(usergroup_edit_usergroupmemberships_v1_response_t *usergroup_edit_usergroupmemberships_v1_response);

#endif /* _usergroup_edit_usergroupmemberships_v1_response_H_ */

