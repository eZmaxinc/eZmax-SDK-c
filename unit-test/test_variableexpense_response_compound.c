#ifndef variableexpense_response_compound_TEST
#define variableexpense_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_response_compound.h"
variableexpense_response_compound_t* instantiate_variableexpense_response_compound(int include_optional);

#include "test_multilingual_variableexpense_description.c"


variableexpense_response_compound_t* instantiate_variableexpense_response_compound(int include_optional) {
  variableexpense_response_compound_t* variableexpense_response_compound = NULL;
  if (include_optional) {
    variableexpense_response_compound = variableexpense_response_compound_create(
      2,
      "EQBUR",
       // false, not to have infinite recursion
      instantiate_multilingual_variableexpense_description(0),
      ezmax_api_definition__full_variableexpense_response_compound__"Yes",
      true
    );
  } else {
    variableexpense_response_compound = variableexpense_response_compound_create(
      2,
      "EQBUR",
      NULL,
      ezmax_api_definition__full_variableexpense_response_compound__"Yes",
      true
    );
  }

  return variableexpense_response_compound;
}


#ifdef variableexpense_response_compound_MAIN

void test_variableexpense_response_compound(int include_optional) {
    variableexpense_response_compound_t* variableexpense_response_compound_1 = instantiate_variableexpense_response_compound(include_optional);

	cJSON* jsonvariableexpense_response_compound_1 = variableexpense_response_compound_convertToJSON(variableexpense_response_compound_1);
	printf("variableexpense_response_compound :\n%s\n", cJSON_Print(jsonvariableexpense_response_compound_1));
	variableexpense_response_compound_t* variableexpense_response_compound_2 = variableexpense_response_compound_parseFromJSON(jsonvariableexpense_response_compound_1);
	cJSON* jsonvariableexpense_response_compound_2 = variableexpense_response_compound_convertToJSON(variableexpense_response_compound_2);
	printf("repeating variableexpense_response_compound:\n%s\n", cJSON_Print(jsonvariableexpense_response_compound_2));
}

int main() {
  test_variableexpense_response_compound(1);
  test_variableexpense_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_response_compound_MAIN
#endif // variableexpense_response_compound_TEST
