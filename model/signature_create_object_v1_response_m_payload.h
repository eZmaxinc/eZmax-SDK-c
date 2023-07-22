/*
 * signature_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/signature
 */

#ifndef _signature_create_object_v1_response_m_payload_H_
#define _signature_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct signature_create_object_v1_response_m_payload_t signature_create_object_v1_response_m_payload_t;




typedef struct signature_create_object_v1_response_m_payload_t {
    list_t *a_pki_signature_id; //primitive container

} signature_create_object_v1_response_m_payload_t;

signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload_create(
    list_t *a_pki_signature_id
);

void signature_create_object_v1_response_m_payload_free(signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload);

signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload_parseFromJSON(cJSON *signature_create_object_v1_response_m_payloadJSON);

cJSON *signature_create_object_v1_response_m_payload_convertToJSON(signature_create_object_v1_response_m_payload_t *signature_create_object_v1_response_m_payload);

#endif /* _signature_create_object_v1_response_m_payload_H_ */

