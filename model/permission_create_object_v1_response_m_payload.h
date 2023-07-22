/*
 * permission_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/permission
 */

#ifndef _permission_create_object_v1_response_m_payload_H_
#define _permission_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct permission_create_object_v1_response_m_payload_t permission_create_object_v1_response_m_payload_t;




typedef struct permission_create_object_v1_response_m_payload_t {
    list_t *a_pki_permission_id; //primitive container

} permission_create_object_v1_response_m_payload_t;

permission_create_object_v1_response_m_payload_t *permission_create_object_v1_response_m_payload_create(
    list_t *a_pki_permission_id
);

void permission_create_object_v1_response_m_payload_free(permission_create_object_v1_response_m_payload_t *permission_create_object_v1_response_m_payload);

permission_create_object_v1_response_m_payload_t *permission_create_object_v1_response_m_payload_parseFromJSON(cJSON *permission_create_object_v1_response_m_payloadJSON);

cJSON *permission_create_object_v1_response_m_payload_convertToJSON(permission_create_object_v1_response_m_payload_t *permission_create_object_v1_response_m_payload);

#endif /* _permission_create_object_v1_response_m_payload_H_ */

