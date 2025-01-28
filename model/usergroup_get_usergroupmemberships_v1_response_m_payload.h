/*
 * usergroup_get_usergroupmemberships_v1_response_m_payload.h
 *
 * Response for GET /1/object/usergroup/{pkiUsergroupID}/getUsergroupmemberships
 */

#ifndef _usergroup_get_usergroupmemberships_v1_response_m_payload_H_
#define _usergroup_get_usergroupmemberships_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_get_usergroupmemberships_v1_response_m_payload_t usergroup_get_usergroupmemberships_v1_response_m_payload_t;

#include "usergroupmembership_response_compound.h"



typedef struct usergroup_get_usergroupmemberships_v1_response_m_payload_t {
    list_t *a_obj_usergroupmembership; //nonprimitive container

    int _library_owned; // Is the library responsible for freeing this object?
} usergroup_get_usergroupmemberships_v1_response_m_payload_t;

__attribute__((deprecated)) usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload_create(
    list_t *a_obj_usergroupmembership
);

void usergroup_get_usergroupmemberships_v1_response_m_payload_free(usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload);

usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload_parseFromJSON(cJSON *usergroup_get_usergroupmemberships_v1_response_m_payloadJSON);

cJSON *usergroup_get_usergroupmemberships_v1_response_m_payload_convertToJSON(usergroup_get_usergroupmemberships_v1_response_m_payload_t *usergroup_get_usergroupmemberships_v1_response_m_payload);

#endif /* _usergroup_get_usergroupmemberships_v1_response_m_payload_H_ */

