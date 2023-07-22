#ifndef websocket_request_server_get_websocket_id_v1_TEST
#define websocket_request_server_get_websocket_id_v1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websocket_request_server_get_websocket_id_v1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websocket_request_server_get_websocket_id_v1.h"
websocket_request_server_get_websocket_id_v1_t* instantiate_websocket_request_server_get_websocket_id_v1(int include_optional);



websocket_request_server_get_websocket_id_v1_t* instantiate_websocket_request_server_get_websocket_id_v1(int include_optional) {
  websocket_request_server_get_websocket_id_v1_t* websocket_request_server_get_websocket_id_v1 = NULL;
  if (include_optional) {
    websocket_request_server_get_websocket_id_v1 = websocket_request_server_get_websocket_id_v1_create(
      ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_RequestServer-GetWebsocketID-V1
    );
  } else {
    websocket_request_server_get_websocket_id_v1 = websocket_request_server_get_websocket_id_v1_create(
      ezmax_api_definition__full_websocket_request_server_get_websocket_id_v1_EWEBSOCKETMESSAGETYPE_RequestServer-GetWebsocketID-V1
    );
  }

  return websocket_request_server_get_websocket_id_v1;
}


#ifdef websocket_request_server_get_websocket_id_v1_MAIN

void test_websocket_request_server_get_websocket_id_v1(int include_optional) {
    websocket_request_server_get_websocket_id_v1_t* websocket_request_server_get_websocket_id_v1_1 = instantiate_websocket_request_server_get_websocket_id_v1(include_optional);

	cJSON* jsonwebsocket_request_server_get_websocket_id_v1_1 = websocket_request_server_get_websocket_id_v1_convertToJSON(websocket_request_server_get_websocket_id_v1_1);
	printf("websocket_request_server_get_websocket_id_v1 :\n%s\n", cJSON_Print(jsonwebsocket_request_server_get_websocket_id_v1_1));
	websocket_request_server_get_websocket_id_v1_t* websocket_request_server_get_websocket_id_v1_2 = websocket_request_server_get_websocket_id_v1_parseFromJSON(jsonwebsocket_request_server_get_websocket_id_v1_1);
	cJSON* jsonwebsocket_request_server_get_websocket_id_v1_2 = websocket_request_server_get_websocket_id_v1_convertToJSON(websocket_request_server_get_websocket_id_v1_2);
	printf("repeating websocket_request_server_get_websocket_id_v1:\n%s\n", cJSON_Print(jsonwebsocket_request_server_get_websocket_id_v1_2));
}

int main() {
  test_websocket_request_server_get_websocket_id_v1(1);
  test_websocket_request_server_get_websocket_id_v1(0);

  printf("Hello world \n");
  return 0;
}

#endif // websocket_request_server_get_websocket_id_v1_MAIN
#endif // websocket_request_server_get_websocket_id_v1_TEST
