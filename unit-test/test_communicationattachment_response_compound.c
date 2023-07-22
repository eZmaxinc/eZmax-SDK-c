#ifndef communicationattachment_response_compound_TEST
#define communicationattachment_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationattachment_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationattachment_response_compound.h"
communicationattachment_response_compound_t* instantiate_communicationattachment_response_compound(int include_optional);



communicationattachment_response_compound_t* instantiate_communicationattachment_response_compound(int include_optional) {
  communicationattachment_response_compound_t* communicationattachment_response_compound = NULL;
  if (include_optional) {
    communicationattachment_response_compound = communicationattachment_response_compound_create(
      203,
      1,
      1,
      1,
      "File.pdf",
      "0"
    );
  } else {
    communicationattachment_response_compound = communicationattachment_response_compound_create(
      203,
      1,
      1,
      1,
      "File.pdf",
      "0"
    );
  }

  return communicationattachment_response_compound;
}


#ifdef communicationattachment_response_compound_MAIN

void test_communicationattachment_response_compound(int include_optional) {
    communicationattachment_response_compound_t* communicationattachment_response_compound_1 = instantiate_communicationattachment_response_compound(include_optional);

	cJSON* jsoncommunicationattachment_response_compound_1 = communicationattachment_response_compound_convertToJSON(communicationattachment_response_compound_1);
	printf("communicationattachment_response_compound :\n%s\n", cJSON_Print(jsoncommunicationattachment_response_compound_1));
	communicationattachment_response_compound_t* communicationattachment_response_compound_2 = communicationattachment_response_compound_parseFromJSON(jsoncommunicationattachment_response_compound_1);
	cJSON* jsoncommunicationattachment_response_compound_2 = communicationattachment_response_compound_convertToJSON(communicationattachment_response_compound_2);
	printf("repeating communicationattachment_response_compound:\n%s\n", cJSON_Print(jsoncommunicationattachment_response_compound_2));
}

int main() {
  test_communicationattachment_response_compound(1);
  test_communicationattachment_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationattachment_response_compound_MAIN
#endif // communicationattachment_response_compound_TEST
