#ifndef ezsignsignature_response_TEST
#define ezsignsignature_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsignature_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsignature_response.h"
ezsignsignature_response_t* instantiate_ezsignsignature_response(int include_optional);



ezsignsignature_response_t* instantiate_ezsignsignature_response(int include_optional) {
  ezsignsignature_response_t* ezsignsignature_response = NULL;
  if (include_optional) {
    ezsignsignature_response = ezsignsignature_response_create(
      49,
      20,
      1,
      200,
      300,
      1,
      ezmax_api_definition_ezsignsignature_response__"Name",
      97
    );
  } else {
    ezsignsignature_response = ezsignsignature_response_create(
      49,
      20,
      1,
      200,
      300,
      1,
      ezmax_api_definition_ezsignsignature_response__"Name",
      97
    );
  }

  return ezsignsignature_response;
}


#ifdef ezsignsignature_response_MAIN

void test_ezsignsignature_response(int include_optional) {
    ezsignsignature_response_t* ezsignsignature_response_1 = instantiate_ezsignsignature_response(include_optional);

	cJSON* jsonezsignsignature_response_1 = ezsignsignature_response_convertToJSON(ezsignsignature_response_1);
	printf("ezsignsignature_response :\n%s\n", cJSON_Print(jsonezsignsignature_response_1));
	ezsignsignature_response_t* ezsignsignature_response_2 = ezsignsignature_response_parseFromJSON(jsonezsignsignature_response_1);
	cJSON* jsonezsignsignature_response_2 = ezsignsignature_response_convertToJSON(ezsignsignature_response_2);
	printf("repeating ezsignsignature_response:\n%s\n", cJSON_Print(jsonezsignsignature_response_2));
}

int main() {
  test_ezsignsignature_response(1);
  test_ezsignsignature_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsignature_response_MAIN
#endif // ezsignsignature_response_TEST
