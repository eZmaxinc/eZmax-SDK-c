#ifndef communication_send_v1_request_TEST
#define communication_send_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_send_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_send_v1_request.h"
communication_send_v1_request_t* instantiate_communication_send_v1_request(int include_optional);



communication_send_v1_request_t* instantiate_communication_send_v1_request(int include_optional) {
  communication_send_v1_request_t* communication_send_v1_request = NULL;
  if (include_optional) {
    communication_send_v1_request = communication_send_v1_request_create(
      list_createList()
    );
  } else {
    communication_send_v1_request = communication_send_v1_request_create(
      list_createList()
    );
  }

  return communication_send_v1_request;
}


#ifdef communication_send_v1_request_MAIN

void test_communication_send_v1_request(int include_optional) {
    communication_send_v1_request_t* communication_send_v1_request_1 = instantiate_communication_send_v1_request(include_optional);

	cJSON* jsoncommunication_send_v1_request_1 = communication_send_v1_request_convertToJSON(communication_send_v1_request_1);
	printf("communication_send_v1_request :\n%s\n", cJSON_Print(jsoncommunication_send_v1_request_1));
	communication_send_v1_request_t* communication_send_v1_request_2 = communication_send_v1_request_parseFromJSON(jsoncommunication_send_v1_request_1);
	cJSON* jsoncommunication_send_v1_request_2 = communication_send_v1_request_convertToJSON(communication_send_v1_request_2);
	printf("repeating communication_send_v1_request:\n%s\n", cJSON_Print(jsoncommunication_send_v1_request_2));
}

int main() {
  test_communication_send_v1_request(1);
  test_communication_send_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_send_v1_request_MAIN
#endif // communication_send_v1_request_TEST
