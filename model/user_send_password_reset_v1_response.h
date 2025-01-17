/*
 * user_send_password_reset_v1_response.h
 *
 * Response for POST /1/object/user/{pkiUserID}/sendPasswordReset
 */

#ifndef _user_send_password_reset_v1_response_H_
#define _user_send_password_reset_v1_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_send_password_reset_v1_response_t user_send_password_reset_v1_response_t;

#include "common_response.h"
#include "common_response_obj_debug.h"
#include "common_response_obj_debug_payload.h"



typedef struct user_send_password_reset_v1_response_t {
    struct common_response_obj_debug_payload_t *obj_debug_payload; //model
    struct common_response_obj_debug_t *obj_debug; //model

} user_send_password_reset_v1_response_t;

user_send_password_reset_v1_response_t *user_send_password_reset_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
);

void user_send_password_reset_v1_response_free(user_send_password_reset_v1_response_t *user_send_password_reset_v1_response);

user_send_password_reset_v1_response_t *user_send_password_reset_v1_response_parseFromJSON(cJSON *user_send_password_reset_v1_responseJSON);

cJSON *user_send_password_reset_v1_response_convertToJSON(user_send_password_reset_v1_response_t *user_send_password_reset_v1_response);

#endif /* _user_send_password_reset_v1_response_H_ */

