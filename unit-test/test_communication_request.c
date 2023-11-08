#ifndef communication_request_TEST
#define communication_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_request.h"
communication_request_t* instantiate_communication_request(int include_optional);

#include "test_custom_communicationsender_request.c"


communication_request_t* instantiate_communication_request(int include_optional) {
  communication_request_t* communication_request = NULL;
  if (include_optional) {
    communication_request = communication_request_create(
      1,
      ezmax_api_definition__full_communication_request__"Normal",
      ezmax_api_definition__full_communication_request__"Email",
       // false, not to have infinite recursion
      instantiate_custom_communicationsender_request(0),
      "This is an example of subject",
      "0",
      false,
      ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_Attachment,
      1,
      1
    );
  } else {
    communication_request = communication_request_create(
      1,
      ezmax_api_definition__full_communication_request__"Normal",
      ezmax_api_definition__full_communication_request__"Email",
      NULL,
      "This is an example of subject",
      "0",
      false,
      ezmax_api_definition__full_communication_request_ECOMMUNICATIONATTACHMENTTYPE_Attachment,
      1,
      1
    );
  }

  return communication_request;
}


#ifdef communication_request_MAIN

void test_communication_request(int include_optional) {
    communication_request_t* communication_request_1 = instantiate_communication_request(include_optional);

	cJSON* jsoncommunication_request_1 = communication_request_convertToJSON(communication_request_1);
	printf("communication_request :\n%s\n", cJSON_Print(jsoncommunication_request_1));
	communication_request_t* communication_request_2 = communication_request_parseFromJSON(jsoncommunication_request_1);
	cJSON* jsoncommunication_request_2 = communication_request_convertToJSON(communication_request_2);
	printf("repeating communication_request:\n%s\n", cJSON_Print(jsoncommunication_request_2));
}

int main() {
  test_communication_request(1);
  test_communication_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_request_MAIN
#endif // communication_request_TEST
