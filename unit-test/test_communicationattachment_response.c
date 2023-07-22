#ifndef communicationattachment_response_TEST
#define communicationattachment_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationattachment_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationattachment_response.h"
communicationattachment_response_t* instantiate_communicationattachment_response(int include_optional);



communicationattachment_response_t* instantiate_communicationattachment_response(int include_optional) {
  communicationattachment_response_t* communicationattachment_response = NULL;
  if (include_optional) {
    communicationattachment_response = communicationattachment_response_create(
      203,
      1,
      1,
      1,
      "File.pdf",
      "0"
    );
  } else {
    communicationattachment_response = communicationattachment_response_create(
      203,
      1,
      1,
      1,
      "File.pdf",
      "0"
    );
  }

  return communicationattachment_response;
}


#ifdef communicationattachment_response_MAIN

void test_communicationattachment_response(int include_optional) {
    communicationattachment_response_t* communicationattachment_response_1 = instantiate_communicationattachment_response(include_optional);

	cJSON* jsoncommunicationattachment_response_1 = communicationattachment_response_convertToJSON(communicationattachment_response_1);
	printf("communicationattachment_response :\n%s\n", cJSON_Print(jsoncommunicationattachment_response_1));
	communicationattachment_response_t* communicationattachment_response_2 = communicationattachment_response_parseFromJSON(jsoncommunicationattachment_response_1);
	cJSON* jsoncommunicationattachment_response_2 = communicationattachment_response_convertToJSON(communicationattachment_response_2);
	printf("repeating communicationattachment_response:\n%s\n", cJSON_Print(jsoncommunicationattachment_response_2));
}

int main() {
  test_communicationattachment_response(1);
  test_communicationattachment_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationattachment_response_MAIN
#endif // communicationattachment_response_TEST
