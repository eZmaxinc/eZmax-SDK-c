#ifndef communicationrecipient_response_TEST
#define communicationrecipient_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationrecipient_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationrecipient_response.h"
communicationrecipient_response_t* instantiate_communicationrecipient_response(int include_optional);

#include "test_descriptionstatic_response_compound.c"
#include "test_emailstatic_response_compound.c"
#include "test_phonestatic_response_compound.c"


communicationrecipient_response_t* instantiate_communicationrecipient_response(int include_optional) {
  communicationrecipient_response_t* communicationrecipient_response = NULL;
  if (include_optional) {
    communicationrecipient_response = communicationrecipient_response_create(
      1,
      ezmax_api_definition__full_communicationrecipient_response__"User",
      1,
      26,
      21,
      18,
      31,
      89,
      50,
      70,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      ezmax_api_definition__full_communicationrecipient_response__"To",
       // false, not to have infinite recursion
      instantiate_descriptionstatic_response_compound(0),
       // false, not to have infinite recursion
      instantiate_emailstatic_response_compound(0),
       // false, not to have infinite recursion
      instantiate_phonestatic_response_compound(0)
    );
  } else {
    communicationrecipient_response = communicationrecipient_response_create(
      1,
      ezmax_api_definition__full_communicationrecipient_response__"User",
      1,
      26,
      21,
      18,
      31,
      89,
      50,
      70,
      1,
      1,
      1,
      1,
      1,
      1,
      1,
      ezmax_api_definition__full_communicationrecipient_response__"To",
      NULL,
      NULL,
      NULL
    );
  }

  return communicationrecipient_response;
}


#ifdef communicationrecipient_response_MAIN

void test_communicationrecipient_response(int include_optional) {
    communicationrecipient_response_t* communicationrecipient_response_1 = instantiate_communicationrecipient_response(include_optional);

	cJSON* jsoncommunicationrecipient_response_1 = communicationrecipient_response_convertToJSON(communicationrecipient_response_1);
	printf("communicationrecipient_response :\n%s\n", cJSON_Print(jsoncommunicationrecipient_response_1));
	communicationrecipient_response_t* communicationrecipient_response_2 = communicationrecipient_response_parseFromJSON(jsoncommunicationrecipient_response_1);
	cJSON* jsoncommunicationrecipient_response_2 = communicationrecipient_response_convertToJSON(communicationrecipient_response_2);
	printf("repeating communicationrecipient_response:\n%s\n", cJSON_Print(jsoncommunicationrecipient_response_2));
}

int main() {
  test_communicationrecipient_response(1);
  test_communicationrecipient_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationrecipient_response_MAIN
#endif // communicationrecipient_response_TEST
