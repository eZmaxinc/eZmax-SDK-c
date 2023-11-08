#ifndef communicationexternalrecipient_request_TEST
#define communicationexternalrecipient_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationexternalrecipient_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationexternalrecipient_request.h"
communicationexternalrecipient_request_t* instantiate_communicationexternalrecipient_request(int include_optional);



communicationexternalrecipient_request_t* instantiate_communicationexternalrecipient_request(int include_optional) {
  communicationexternalrecipient_request_t* communicationexternalrecipient_request = NULL;
  if (include_optional) {
    communicationexternalrecipient_request = communicationexternalrecipient_request_create(
      9,
      "email@example.com",
      "+15149901516",
      ezmax_api_definition__full_communicationexternalrecipient_request__"To",
      "John Doe"
    );
  } else {
    communicationexternalrecipient_request = communicationexternalrecipient_request_create(
      9,
      "email@example.com",
      "+15149901516",
      ezmax_api_definition__full_communicationexternalrecipient_request__"To",
      "John Doe"
    );
  }

  return communicationexternalrecipient_request;
}


#ifdef communicationexternalrecipient_request_MAIN

void test_communicationexternalrecipient_request(int include_optional) {
    communicationexternalrecipient_request_t* communicationexternalrecipient_request_1 = instantiate_communicationexternalrecipient_request(include_optional);

	cJSON* jsoncommunicationexternalrecipient_request_1 = communicationexternalrecipient_request_convertToJSON(communicationexternalrecipient_request_1);
	printf("communicationexternalrecipient_request :\n%s\n", cJSON_Print(jsoncommunicationexternalrecipient_request_1));
	communicationexternalrecipient_request_t* communicationexternalrecipient_request_2 = communicationexternalrecipient_request_parseFromJSON(jsoncommunicationexternalrecipient_request_1);
	cJSON* jsoncommunicationexternalrecipient_request_2 = communicationexternalrecipient_request_convertToJSON(communicationexternalrecipient_request_2);
	printf("repeating communicationexternalrecipient_request:\n%s\n", cJSON_Print(jsoncommunicationexternalrecipient_request_2));
}

int main() {
  test_communicationexternalrecipient_request(1);
  test_communicationexternalrecipient_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationexternalrecipient_request_MAIN
#endif // communicationexternalrecipient_request_TEST
