#ifndef communicationreference_request_TEST
#define communicationreference_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationreference_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationreference_request.h"
communicationreference_request_t* instantiate_communicationreference_request(int include_optional);



communicationreference_request_t* instantiate_communicationreference_request(int include_optional) {
  communicationreference_request_t* communicationreference_request = NULL;
  if (include_optional) {
    communicationreference_request = communicationreference_request_create(
      1263,
      38,
      33,
      17,
      2445,
      1,
      142,
      1262,
      532
    );
  } else {
    communicationreference_request = communicationreference_request_create(
      1263,
      38,
      33,
      17,
      2445,
      1,
      142,
      1262,
      532
    );
  }

  return communicationreference_request;
}


#ifdef communicationreference_request_MAIN

void test_communicationreference_request(int include_optional) {
    communicationreference_request_t* communicationreference_request_1 = instantiate_communicationreference_request(include_optional);

	cJSON* jsoncommunicationreference_request_1 = communicationreference_request_convertToJSON(communicationreference_request_1);
	printf("communicationreference_request :\n%s\n", cJSON_Print(jsoncommunicationreference_request_1));
	communicationreference_request_t* communicationreference_request_2 = communicationreference_request_parseFromJSON(jsoncommunicationreference_request_1);
	cJSON* jsoncommunicationreference_request_2 = communicationreference_request_convertToJSON(communicationreference_request_2);
	printf("repeating communicationreference_request:\n%s\n", cJSON_Print(jsoncommunicationreference_request_2));
}

int main() {
  test_communicationreference_request(1);
  test_communicationreference_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationreference_request_MAIN
#endif // communicationreference_request_TEST
