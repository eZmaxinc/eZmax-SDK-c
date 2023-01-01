#ifndef communicationimage_response_compound_TEST
#define communicationimage_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define communicationimage_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/communicationimage_response_compound.h"
communicationimage_response_compound_t* instantiate_communicationimage_response_compound(int include_optional);



communicationimage_response_compound_t* instantiate_communicationimage_response_compound(int include_optional) {
  communicationimage_response_compound_t* communicationimage_response_compound = NULL;
  if (include_optional) {
    communicationimage_response_compound = communicationimage_response_compound_create(
      164,
      164,
      "Picture.jpg"
    );
  } else {
    communicationimage_response_compound = communicationimage_response_compound_create(
      164,
      164,
      "Picture.jpg"
    );
  }

  return communicationimage_response_compound;
}


#ifdef communicationimage_response_compound_MAIN

void test_communicationimage_response_compound(int include_optional) {
    communicationimage_response_compound_t* communicationimage_response_compound_1 = instantiate_communicationimage_response_compound(include_optional);

	cJSON* jsoncommunicationimage_response_compound_1 = communicationimage_response_compound_convertToJSON(communicationimage_response_compound_1);
	printf("communicationimage_response_compound :\n%s\n", cJSON_Print(jsoncommunicationimage_response_compound_1));
	communicationimage_response_compound_t* communicationimage_response_compound_2 = communicationimage_response_compound_parseFromJSON(jsoncommunicationimage_response_compound_1);
	cJSON* jsoncommunicationimage_response_compound_2 = communicationimage_response_compound_convertToJSON(communicationimage_response_compound_2);
	printf("repeating communicationimage_response_compound:\n%s\n", cJSON_Print(jsoncommunicationimage_response_compound_2));
}

int main() {
  test_communicationimage_response_compound(1);
  test_communicationimage_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // communicationimage_response_compound_MAIN
#endif // communicationimage_response_compound_TEST
