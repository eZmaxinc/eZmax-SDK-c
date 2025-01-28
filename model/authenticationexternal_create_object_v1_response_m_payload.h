/*
 * authenticationexternal_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/authenticationexternal
 */

#ifndef _authenticationexternal_create_object_v1_response_m_payload_H_
#define _authenticationexternal_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct authenticationexternal_create_object_v1_response_m_payload_t authenticationexternal_create_object_v1_response_m_payload_t;




typedef struct authenticationexternal_create_object_v1_response_m_payload_t {
    list_t *a_pki_authenticationexternal_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} authenticationexternal_create_object_v1_response_m_payload_t;

__attribute__((deprecated)) authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload_create(
    list_t *a_pki_authenticationexternal_id
);

void authenticationexternal_create_object_v1_response_m_payload_free(authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload);

authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload_parseFromJSON(cJSON *authenticationexternal_create_object_v1_response_m_payloadJSON);

cJSON *authenticationexternal_create_object_v1_response_m_payload_convertToJSON(authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload);

#endif /* _authenticationexternal_create_object_v1_response_m_payload_H_ */

