/*
 * websocket_response_error_v1_m_payload.h
 *
 * Payload for Websocket Error V1
 */

#ifndef _websocket_response_error_v1_m_payload_H_
#define _websocket_response_error_v1_m_payload_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websocket_response_error_v1_m_payload_t websocket_response_error_v1_m_payload_t;

#include "field_e_error_code.h"



typedef struct websocket_response_error_v1_m_payload_t {
    char *s_error_message; // string
    ezmax_api_definition__full_field_e_error_code__e e_error_code; //referenced enum

    int _library_owned; // Is the library responsible for freeing this object?
} websocket_response_error_v1_m_payload_t;

__attribute__((deprecated)) websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code
);

void websocket_response_error_v1_m_payload_free(websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload);

websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload_parseFromJSON(cJSON *websocket_response_error_v1_m_payloadJSON);

cJSON *websocket_response_error_v1_m_payload_convertToJSON(websocket_response_error_v1_m_payload_t *websocket_response_error_v1_m_payload);

#endif /* _websocket_response_error_v1_m_payload_H_ */

