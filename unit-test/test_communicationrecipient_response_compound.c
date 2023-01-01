#ifndef communicationrecipient_response_compound_TEST
#define communicationrecipient_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationrecipient_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationrecipient_response_compound.h"
communicationrecipient_response_compound_t* instantiate_communicationrecipient_response_compound(int include_optional);

#include "test_phone_response_compound.c"


communicationrecipient_response_compound_t* instantiate_communicationrecipient_response_compound(int include_optional) {
  communicationrecipient_response_compound_t* communicationrecipient_response_compound = NULL;
  if (include_optional) {
    communicationrecipient_response_compound = communicationrecipient_response_compound_create(
      1,
      1,
      26,
      21,
      18,
      31,
      89,
      50,
      70,
      "email@example.com",
      ezmax_api_definition__full_communicationrecipient_response_compound__"To",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
       // false, not to have infinite recursion
      instantiate_phone_response_compound(0)
    );
  } else {
    communicationrecipient_response_compound = communicationrecipient_response_compound_create(
      1,
      1,
      26,
      21,
      18,
      31,
      89,
      50,
      70,
      "email@example.com",
      ezmax_api_definition__full_communicationrecipient_response_compound__"To",
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      NULL
    );
  }

  return communicationrecipient_response_compound;
}


#ifdef communicationrecipient_response_compound_MAIN

void test_communicationrecipient_response_compound(int include_optional) {
    communicationrecipient_response_compound_t* communicationrecipient_response_compound_1 = instantiate_communicationrecipient_response_compound(include_optional);

	cJSON* jsoncommunicationrecipient_response_compound_1 = communicationrecipient_response_compound_convertToJSON(communicationrecipient_response_compound_1);
	printf("communicationrecipient_response_compound :\n%s\n", cJSON_Print(jsoncommunicationrecipient_response_compound_1));
	communicationrecipient_response_compound_t* communicationrecipient_response_compound_2 = communicationrecipient_response_compound_parseFromJSON(jsoncommunicationrecipient_response_compound_1);
	cJSON* jsoncommunicationrecipient_response_compound_2 = communicationrecipient_response_compound_convertToJSON(communicationrecipient_response_compound_2);
	printf("repeating communicationrecipient_response_compound:\n%s\n", cJSON_Print(jsoncommunicationrecipient_response_compound_2));
}

int main() {
  test_communicationrecipient_response_compound(1);
  test_communicationrecipient_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationrecipient_response_compound_MAIN
#endif // communicationrecipient_response_compound_TEST
