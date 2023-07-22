/*
 * websocket_response_information_v1_m_payload.h
 *
 * Payload for Websocket Information V1
 */

#ifndef _websocket_response_information_v1_m_payload_H_
#define _websocket_response_information_v1_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websocket_response_information_v1_m_payload_t websocket_response_information_v1_m_payload_t;




typedef struct websocket_response_information_v1_m_payload_t {
    char *s_information_message; // string

} websocket_response_information_v1_m_payload_t;

websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload_create(
    char *s_information_message
);

void websocket_response_information_v1_m_payload_free(websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload);

websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload_parseFromJSON(cJSON *websocket_response_information_v1_m_payloadJSON);

cJSON *websocket_response_information_v1_m_payload_convertToJSON(websocket_response_information_v1_m_payload_t *websocket_response_information_v1_m_payload);

#endif /* _websocket_response_information_v1_m_payload_H_ */

