#ifndef communication_response_TEST
#define communication_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communication_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communication_response.h"
communication_response_t* instantiate_communication_response(int include_optional);

#include "test_descriptionstatic_response.c"
#include "test_emailstatic_response.c"
#include "test_phonestatic_response.c"
#include "test_common_audit.c"


communication_response_t* instantiate_communication_response(int include_optional) {
  communication_response_t* communication_response = NULL;
  if (include_optional) {
    communication_response = communication_response_create(
      1,
      ezmax_api_definition__full_communication_response__"Normal",
      ezmax_api_definition__full_communication_response__"Email",
      "This is an example of subject",
      "http://www.example.com/4526.html",
      ezmax_api_definition__full_communication_response__"Outbound",
      8,
       // false, not to have infinite recursion
      instantiate_descriptionstatic_response(0),
       // false, not to have infinite recursion
      instantiate_emailstatic_response(0),
       // false, not to have infinite recursion
      instantiate_phonestatic_response(0),
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    communication_response = communication_response_create(
      1,
      ezmax_api_definition__full_communication_response__"Normal",
      ezmax_api_definition__full_communication_response__"Email",
      "This is an example of subject",
      "http://www.example.com/4526.html",
      ezmax_api_definition__full_communication_response__"Outbound",
      8,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return communication_response;
}


#ifdef communication_response_MAIN

void test_communication_response(int include_optional) {
    communication_response_t* communication_response_1 = instantiate_communication_response(include_optional);

	cJSON* jsoncommunication_response_1 = communication_response_convertToJSON(communication_response_1);
	printf("communication_response :\n%s\n", cJSON_Print(jsoncommunication_response_1));
	communication_response_t* communication_response_2 = communication_response_parseFromJSON(jsoncommunication_response_1);
	cJSON* jsoncommunication_response_2 = communication_response_convertToJSON(communication_response_2);
	printf("repeating communication_response:\n%s\n", cJSON_Print(jsoncommunication_response_2));
}

int main() {
  test_communication_response(1);
  test_communication_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // communication_response_MAIN
#endif // communication_response_TEST
