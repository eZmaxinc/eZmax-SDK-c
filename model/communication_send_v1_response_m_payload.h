/*
 * communication_send_v1_response_m_payload.h
 *
 * Payload for POST /1/object/communication
 */

#ifndef _communication_send_v1_response_m_payload_H_
#define _communication_send_v1_response_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct communication_send_v1_response_m_payload_t communication_send_v1_response_m_payload_t;




typedef struct communication_send_v1_response_m_payload_t {
    list_t *a_pki_communication_id; //primitive container

    int _library_owned; // Is the library responsible for freeing this object?
} communication_send_v1_response_m_payload_t;

__attribute__((deprecated)) communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload_create(
    list_t *a_pki_communication_id
);

void communication_send_v1_response_m_payload_free(communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload);

communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload_parseFromJSON(cJSON *communication_send_v1_response_m_payloadJSON);

cJSON *communication_send_v1_response_m_payload_convertToJSON(communication_send_v1_response_m_payload_t *communication_send_v1_response_m_payload);

#endif /* _communication_send_v1_response_m_payload_H_ */

