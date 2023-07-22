/*
 * user_edit_permissions_v1_response_m_payload.h
 *
 * Payload for PUT /1/object/user/{pkiUserID}/editPermissions
 */

#ifndef _user_edit_permissions_v1_response_m_payload_H_
#define _user_edit_permissions_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_edit_permissions_v1_response_m_payload_t user_edit_permissions_v1_response_m_payload_t;




typedef struct user_edit_permissions_v1_response_m_payload_t {
    list_t *a_pki_permission_id; //primitive container

} user_edit_permissions_v1_response_m_payload_t;

user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload_create(
    list_t *a_pki_permission_id
);

void user_edit_permissions_v1_response_m_payload_free(user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload);

user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload_parseFromJSON(cJSON *user_edit_permissions_v1_response_m_payloadJSON);

cJSON *user_edit_permissions_v1_response_m_payload_convertToJSON(user_edit_permissions_v1_response_m_payload_t *user_edit_permissions_v1_response_m_payload);

#endif /* _user_edit_permissions_v1_response_m_payload_H_ */

