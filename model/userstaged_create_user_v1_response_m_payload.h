/*
 * userstaged_create_user_v1_response_m_payload.h
 *
 * Payload for POST /1/object/userstaged/{pkiUserstagedID}/createUser
 */

#ifndef _userstaged_create_user_v1_response_m_payload_H_
#define _userstaged_create_user_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct userstaged_create_user_v1_response_m_payload_t userstaged_create_user_v1_response_m_payload_t;




typedef struct userstaged_create_user_v1_response_m_payload_t {
    int pki_user_id; //numeric

    int _library_owned; // Is the library responsible for freeing this object?
} userstaged_create_user_v1_response_m_payload_t;

__attribute__((deprecated)) userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_create(
    int pki_user_id
);

void userstaged_create_user_v1_response_m_payload_free(userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload);

userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_parseFromJSON(cJSON *userstaged_create_user_v1_response_m_payloadJSON);

cJSON *userstaged_create_user_v1_response_m_payload_convertToJSON(userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload);

#endif /* _userstaged_create_user_v1_response_m_payload_H_ */

