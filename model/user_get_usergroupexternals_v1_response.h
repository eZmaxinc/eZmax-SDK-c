/*
 * user_get_usergroupexternals_v1_response.h
 *
 * Response for GET /1/object/user/{pkiUserID}/getUsergroupexternals
 */

#ifndef _user_get_usergroupexternals_v1_response_H_
#define _user_get_usergroupexternals_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_usergroupexternals_v1_response_t user_get_usergroupexternals_v1_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "user_get_usergroupexternals_v1_response_m_payload.h"



typedef struct user_get_usergroupexternals_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct user_get_usergroupexternals_v1_response_m_payload_t *m_payload; //model

} user_get_usergroupexternals_v1_response_t;

user_get_usergroupexternals_v1_response_t *user_get_usergroupexternals_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    user_get_usergroupexternals_v1_response_m_payload_t *m_payload
);

void user_get_usergroupexternals_v1_response_free(user_get_usergroupexternals_v1_response_t *user_get_usergroupexternals_v1_response);

user_get_usergroupexternals_v1_response_t *user_get_usergroupexternals_v1_response_parseFromJSON(cJSON *user_get_usergroupexternals_v1_responseJSON);

cJSON *user_get_usergroupexternals_v1_response_convertToJSON(user_get_usergroupexternals_v1_response_t *user_get_usergroupexternals_v1_response);

#endif /* _user_get_usergroupexternals_v1_response_H_ */

