#ifndef ezsignelementdependency_response_compound_TEST
#define ezsignelementdependency_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignelementdependency_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignelementdependency_response_compound.h"
ezsignelementdependency_response_compound_t* instantiate_ezsignelementdependency_response_compound(int include_optional);



ezsignelementdependency_response_compound_t* instantiate_ezsignelementdependency_response_compound(int include_optional) {
  ezsignelementdependency_response_compound_t* ezsignelementdependency_response_compound = NULL;
  if (include_optional) {
    ezsignelementdependency_response_compound = ezsignelementdependency_response_compound_create(
      89,
      32,
      49,
      32,
      26,
      ezmax_api_definition__full_ezsignelementdependency_response_compound__"Value",
      false,
      ezmax_api_definition__full_ezsignelementdependency_response_compound__"eq",
      "Montreal"
    );
  } else {
    ezsignelementdependency_response_compound = ezsignelementdependency_response_compound_create(
      89,
      32,
      49,
      32,
      26,
      ezmax_api_definition__full_ezsignelementdependency_response_compound__"Value",
      false,
      ezmax_api_definition__full_ezsignelementdependency_response_compound__"eq",
      "Montreal"
    );
  }

  return ezsignelementdependency_response_compound;
}


#ifdef ezsignelementdependency_response_compound_MAIN

void test_ezsignelementdependency_response_compound(int include_optional) {
    ezsignelementdependency_response_compound_t* ezsignelementdependency_response_compound_1 = instantiate_ezsignelementdependency_response_compound(include_optional);

	cJSON* jsonezsignelementdependency_response_compound_1 = ezsignelementdependency_response_compound_convertToJSON(ezsignelementdependency_response_compound_1);
	printf("ezsignelementdependency_response_compound :\n%s\n", cJSON_Print(jsonezsignelementdependency_response_compound_1));
	ezsignelementdependency_response_compound_t* ezsignelementdependency_response_compound_2 = ezsignelementdependency_response_compound_parseFromJSON(jsonezsignelementdependency_response_compound_1);
	cJSON* jsonezsignelementdependency_response_compound_2 = ezsignelementdependency_response_compound_convertToJSON(ezsignelementdependency_response_compound_2);
	printf("repeating ezsignelementdependency_response_compound:\n%s\n", cJSON_Print(jsonezsignelementdependency_response_compound_2));
}

int main() {
  test_ezsignelementdependency_response_compound(1);
  test_ezsignelementdependency_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignelementdependency_response_compound_MAIN
#endif // ezsignelementdependency_response_compound_TEST
