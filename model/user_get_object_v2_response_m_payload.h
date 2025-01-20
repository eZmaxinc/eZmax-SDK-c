/*
 * user_get_object_v2_response_m_payload.h
 *
 * Payload for GET /2/object/user/{pkiUserID}
 */

#ifndef _user_get_object_v2_response_m_payload_H_
#define _user_get_object_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_object_v2_response_m_payload_t user_get_object_v2_response_m_payload_t;

#include "user_response.h"



typedef struct user_get_object_v2_response_m_payload_t {
    struct user_response_t *obj_user; //model

} user_get_object_v2_response_m_payload_t;

user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload_create(
    user_response_t *obj_user
);

void user_get_object_v2_response_m_payload_free(user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload);

user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload_parseFromJSON(cJSON *user_get_object_v2_response_m_payloadJSON);

cJSON *user_get_object_v2_response_m_payload_convertToJSON(user_get_object_v2_response_m_payload_t *user_get_object_v2_response_m_payload);

#endif /* _user_get_object_v2_response_m_payload_H_ */

