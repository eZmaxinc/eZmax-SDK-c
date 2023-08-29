/*
 * usergroup_edit_usergroupdelegations_v1_response_m_payload.h
 *
 * Response for PUT /1/object/usergroup/{pkiUsergroupID}/EditUsergroupdelegations
 */

#ifndef _usergroup_edit_usergroupdelegations_v1_response_m_payload_H_
#define _usergroup_edit_usergroupdelegations_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_edit_usergroupdelegations_v1_response_m_payload_t usergroup_edit_usergroupdelegations_v1_response_m_payload_t;




typedef struct usergroup_edit_usergroupdelegations_v1_response_m_payload_t {
    list_t *a_pki_usergroupdelegation_id; //primitive container

} usergroup_edit_usergroupdelegations_v1_response_m_payload_t;

usergroup_edit_usergroupdelegations_v1_response_m_payload_t *usergroup_edit_usergroupdelegations_v1_response_m_payload_create(
    list_t *a_pki_usergroupdelegation_id
);

void usergroup_edit_usergroupdelegations_v1_response_m_payload_free(usergroup_edit_usergroupdelegations_v1_response_m_payload_t *usergroup_edit_usergroupdelegations_v1_response_m_payload);

usergroup_edit_usergroupdelegations_v1_response_m_payload_t *usergroup_edit_usergroupdelegations_v1_response_m_payload_parseFromJSON(cJSON *usergroup_edit_usergroupdelegations_v1_response_m_payloadJSON);

cJSON *usergroup_edit_usergroupdelegations_v1_response_m_payload_convertToJSON(usergroup_edit_usergroupdelegations_v1_response_m_payload_t *usergroup_edit_usergroupdelegations_v1_response_m_payload);

#endif /* _usergroup_edit_usergroupdelegations_v1_response_m_payload_H_ */

