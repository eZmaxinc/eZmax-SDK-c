/*
 * websocket_request_server_get_websocket_id_v1.h
 *
 * Request for Websocket GetWebsocketID V1
 */

#ifndef _websocket_request_server_get_websocket_id_v1_H_
#define _websocket_request_server_get_websocket_id_v1_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct websocket_request_server_get_websocket_id_v1_t websocket_request_server_get_websocket_id_v1_t;


// Enum EWEBSOCKETMESSAGETYPE for websocket_request_server_get_websocket_id_v1

typedef enum  { ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_NULL = 0, ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_RequestServer_GetWebsocketID_V1 } ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e;

char* websocket_request_server_get_websocket_id_v1_e_websocket_messagetype_ToString(ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype);

ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e websocket_request_server_get_websocket_id_v1_e_websocket_messagetype_FromString(char* e_websocket_messagetype);



typedef struct websocket_request_server_get_websocket_id_v1_t {
    ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype; //enum

    int _library_owned; // Is the library responsible for freeing this object?
} websocket_request_server_get_websocket_id_v1_t;

__attribute__((deprecated)) websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1_create(
    ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_e e_websocket_messagetype
);

void websocket_request_server_get_websocket_id_v1_free(websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1);

websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1_parseFromJSON(cJSON *websocket_request_server_get_websocket_id_v1JSON);

cJSON *websocket_request_server_get_websocket_id_v1_convertToJSON(websocket_request_server_get_websocket_id_v1_t *websocket_request_server_get_websocket_id_v1);

#endif /* _websocket_request_server_get_websocket_id_v1_H_ */

