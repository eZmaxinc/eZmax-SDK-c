#ifndef communicationexternalrecipient_response_TEST
#define communicationexternalrecipient_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationexternalrecipient_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationexternalrecipient_response.h"
communicationexternalrecipient_response_t* instantiate_communicationexternalrecipient_response(int include_optional);

#include "test_phone_response_compound.c"


communicationexternalrecipient_response_t* instantiate_communicationexternalrecipient_response(int include_optional) {
  communicationexternalrecipient_response_t* communicationexternalrecipient_response = NULL;
  if (include_optional) {
    communicationexternalrecipient_response = communicationexternalrecipient_response_create(
      9,
      "email@example.com",
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0),
      ezmax_api_definition__full_communicationexternalrecipient_response__"To",
      "John Doe"
    );
  } else {
    communicationexternalrecipient_response = communicationexternalrecipient_response_create(
      9,
      "email@example.com",
      NULL,
      ezmax_api_definition__full_communicationexternalrecipient_response__"To",
      "John Doe"
    );
  }

  return communicationexternalrecipient_response;
}


#ifdef communicationexternalrecipient_response_MAIN

void test_communicationexternalrecipient_response(int include_optional) {
    communicationexternalrecipient_response_t* communicationexternalrecipient_response_1 = instantiate_communicationexternalrecipient_response(include_optional);

	cJSON* jsoncommunicationexternalrecipient_response_1 = communicationexternalrecipient_response_convertToJSON(communicationexternalrecipient_response_1);
	printf("communicationexternalrecipient_response :\n%s\n", cJSON_Print(jsoncommunicationexternalrecipient_response_1));
	communicationexternalrecipient_response_t* communicationexternalrecipient_response_2 = communicationexternalrecipient_response_parseFromJSON(jsoncommunicationexternalrecipient_response_1);
	cJSON* jsoncommunicationexternalrecipient_response_2 = communicationexternalrecipient_response_convertToJSON(communicationexternalrecipient_response_2);
	printf("repeating communicationexternalrecipient_response:\n%s\n", cJSON_Print(jsoncommunicationexternalrecipient_response_2));
}

int main() {
  test_communicationexternalrecipient_response(1);
  test_communicationexternalrecipient_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationexternalrecipient_response_MAIN
#endif // communicationexternalrecipient_response_TEST
