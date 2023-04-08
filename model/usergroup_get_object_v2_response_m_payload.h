/*
 * usergroup_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/usergroup/{pkiUsergroupID}
 */

#ifndef _usergroup_get_object_v2_response_m_payload_H_
#define _usergroup_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_get_object_v2_response_m_payload_t usergroup_get_object_v2_response_m_payload_t;

#include "usergroup_response_compound.h"



typedef struct usergroup_get_object_v2_response_m_payload_t {
    struct usergroup_response_compound_t *obj_usergroup; //model

} usergroup_get_object_v2_response_m_payload_t;

usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload_create(
    usergroup_response_compound_t *obj_usergroup
);

void usergroup_get_object_v2_response_m_payload_free(usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload);

usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload_parseFromJSON(cJSON *usergroup_get_object_v2_response_m_payloadJSON);

cJSON *usergroup_get_object_v2_response_m_payload_convertToJSON(usergroup_get_object_v2_response_m_payload_t *usergroup_get_object_v2_response_m_payload);

#endif /* _usergroup_get_object_v2_response_m_payload_H_ */

