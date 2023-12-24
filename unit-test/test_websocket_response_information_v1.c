#ifndef websocket_response_information_v1_TEST
#define websocket_response_information_v1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websocket_response_information_v1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websocket_response_information_v1.h"
websocket_response_information_v1_t* instantiate_websocket_response_information_v1(int include_optional);

#include "test_websocket_response_information_v1_m_payload.c"


websocket_response_information_v1_t* instantiate_websocket_response_information_v1(int include_optional) {
  websocket_response_information_v1_t* websocket_response_information_v1 = NULL;
  if (include_optional) {
    websocket_response_information_v1 = websocket_response_information_v1_create(
      ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_Response-Information-V1,
      "Ch@nnel_1.0",
       // false, not to have infinite recursion
      instantiate_websocket_response_information_v1_m_payload(0)
    );
  } else {
    websocket_response_information_v1 = websocket_response_information_v1_create(
      ezmax_api_definition__full_websocket_response_information_v1_EWEBSOCKETMESSAGETYPE_Response-Information-V1,
      "Ch@nnel_1.0",
      NULL
    );
  }

  return websocket_response_information_v1;
}


#ifdef websocket_response_information_v1_MAIN

void test_websocket_response_information_v1(int include_optional) {
    websocket_response_information_v1_t* websocket_response_information_v1_1 = instantiate_websocket_response_information_v1(include_optional);

	cJSON* jsonwebsocket_response_information_v1_1 = websocket_response_information_v1_convertToJSON(websocket_response_information_v1_1);
	printf("websocket_response_information_v1 :\n%s\n", cJSON_Print(jsonwebsocket_response_information_v1_1));
	websocket_response_information_v1_t* websocket_response_information_v1_2 = websocket_response_information_v1_parseFromJSON(jsonwebsocket_response_information_v1_1);
	cJSON* jsonwebsocket_response_information_v1_2 = websocket_response_information_v1_convertToJSON(websocket_response_information_v1_2);
	printf("repeating websocket_response_information_v1:\n%s\n", cJSON_Print(jsonwebsocket_response_information_v1_2));
}

int main() {
  test_websocket_response_information_v1(1);
  test_websocket_response_information_v1(0);

  printf("Hello world \n");
  return 0;
}

#endif // websocket_response_information_v1_MAIN
#endif // websocket_response_information_v1_TEST
