/*
 * user_impersonate_v1_response_m_payload.h
 *
 * Payload for POST /1/object/user/{pkiUserID}/impersonate
 */

#ifndef _user_impersonate_v1_response_m_payload_H_
#define _user_impersonate_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_impersonate_v1_response_m_payload_t user_impersonate_v1_response_m_payload_t;

#include "custom_apikey.h"



typedef struct user_impersonate_v1_response_m_payload_t {
    struct custom_apikey_t *obj_apikey; //model

    int _library_owned; // Is the library responsible for freeing this object?
} user_impersonate_v1_response_m_payload_t;

__attribute__((deprecated)) user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload_create(
    custom_apikey_t *obj_apikey
);

void user_impersonate_v1_response_m_payload_free(user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload);

user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload_parseFromJSON(cJSON *user_impersonate_v1_response_m_payloadJSON);

cJSON *user_impersonate_v1_response_m_payload_convertToJSON(user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload);

#endif /* _user_impersonate_v1_response_m_payload_H_ */

