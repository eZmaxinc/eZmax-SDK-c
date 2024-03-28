/*
 * communication_create_object_v1_response_m_payload.h
 *
 * Payload for POST /1/object/communication
 */

#ifndef _communication_create_object_v1_response_m_payload_H_
#define _communication_create_object_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_create_object_v1_response_m_payload_t communication_create_object_v1_response_m_payload_t;




typedef struct communication_create_object_v1_response_m_payload_t {
    list_t *a_pki_communication_id; //primitive container

} communication_create_object_v1_response_m_payload_t;

communication_create_object_v1_response_m_payload_t *communication_create_object_v1_response_m_payload_create(
    list_t *a_pki_communication_id
);

void communication_create_object_v1_response_m_payload_free(communication_create_object_v1_response_m_payload_t *communication_create_object_v1_response_m_payload);

communication_create_object_v1_response_m_payload_t *communication_create_object_v1_response_m_payload_parseFromJSON(cJSON *communication_create_object_v1_response_m_payloadJSON);

cJSON *communication_create_object_v1_response_m_payload_convertToJSON(communication_create_object_v1_response_m_payload_t *communication_create_object_v1_response_m_payload);

#endif /* _communication_create_object_v1_response_m_payload_H_ */
