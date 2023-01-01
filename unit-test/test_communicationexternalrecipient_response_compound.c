#ifndef communicationexternalrecipient_response_compound_TEST
#define communicationexternalrecipient_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationexternalrecipient_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationexternalrecipient_response_compound.h"
communicationexternalrecipient_response_compound_t* instantiate_communicationexternalrecipient_response_compound(int include_optional);

#include "test_phone_response_compound.c"


communicationexternalrecipient_response_compound_t* instantiate_communicationexternalrecipient_response_compound(int include_optional) {
  communicationexternalrecipient_response_compound_t* communicationexternalrecipient_response_compound = NULL;
  if (include_optional) {
    communicationexternalrecipient_response_compound = communicationexternalrecipient_response_compound_create(
      9,
      "email@example.com",
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0),
      ezmax_api_definition__full_communicationexternalrecipient_response_compound__"To",
      "John Doe"
    );
  } else {
    communicationexternalrecipient_response_compound = communicationexternalrecipient_response_compound_create(
      9,
      "email@example.com",
      NULL,
      ezmax_api_definition__full_communicationexternalrecipient_response_compound__"To",
      "John Doe"
    );
  }

  return communicationexternalrecipient_response_compound;
}


#ifdef communicationexternalrecipient_response_compound_MAIN

void test_communicationexternalrecipient_response_compound(int include_optional) {
    communicationexternalrecipient_response_compound_t* communicationexternalrecipient_response_compound_1 = instantiate_communicationexternalrecipient_response_compound(include_optional);

	cJSON* jsoncommunicationexternalrecipient_response_compound_1 = communicationexternalrecipient_response_compound_convertToJSON(communicationexternalrecipient_response_compound_1);
	printf("communicationexternalrecipient_response_compound :\n%s\n", cJSON_Print(jsoncommunicationexternalrecipient_response_compound_1));
	communicationexternalrecipient_response_compound_t* communicationexternalrecipient_response_compound_2 = communicationexternalrecipient_response_compound_parseFromJSON(jsoncommunicationexternalrecipient_response_compound_1);
	cJSON* jsoncommunicationexternalrecipient_response_compound_2 = communicationexternalrecipient_response_compound_convertToJSON(communicationexternalrecipient_response_compound_2);
	printf("repeating communicationexternalrecipient_response_compound:\n%s\n", cJSON_Print(jsoncommunicationexternalrecipient_response_compound_2));
}

int main() {
  test_communicationexternalrecipient_response_compound(1);
  test_communicationexternalrecipient_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationexternalrecipient_response_compound_MAIN
#endif // communicationexternalrecipient_response_compound_TEST
