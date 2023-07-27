/*
 * cors_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/cors
 */

#ifndef _cors_create_object_v1_response_m_payload_H_
#define _cors_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cors_create_object_v1_response_m_payload_t cors_create_object_v1_response_m_payload_t;




typedef struct cors_create_object_v1_response_m_payload_t {
    list_t *a_pki_cors_id; //primitive container

} cors_create_object_v1_response_m_payload_t;

cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload_create(
    list_t *a_pki_cors_id
);

void cors_create_object_v1_response_m_payload_free(cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload);

cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload_parseFromJSON(cJSON *cors_create_object_v1_response_m_payloadJSON);

cJSON *cors_create_object_v1_response_m_payload_convertToJSON(cors_create_object_v1_response_m_payload_t *cors_create_object_v1_response_m_payload);

#endif /* _cors_create_object_v1_response_m_payload_H_ */

