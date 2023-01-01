#ifndef communicationexternalimage_response_compound_TEST
#define communicationexternalimage_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationexternalimage_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationexternalimage_response_compound.h"
communicationexternalimage_response_compound_t* instantiate_communicationexternalimage_response_compound(int include_optional);



communicationexternalimage_response_compound_t* instantiate_communicationexternalimage_response_compound(int include_optional) {
  communicationexternalimage_response_compound_t* communicationexternalimage_response_compound = NULL;
  if (include_optional) {
    communicationexternalimage_response_compound = communicationexternalimage_response_compound_create(
      211,
      "012345678901234567890123456789AB"
    );
  } else {
    communicationexternalimage_response_compound = communicationexternalimage_response_compound_create(
      211,
      "012345678901234567890123456789AB"
    );
  }

  return communicationexternalimage_response_compound;
}


#ifdef communicationexternalimage_response_compound_MAIN

void test_communicationexternalimage_response_compound(int include_optional) {
    communicationexternalimage_response_compound_t* communicationexternalimage_response_compound_1 = instantiate_communicationexternalimage_response_compound(include_optional);

	cJSON* jsoncommunicationexternalimage_response_compound_1 = communicationexternalimage_response_compound_convertToJSON(communicationexternalimage_response_compound_1);
	printf("communicationexternalimage_response_compound :\n%s\n", cJSON_Print(jsoncommunicationexternalimage_response_compound_1));
	communicationexternalimage_response_compound_t* communicationexternalimage_response_compound_2 = communicationexternalimage_response_compound_parseFromJSON(jsoncommunicationexternalimage_response_compound_1);
	cJSON* jsoncommunicationexternalimage_response_compound_2 = communicationexternalimage_response_compound_convertToJSON(communicationexternalimage_response_compound_2);
	printf("repeating communicationexternalimage_response_compound:\n%s\n", cJSON_Print(jsoncommunicationexternalimage_response_compound_2));
}

int main() {
  test_communicationexternalimage_response_compound(1);
  test_communicationexternalimage_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationexternalimage_response_compound_MAIN
#endif // communicationexternalimage_response_compound_TEST
