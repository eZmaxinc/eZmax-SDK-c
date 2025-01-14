/*
 * user_get_colleagues_v2_response_m_payload.h
 *
 * Response for GET /2/object/user/{pkiUserID}/getColleagues
 */

#ifndef _user_get_colleagues_v2_response_m_payload_H_
#define _user_get_colleagues_v2_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_colleagues_v2_response_m_payload_t user_get_colleagues_v2_response_m_payload_t;

#include "colleague_response_compound_v2.h"



typedef struct user_get_colleagues_v2_response_m_payload_t {
    list_t *a_obj_colleague; //nonprimitive container
    list_t *a_obj_colleague_clonable; //nonprimitive container

} user_get_colleagues_v2_response_m_payload_t;

user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload_create(
    list_t *a_obj_colleague,
    list_t *a_obj_colleague_clonable
);

void user_get_colleagues_v2_response_m_payload_free(user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload);

user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload_parseFromJSON(cJSON *user_get_colleagues_v2_response_m_payloadJSON);

cJSON *user_get_colleagues_v2_response_m_payload_convertToJSON(user_get_colleagues_v2_response_m_payload_t *user_get_colleagues_v2_response_m_payload);

#endif /* _user_get_colleagues_v2_response_m_payload_H_ */

