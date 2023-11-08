#ifndef communicationrecipient_request_TEST
#define communicationrecipient_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationrecipient_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationrecipient_request.h"
communicationrecipient_request_t* instantiate_communicationrecipient_request(int include_optional);



communicationrecipient_request_t* instantiate_communicationrecipient_request(int include_optional) {
  communicationrecipient_request_t* communicationrecipient_request = NULL;
  if (include_optional) {
    communicationrecipient_request = communicationrecipient_request_create(
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
      ezmax_api_definition__full_communicationrecipient_request__"To"
    );
  } else {
    communicationrecipient_request = communicationrecipient_request_create(
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
      ezmax_api_definition__full_communicationrecipient_request__"To"
    );
  }

  return communicationrecipient_request;
}


#ifdef communicationrecipient_request_MAIN

void test_communicationrecipient_request(int include_optional) {
    communicationrecipient_request_t* communicationrecipient_request_1 = instantiate_communicationrecipient_request(include_optional);

	cJSON* jsoncommunicationrecipient_request_1 = communicationrecipient_request_convertToJSON(communicationrecipient_request_1);
	printf("communicationrecipient_request :\n%s\n", cJSON_Print(jsoncommunicationrecipient_request_1));
	communicationrecipient_request_t* communicationrecipient_request_2 = communicationrecipient_request_parseFromJSON(jsoncommunicationrecipient_request_1);
	cJSON* jsoncommunicationrecipient_request_2 = communicationrecipient_request_convertToJSON(communicationrecipient_request_2);
	printf("repeating communicationrecipient_request:\n%s\n", cJSON_Print(jsoncommunicationrecipient_request_2));
}

int main() {
  test_communicationrecipient_request(1);
  test_communicationrecipient_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationrecipient_request_MAIN
#endif // communicationrecipient_request_TEST
