#ifndef ezsignelementdependency_request_compound_TEST
#define ezsignelementdependency_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignelementdependency_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignelementdependency_request_compound.h"
ezsignelementdependency_request_compound_t* instantiate_ezsignelementdependency_request_compound(int include_optional);



ezsignelementdependency_request_compound_t* instantiate_ezsignelementdependency_request_compound(int include_optional) {
  ezsignelementdependency_request_compound_t* ezsignelementdependency_request_compound = NULL;
  if (include_optional) {
    ezsignelementdependency_request_compound = ezsignelementdependency_request_compound_create(
      89,
      32,
      26,
      "Allergies",
      "Peanuts",
      ezmax_api_definition__full_ezsignelementdependency_request_compound__"Value",
      false,
      ezmax_api_definition__full_ezsignelementdependency_request_compound__"eq",
      "Montreal"
    );
  } else {
    ezsignelementdependency_request_compound = ezsignelementdependency_request_compound_create(
      89,
      32,
      26,
      "Allergies",
      "Peanuts",
      ezmax_api_definition__full_ezsignelementdependency_request_compound__"Value",
      false,
      ezmax_api_definition__full_ezsignelementdependency_request_compound__"eq",
      "Montreal"
    );
  }

  return ezsignelementdependency_request_compound;
}


#ifdef ezsignelementdependency_request_compound_MAIN

void test_ezsignelementdependency_request_compound(int include_optional) {
    ezsignelementdependency_request_compound_t* ezsignelementdependency_request_compound_1 = instantiate_ezsignelementdependency_request_compound(include_optional);

	cJSON* jsonezsignelementdependency_request_compound_1 = ezsignelementdependency_request_compound_convertToJSON(ezsignelementdependency_request_compound_1);
	printf("ezsignelementdependency_request_compound :\n%s\n", cJSON_Print(jsonezsignelementdependency_request_compound_1));
	ezsignelementdependency_request_compound_t* ezsignelementdependency_request_compound_2 = ezsignelementdependency_request_compound_parseFromJSON(jsonezsignelementdependency_request_compound_1);
	cJSON* jsonezsignelementdependency_request_compound_2 = ezsignelementdependency_request_compound_convertToJSON(ezsignelementdependency_request_compound_2);
	printf("repeating ezsignelementdependency_request_compound:\n%s\n", cJSON_Print(jsonezsignelementdependency_request_compound_2));
}

int main() {
  test_ezsignelementdependency_request_compound(1);
  test_ezsignelementdependency_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignelementdependency_request_compound_MAIN
#endif // ezsignelementdependency_request_compound_TEST