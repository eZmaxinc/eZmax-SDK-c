#ifndef communicationimage_response_TEST
#define communicationimage_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationimage_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationimage_response.h"
communicationimage_response_t* instantiate_communicationimage_response(int include_optional);



communicationimage_response_t* instantiate_communicationimage_response(int include_optional) {
  communicationimage_response_t* communicationimage_response = NULL;
  if (include_optional) {
    communicationimage_response = communicationimage_response_create(
      164,
      164,
      "Picture.jpg"
    );
  } else {
    communicationimage_response = communicationimage_response_create(
      164,
      164,
      "Picture.jpg"
    );
  }

  return communicationimage_response;
}


#ifdef communicationimage_response_MAIN

void test_communicationimage_response(int include_optional) {
    communicationimage_response_t* communicationimage_response_1 = instantiate_communicationimage_response(include_optional);

	cJSON* jsoncommunicationimage_response_1 = communicationimage_response_convertToJSON(communicationimage_response_1);
	printf("communicationimage_response :\n%s\n", cJSON_Print(jsoncommunicationimage_response_1));
	communicationimage_response_t* communicationimage_response_2 = communicationimage_response_parseFromJSON(jsoncommunicationimage_response_1);
	cJSON* jsoncommunicationimage_response_2 = communicationimage_response_convertToJSON(communicationimage_response_2);
	printf("repeating communicationimage_response:\n%s\n", cJSON_Print(jsoncommunicationimage_response_2));
}

int main() {
  test_communicationimage_response(1);
  test_communicationimage_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationimage_response_MAIN
#endif // communicationimage_response_TEST
