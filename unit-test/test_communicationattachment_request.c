#ifndef communicationattachment_request_TEST
#define communicationattachment_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationattachment_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationattachment_request.h"
communicationattachment_request_t* instantiate_communicationattachment_request(int include_optional);



communicationattachment_request_t* instantiate_communicationattachment_request(int include_optional) {
  communicationattachment_request_t* communicationattachment_request = NULL;
  if (include_optional) {
    communicationattachment_request = communicationattachment_request_create(
      203,
      1,
      1,
      1
    );
  } else {
    communicationattachment_request = communicationattachment_request_create(
      203,
      1,
      1,
      1
    );
  }

  return communicationattachment_request;
}


#ifdef communicationattachment_request_MAIN

void test_communicationattachment_request(int include_optional) {
    communicationattachment_request_t* communicationattachment_request_1 = instantiate_communicationattachment_request(include_optional);

	cJSON* jsoncommunicationattachment_request_1 = communicationattachment_request_convertToJSON(communicationattachment_request_1);
	printf("communicationattachment_request :\n%s\n", cJSON_Print(jsoncommunicationattachment_request_1));
	communicationattachment_request_t* communicationattachment_request_2 = communicationattachment_request_parseFromJSON(jsoncommunicationattachment_request_1);
	cJSON* jsoncommunicationattachment_request_2 = communicationattachment_request_convertToJSON(communicationattachment_request_2);
	printf("repeating communicationattachment_request:\n%s\n", cJSON_Print(jsoncommunicationattachment_request_2));
}

int main() {
  test_communicationattachment_request(1);
  test_communicationattachment_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationattachment_request_MAIN
#endif // communicationattachment_request_TEST
