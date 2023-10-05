#ifndef ezsignelementdependency_response_TEST
#define ezsignelementdependency_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignelementdependency_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignelementdependency_response.h"
ezsignelementdependency_response_t* instantiate_ezsignelementdependency_response(int include_optional);



ezsignelementdependency_response_t* instantiate_ezsignelementdependency_response(int include_optional) {
  ezsignelementdependency_response_t* ezsignelementdependency_response = NULL;
  if (include_optional) {
    ezsignelementdependency_response = ezsignelementdependency_response_create(
      89,
      32,
      49,
      32,
      26,
      ezmax_api_definition__full_ezsignelementdependency_response__"Value",
      false,
      ezmax_api_definition__full_ezsignelementdependency_response__"eq",
      "Montreal"
    );
  } else {
    ezsignelementdependency_response = ezsignelementdependency_response_create(
      89,
      32,
      49,
      32,
      26,
      ezmax_api_definition__full_ezsignelementdependency_response__"Value",
      false,
      ezmax_api_definition__full_ezsignelementdependency_response__"eq",
      "Montreal"
    );
  }

  return ezsignelementdependency_response;
}


#ifdef ezsignelementdependency_response_MAIN

void test_ezsignelementdependency_response(int include_optional) {
    ezsignelementdependency_response_t* ezsignelementdependency_response_1 = instantiate_ezsignelementdependency_response(include_optional);

	cJSON* jsonezsignelementdependency_response_1 = ezsignelementdependency_response_convertToJSON(ezsignelementdependency_response_1);
	printf("ezsignelementdependency_response :\n%s\n", cJSON_Print(jsonezsignelementdependency_response_1));
	ezsignelementdependency_response_t* ezsignelementdependency_response_2 = ezsignelementdependency_response_parseFromJSON(jsonezsignelementdependency_response_1);
	cJSON* jsonezsignelementdependency_response_2 = ezsignelementdependency_response_convertToJSON(ezsignelementdependency_response_2);
	printf("repeating ezsignelementdependency_response:\n%s\n", cJSON_Print(jsonezsignelementdependency_response_2));
}

int main() {
  test_ezsignelementdependency_response(1);
  test_ezsignelementdependency_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignelementdependency_response_MAIN
#endif // ezsignelementdependency_response_TEST
