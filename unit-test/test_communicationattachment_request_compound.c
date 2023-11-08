#ifndef communicationattachment_request_compound_TEST
#define communicationattachment_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationattachment_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationattachment_request_compound.h"
communicationattachment_request_compound_t* instantiate_communicationattachment_request_compound(int include_optional);



communicationattachment_request_compound_t* instantiate_communicationattachment_request_compound(int include_optional) {
  communicationattachment_request_compound_t* communicationattachment_request_compound = NULL;
  if (include_optional) {
    communicationattachment_request_compound = communicationattachment_request_compound_create(
      203,
      1,
      1,
      1
    );
  } else {
    communicationattachment_request_compound = communicationattachment_request_compound_create(
      203,
      1,
      1,
      1
    );
  }

  return communicationattachment_request_compound;
}


#ifdef communicationattachment_request_compound_MAIN

void test_communicationattachment_request_compound(int include_optional) {
    communicationattachment_request_compound_t* communicationattachment_request_compound_1 = instantiate_communicationattachment_request_compound(include_optional);

	cJSON* jsoncommunicationattachment_request_compound_1 = communicationattachment_request_compound_convertToJSON(communicationattachment_request_compound_1);
	printf("communicationattachment_request_compound :\n%s\n", cJSON_Print(jsoncommunicationattachment_request_compound_1));
	communicationattachment_request_compound_t* communicationattachment_request_compound_2 = communicationattachment_request_compound_parseFromJSON(jsoncommunicationattachment_request_compound_1);
	cJSON* jsoncommunicationattachment_request_compound_2 = communicationattachment_request_compound_convertToJSON(communicationattachment_request_compound_2);
	printf("repeating communicationattachment_request_compound:\n%s\n", cJSON_Print(jsoncommunicationattachment_request_compound_2));
}

int main() {
  test_communicationattachment_request_compound(1);
  test_communicationattachment_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationattachment_request_compound_MAIN
#endif // communicationattachment_request_compound_TEST
