#ifndef communicationexternalrecipient_request_compound_TEST
#define communicationexternalrecipient_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationexternalrecipient_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationexternalrecipient_request_compound.h"
communicationexternalrecipient_request_compound_t* instantiate_communicationexternalrecipient_request_compound(int include_optional);



communicationexternalrecipient_request_compound_t* instantiate_communicationexternalrecipient_request_compound(int include_optional) {
  communicationexternalrecipient_request_compound_t* communicationexternalrecipient_request_compound = NULL;
  if (include_optional) {
    communicationexternalrecipient_request_compound = communicationexternalrecipient_request_compound_create(
      9,
      "email@example.com",
      "+15149901516",
      ezmax_api_definition__full_communicationexternalrecipient_request_compound__"To",
      "John Doe"
    );
  } else {
    communicationexternalrecipient_request_compound = communicationexternalrecipient_request_compound_create(
      9,
      "email@example.com",
      "+15149901516",
      ezmax_api_definition__full_communicationexternalrecipient_request_compound__"To",
      "John Doe"
    );
  }

  return communicationexternalrecipient_request_compound;
}


#ifdef communicationexternalrecipient_request_compound_MAIN

void test_communicationexternalrecipient_request_compound(int include_optional) {
    communicationexternalrecipient_request_compound_t* communicationexternalrecipient_request_compound_1 = instantiate_communicationexternalrecipient_request_compound(include_optional);

	cJSON* jsoncommunicationexternalrecipient_request_compound_1 = communicationexternalrecipient_request_compound_convertToJSON(communicationexternalrecipient_request_compound_1);
	printf("communicationexternalrecipient_request_compound :\n%s\n", cJSON_Print(jsoncommunicationexternalrecipient_request_compound_1));
	communicationexternalrecipient_request_compound_t* communicationexternalrecipient_request_compound_2 = communicationexternalrecipient_request_compound_parseFromJSON(jsoncommunicationexternalrecipient_request_compound_1);
	cJSON* jsoncommunicationexternalrecipient_request_compound_2 = communicationexternalrecipient_request_compound_convertToJSON(communicationexternalrecipient_request_compound_2);
	printf("repeating communicationexternalrecipient_request_compound:\n%s\n", cJSON_Print(jsoncommunicationexternalrecipient_request_compound_2));
}

int main() {
  test_communicationexternalrecipient_request_compound(1);
  test_communicationexternalrecipient_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationexternalrecipient_request_compound_MAIN
#endif // communicationexternalrecipient_request_compound_TEST
