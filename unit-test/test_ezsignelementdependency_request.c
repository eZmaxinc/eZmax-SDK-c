#ifndef ezsignelementdependency_request_TEST
#define ezsignelementdependency_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignelementdependency_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignelementdependency_request.h"
ezsignelementdependency_request_t* instantiate_ezsignelementdependency_request(int include_optional);



ezsignelementdependency_request_t* instantiate_ezsignelementdependency_request(int include_optional) {
  ezsignelementdependency_request_t* ezsignelementdependency_request = NULL;
  if (include_optional) {
    ezsignelementdependency_request = ezsignelementdependency_request_create(
      89,
      32,
      26,
      "Allergies",
      "Peanuts",
      ezmax_api_definition__full_ezsignelementdependency_request__"Value",
      false,
      ezmax_api_definition__full_ezsignelementdependency_request__"eq",
      "Montreal"
    );
  } else {
    ezsignelementdependency_request = ezsignelementdependency_request_create(
      89,
      32,
      26,
      "Allergies",
      "Peanuts",
      ezmax_api_definition__full_ezsignelementdependency_request__"Value",
      false,
      ezmax_api_definition__full_ezsignelementdependency_request__"eq",
      "Montreal"
    );
  }

  return ezsignelementdependency_request;
}


#ifdef ezsignelementdependency_request_MAIN

void test_ezsignelementdependency_request(int include_optional) {
    ezsignelementdependency_request_t* ezsignelementdependency_request_1 = instantiate_ezsignelementdependency_request(include_optional);

	cJSON* jsonezsignelementdependency_request_1 = ezsignelementdependency_request_convertToJSON(ezsignelementdependency_request_1);
	printf("ezsignelementdependency_request :\n%s\n", cJSON_Print(jsonezsignelementdependency_request_1));
	ezsignelementdependency_request_t* ezsignelementdependency_request_2 = ezsignelementdependency_request_parseFromJSON(jsonezsignelementdependency_request_1);
	cJSON* jsonezsignelementdependency_request_2 = ezsignelementdependency_request_convertToJSON(ezsignelementdependency_request_2);
	printf("repeating ezsignelementdependency_request:\n%s\n", cJSON_Print(jsonezsignelementdependency_request_2));
}

int main() {
  test_ezsignelementdependency_request(1);
  test_ezsignelementdependency_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignelementdependency_request_MAIN
#endif // ezsignelementdependency_request_TEST
