/*
 * user_get_colleagues_v2_response.h
 *
 * Response for GET /2/object/user/{pkiUserID}/getColleagues
 */

#ifndef _user_get_colleagues_v2_response_H_
#define _user_get_colleagues_v2_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_get_colleagues_v2_response_t user_get_colleagues_v2_response_t;

#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"
#include "user_get_colleagues_v2_response_m_payload.h"



typedef struct user_get_colleagues_v2_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model
    struct user_get_colleagues_v2_response_m_payload_t *m_payload; //model

    int _library_owned; // Is the library responsible for freeing this object?
} user_get_colleagues_v2_response_t;

__attribute__((deprecated)) user_get_colleagues_v2_response_t *user_get_colleagues_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    user_get_colleagues_v2_response_m_payload_t *m_payload
);

void user_get_colleagues_v2_response_free(user_get_colleagues_v2_response_t *user_get_colleagues_v2_response);

user_get_colleagues_v2_response_t *user_get_colleagues_v2_response_parseFromJSON(cJSON *user_get_colleagues_v2_responseJSON);

cJSON *user_get_colleagues_v2_response_convertToJSON(user_get_colleagues_v2_response_t *user_get_colleagues_v2_response);

#endif /* _user_get_colleagues_v2_response_H_ */

