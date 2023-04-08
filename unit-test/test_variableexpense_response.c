#ifndef variableexpense_response_TEST
#define variableexpense_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_response.h"
variableexpense_response_t* instantiate_variableexpense_response(int include_optional);

#include "test_multilingual_variableexpense_description.c"


variableexpense_response_t* instantiate_variableexpense_response(int include_optional) {
  variableexpense_response_t* variableexpense_response = NULL;
  if (include_optional) {
    variableexpense_response = variableexpense_response_create(
      2,
      "EQBUR",
       // false, not to have infinite recursion
      instantiate_multilingual_variableexpense_description(0),
      ezmax_api_definition__full_variableexpense_response__"Yes",
      true
    );
  } else {
    variableexpense_response = variableexpense_response_create(
      2,
      "EQBUR",
      NULL,
      ezmax_api_definition__full_variableexpense_response__"Yes",
      true
    );
  }

  return variableexpense_response;
}


#ifdef variableexpense_response_MAIN

void test_variableexpense_response(int include_optional) {
    variableexpense_response_t* variableexpense_response_1 = instantiate_variableexpense_response(include_optional);

	cJSON* jsonvariableexpense_response_1 = variableexpense_response_convertToJSON(variableexpense_response_1);
	printf("variableexpense_response :\n%s\n", cJSON_Print(jsonvariableexpense_response_1));
	variableexpense_response_t* variableexpense_response_2 = variableexpense_response_parseFromJSON(jsonvariableexpense_response_1);
	cJSON* jsonvariableexpense_response_2 = variableexpense_response_convertToJSON(variableexpense_response_2);
	printf("repeating variableexpense_response:\n%s\n", cJSON_Print(jsonvariableexpense_response_2));
}

int main() {
  test_variableexpense_response(1);
  test_variableexpense_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_response_MAIN
#endif // variableexpense_response_TEST
