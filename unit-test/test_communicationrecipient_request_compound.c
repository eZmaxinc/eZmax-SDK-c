#ifndef communicationrecipient_request_compound_TEST
#define communicationrecipient_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationrecipient_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationrecipient_request_compound.h"
communicationrecipient_request_compound_t* instantiate_communicationrecipient_request_compound(int include_optional);



communicationrecipient_request_compound_t* instantiate_communicationrecipient_request_compound(int include_optional) {
  communicationrecipient_request_compound_t* communicationrecipient_request_compound = NULL;
  if (include_optional) {
    communicationrecipient_request_compound = communicationrecipient_request_compound_create(
      1,
      1,
      1,
      26,
      18,
      31,
      1,
      1,
      89,
      1,
      1,
      70,
      ezmax_api_definition__full_communicationrecipient_request_compound__"To"
    );
  } else {
    communicationrecipient_request_compound = communicationrecipient_request_compound_create(
      1,
      1,
      1,
      26,
      18,
      31,
      1,
      1,
      89,
      1,
      1,
      70,
      ezmax_api_definition__full_communicationrecipient_request_compound__"To"
    );
  }

  return communicationrecipient_request_compound;
}


#ifdef communicationrecipient_request_compound_MAIN

void test_communicationrecipient_request_compound(int include_optional) {
    communicationrecipient_request_compound_t* communicationrecipient_request_compound_1 = instantiate_communicationrecipient_request_compound(include_optional);

	cJSON* jsoncommunicationrecipient_request_compound_1 = communicationrecipient_request_compound_convertToJSON(communicationrecipient_request_compound_1);
	printf("communicationrecipient_request_compound :\n%s\n", cJSON_Print(jsoncommunicationrecipient_request_compound_1));
	communicationrecipient_request_compound_t* communicationrecipient_request_compound_2 = communicationrecipient_request_compound_parseFromJSON(jsoncommunicationrecipient_request_compound_1);
	cJSON* jsoncommunicationrecipient_request_compound_2 = communicationrecipient_request_compound_convertToJSON(communicationrecipient_request_compound_2);
	printf("repeating communicationrecipient_request_compound:\n%s\n", cJSON_Print(jsoncommunicationrecipient_request_compound_2));
}

int main() {
  test_communicationrecipient_request_compound(1);
  test_communicationrecipient_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationrecipient_request_compound_MAIN
#endif // communicationrecipient_request_compound_TEST
