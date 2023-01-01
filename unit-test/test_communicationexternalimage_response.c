#ifndef communicationexternalimage_response_TEST
#define communicationexternalimage_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationexternalimage_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationexternalimage_response.h"
communicationexternalimage_response_t* instantiate_communicationexternalimage_response(int include_optional);



communicationexternalimage_response_t* instantiate_communicationexternalimage_response(int include_optional) {
  communicationexternalimage_response_t* communicationexternalimage_response = NULL;
  if (include_optional) {
    communicationexternalimage_response = communicationexternalimage_response_create(
      211,
      "012345678901234567890123456789AB"
    );
  } else {
    communicationexternalimage_response = communicationexternalimage_response_create(
      211,
      "012345678901234567890123456789AB"
    );
  }

  return communicationexternalimage_response;
}


#ifdef communicationexternalimage_response_MAIN

void test_communicationexternalimage_response(int include_optional) {
    communicationexternalimage_response_t* communicationexternalimage_response_1 = instantiate_communicationexternalimage_response(include_optional);

	cJSON* jsoncommunicationexternalimage_response_1 = communicationexternalimage_response_convertToJSON(communicationexternalimage_response_1);
	printf("communicationexternalimage_response :\n%s\n", cJSON_Print(jsoncommunicationexternalimage_response_1));
	communicationexternalimage_response_t* communicationexternalimage_response_2 = communicationexternalimage_response_parseFromJSON(jsoncommunicationexternalimage_response_1);
	cJSON* jsoncommunicationexternalimage_response_2 = communicationexternalimage_response_convertToJSON(communicationexternalimage_response_2);
	printf("repeating communicationexternalimage_response:\n%s\n", cJSON_Print(jsoncommunicationexternalimage_response_2));
}

int main() {
  test_communicationexternalimage_response(1);
  test_communicationexternalimage_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationexternalimage_response_MAIN
#endif // communicationexternalimage_response_TEST
