/*
 * user_create_ezsignuser_v1_request.h
 *
 * Request for POST /1/module/user/createEzsignuser
 */

#ifndef _user_create_ezsignuser_v1_request_H_
#define _user_create_ezsignuser_v1_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_create_ezsignuser_v1_request_t user_create_ezsignuser_v1_request_t;




typedef struct user_create_ezsignuser_v1_request_t {
    int fki_language_id; //numeric
    char *s_user_firstname; // string
    char *s_user_lastname; // string
    char *s_email_address; // string
    char *s_phone_region; // string
    char *s_phone_exchange; // string
    char *s_phone_number; // string
    char *s_phone_extension; // string

} user_create_ezsignuser_v1_request_t;

user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request_create(
    int fki_language_id,
    char *s_user_firstname,
    char *s_user_lastname,
    char *s_email_address,
    char *s_phone_region,
    char *s_phone_exchange,
    char *s_phone_number,
    char *s_phone_extension
);

void user_create_ezsignuser_v1_request_free(user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request);

user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request_parseFromJSON(cJSON *user_create_ezsignuser_v1_requestJSON);

cJSON *user_create_ezsignuser_v1_request_convertToJSON(user_create_ezsignuser_v1_request_t *user_create_ezsignuser_v1_request);

#endif /* _user_create_ezsignuser_v1_request_H_ */

