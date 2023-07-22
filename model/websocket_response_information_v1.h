/*
 * websocket_response_information_v1.h
 *
 * Response for Websocket Information V1
 */

#ifndef _websocket_response_information_v1_H_
#define _websocket_response_information_v1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websocket_response_information_v1_t websocket_response_information_v1_t;

#include "websocket_response_information_v1_m_payload.h"

// Enum EWEBSOCKETMESSAGETYPE for websocket_response_information_v1

typedef enum  { ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_NULL = 0, ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_Response_Information_V1 } ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e;

char* websocket_response_information_v1_e_websocket_messagetype_ToString(ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype);

ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e websocket_response_information_v1_e_websocket_messagetype_FromString(char* e_websocket_messagetype);



typedef struct websocket_response_information_v1_t {
    ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype; //enum
    struct websocket_response_information_v1_m_payload_t *m_payload; //model

} websocket_response_information_v1_t;

websocket_response_information_v1_t *websocket_response_information_v1_create(
    ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype,
    websocket_response_information_v1_m_payload_t *m_payload
);

void websocket_response_information_v1_free(websocket_response_information_v1_t *websocket_response_information_v1);

websocket_response_information_v1_t *websocket_response_information_v1_parseFromJSON(cJSON *websocket_response_information_v1JSON);

cJSON *websocket_response_information_v1_convertToJSON(websocket_response_information_v1_t *websocket_response_information_v1);

#endif /* _websocket_response_information_v1_H_ */

