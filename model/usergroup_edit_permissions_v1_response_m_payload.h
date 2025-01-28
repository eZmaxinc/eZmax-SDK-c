/*
 * usergroup_edit_permissions_v1_response_m_payload.h
 *
 * Payload for PUT /1/object/usergroup/{pkiUsergroupID}/editPermissions
 */

#ifndef _usergroup_edit_permissions_v1_response_m_payload_H_
#define _usergroup_edit_permissions_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_edit_permissions_v1_response_m_payload_t usergroup_edit_permissions_v1_response_m_payload_t;




typedef struct usergroup_edit_permissions_v1_response_m_payload_t {
    list_t *a_pki_permission_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} usergroup_edit_permissions_v1_response_m_payload_t;

__attribute__((deprecated)) usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload_create(
    list_t *a_pki_permission_id
);

void usergroup_edit_permissions_v1_response_m_payload_free(usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload);

usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload_parseFromJSON(cJSON *usergroup_edit_permissions_v1_response_m_payloadJSON);

cJSON *usergroup_edit_permissions_v1_response_m_payload_convertToJSON(usergroup_edit_permissions_v1_response_m_payload_t *usergroup_edit_permissions_v1_response_m_payload);

#endif /* _usergroup_edit_permissions_v1_response_m_payload_H_ */

