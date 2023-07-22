#ifndef websocket_response_error_v1_m_payload_TEST
#define websocket_response_error_v1_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define websocket_response_error_v1_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/websocket_response_error_v1_m_payload.h"
websocket_response_error_v1_m_payload_t* instantiate_websocket_response_error_v1_m_payload(int include_optional);



websocket_response_error_v1_m_payload_t* instantiate_websocket_response_error_v1_m_payload(int include_optional) {
  websocket_response_error_v1_m_payload_t* websocket_response_error_v1_m_payload = NULL;
  if (include_optional) {
    websocket_response_error_v1_m_payload = websocket_response_error_v1_m_payload_create(
      "Invalid Signature Headers",
      ezmax_api_definition__full_websocket_response_error_v1_m_payload__"BADREQUEST"
    );
  } else {
    websocket_response_error_v1_m_payload = websocket_response_error_v1_m_payload_create(
      "Invalid Signature Headers",
      ezmax_api_definition__full_websocket_response_error_v1_m_payload__"BADREQUEST"
    );
  }

  return websocket_response_error_v1_m_payload;
}


#ifdef websocket_response_error_v1_m_payload_MAIN

void test_websocket_response_error_v1_m_payload(int include_optional) {
    websocket_response_error_v1_m_payload_t* websocket_response_error_v1_m_payload_1 = instantiate_websocket_response_error_v1_m_payload(include_optional);

	cJSON* jsonwebsocket_response_error_v1_m_payload_1 = websocket_response_error_v1_m_payload_convertToJSON(websocket_response_error_v1_m_payload_1);
	printf("websocket_response_error_v1_m_payload :\n%s\n", cJSON_Print(jsonwebsocket_response_error_v1_m_payload_1));
	websocket_response_error_v1_m_payload_t* websocket_response_error_v1_m_payload_2 = websocket_response_error_v1_m_payload_parseFromJSON(jsonwebsocket_response_error_v1_m_payload_1);
	cJSON* jsonwebsocket_response_error_v1_m_payload_2 = websocket_response_error_v1_m_payload_convertToJSON(websocket_response_error_v1_m_payload_2);
	printf("repeating websocket_response_error_v1_m_payload:\n%s\n", cJSON_Print(jsonwebsocket_response_error_v1_m_payload_2));
}

int main() {
  test_websocket_response_error_v1_m_payload(1);
  test_websocket_response_error_v1_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // websocket_response_error_v1_m_payload_MAIN
#endif // websocket_response_error_v1_m_payload_TEST
