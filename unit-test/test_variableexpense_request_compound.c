#ifndef variableexpense_request_compound_TEST
#define variableexpense_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_request_compound.h"
variableexpense_request_compound_t* instantiate_variableexpense_request_compound(int include_optional);

#include "test_multilingual_variableexpense_description.c"


variableexpense_request_compound_t* instantiate_variableexpense_request_compound(int include_optional) {
  variableexpense_request_compound_t* variableexpense_request_compound = NULL;
  if (include_optional) {
    variableexpense_request_compound = variableexpense_request_compound_create(
      2,
      "EQBUR",
       // false, not to have infinite recursion
      instantiate_multilingual_variableexpense_description(0),
      ezmax_api_definition__full_variableexpense_request_compound__"Yes",
      true
    );
  } else {
    variableexpense_request_compound = variableexpense_request_compound_create(
      2,
      "EQBUR",
      NULL,
      ezmax_api_definition__full_variableexpense_request_compound__"Yes",
      true
    );
  }

  return variableexpense_request_compound;
}


#ifdef variableexpense_request_compound_MAIN

void test_variableexpense_request_compound(int include_optional) {
    variableexpense_request_compound_t* variableexpense_request_compound_1 = instantiate_variableexpense_request_compound(include_optional);

	cJSON* jsonvariableexpense_request_compound_1 = variableexpense_request_compound_convertToJSON(variableexpense_request_compound_1);
	printf("variableexpense_request_compound :\n%s\n", cJSON_Print(jsonvariableexpense_request_compound_1));
	variableexpense_request_compound_t* variableexpense_request_compound_2 = variableexpense_request_compound_parseFromJSON(jsonvariableexpense_request_compound_1);
	cJSON* jsonvariableexpense_request_compound_2 = variableexpense_request_compound_convertToJSON(variableexpense_request_compound_2);
	printf("repeating variableexpense_request_compound:\n%s\n", cJSON_Print(jsonvariableexpense_request_compound_2));
}

int main() {
  test_variableexpense_request_compound(1);
  test_variableexpense_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_request_compound_MAIN
#endif // variableexpense_request_compound_TEST
