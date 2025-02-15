/*
 * usergroup_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/usergroup
 */

#ifndef _usergroup_create_object_v1_response_m_payload_H_
#define _usergroup_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct usergroup_create_object_v1_response_m_payload_t usergroup_create_object_v1_response_m_payload_t;




typedef struct usergroup_create_object_v1_response_m_payload_t {
    list_t *a_pki_usergroup_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} usergroup_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) usergroup_create_object_v1_response_m_payload_t *usergroup_create_object_v1_response_m_payload_create(
    list_t *a_pki_usergroup_id
);

void usergroup_create_object_v1_response_m_payload_free(usergroup_create_object_v1_response_m_payload_t *usergroup_create_object_v1_response_m_payload);

usergroup_create_object_v1_response_m_payload_t *usergroup_create_object_v1_response_m_payload_parseFromJSON(cJSON *usergroup_create_object_v1_response_m_payloadJSON);

cJSON *usergroup_create_object_v1_response_m_payload_convertToJSON(usergroup_create_object_v1_response_m_payload_t *usergroup_create_object_v1_response_m_payload);

#endif /* _usergroup_create_object_v1_response_m_payload_H_ */

