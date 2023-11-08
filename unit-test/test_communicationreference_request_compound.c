#ifndef communicationreference_request_compound_TEST
#define communicationreference_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationreference_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationreference_request_compound.h"
communicationreference_request_compound_t* instantiate_communicationreference_request_compound(int include_optional);



communicationreference_request_compound_t* instantiate_communicationreference_request_compound(int include_optional) {
  communicationreference_request_compound_t* communicationreference_request_compound = NULL;
  if (include_optional) {
    communicationreference_request_compound = communicationreference_request_compound_create(
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
    communicationreference_request_compound = communicationreference_request_compound_create(
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

  return communicationreference_request_compound;
}


#ifdef communicationreference_request_compound_MAIN

void test_communicationreference_request_compound(int include_optional) {
    communicationreference_request_compound_t* communicationreference_request_compound_1 = instantiate_communicationreference_request_compound(include_optional);

	cJSON* jsoncommunicationreference_request_compound_1 = communicationreference_request_compound_convertToJSON(communicationreference_request_compound_1);
	printf("communicationreference_request_compound :\n%s\n", cJSON_Print(jsoncommunicationreference_request_compound_1));
	communicationreference_request_compound_t* communicationreference_request_compound_2 = communicationreference_request_compound_parseFromJSON(jsoncommunicationreference_request_compound_1);
	cJSON* jsoncommunicationreference_request_compound_2 = communicationreference_request_compound_convertToJSON(communicationreference_request_compound_2);
	printf("repeating communicationreference_request_compound:\n%s\n", cJSON_Print(jsoncommunicationreference_request_compound_2));
}

int main() {
  test_communicationreference_request_compound(1);
  test_communicationreference_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationreference_request_compound_MAIN
#endif // communicationreference_request_compound_TEST
