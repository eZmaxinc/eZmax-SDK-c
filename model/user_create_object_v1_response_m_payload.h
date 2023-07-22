/*
 * user_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/user
 */

#ifndef _user_create_object_v1_response_m_payload_H_
#define _user_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct user_create_object_v1_response_m_payload_t user_create_object_v1_response_m_payload_t;




typedef struct user_create_object_v1_response_m_payload_t {
    list_t *a_pki_user_id; //primitive container

} user_create_object_v1_response_m_payload_t;

user_create_object_v1_response_m_payload_t *user_create_object_v1_response_m_payload_create(
    list_t *a_pki_user_id
);

void user_create_object_v1_response_m_payload_free(user_create_object_v1_response_m_payload_t *user_create_object_v1_response_m_payload);

user_create_object_v1_response_m_payload_t *user_create_object_v1_response_m_payload_parseFromJSON(cJSON *user_create_object_v1_response_m_payloadJSON);

cJSON *user_create_object_v1_response_m_payload_convertToJSON(user_create_object_v1_response_m_payload_t *user_create_object_v1_response_m_payload);

#endif /* _user_create_object_v1_response_m_payload_H_ */

