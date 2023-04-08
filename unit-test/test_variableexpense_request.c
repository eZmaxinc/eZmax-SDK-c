#ifndef variableexpense_request_TEST
#define variableexpense_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_request.h"
variableexpense_request_t* instantiate_variableexpense_request(int include_optional);

#include "test_multilingual_variableexpense_description.c"


variableexpense_request_t* instantiate_variableexpense_request(int include_optional) {
  variableexpense_request_t* variableexpense_request = NULL;
  if (include_optional) {
    variableexpense_request = variableexpense_request_create(
      2,
      "EQBUR",
       // false, not to have infinite recursion
      instantiate_multilingual_variableexpense_description(0),
      ezmax_api_definition__full_variableexpense_request__"Yes",
      true
    );
  } else {
    variableexpense_request = variableexpense_request_create(
      2,
      "EQBUR",
      NULL,
      ezmax_api_definition__full_variableexpense_request__"Yes",
      true
    );
  }

  return variableexpense_request;
}


#ifdef variableexpense_request_MAIN

void test_variableexpense_request(int include_optional) {
    variableexpense_request_t* variableexpense_request_1 = instantiate_variableexpense_request(include_optional);

	cJSON* jsonvariableexpense_request_1 = variableexpense_request_convertToJSON(variableexpense_request_1);
	printf("variableexpense_request :\n%s\n", cJSON_Print(jsonvariableexpense_request_1));
	variableexpense_request_t* variableexpense_request_2 = variableexpense_request_parseFromJSON(jsonvariableexpense_request_1);
	cJSON* jsonvariableexpense_request_2 = variableexpense_request_convertToJSON(variableexpense_request_2);
	printf("repeating variableexpense_request:\n%s\n", cJSON_Print(jsonvariableexpense_request_2));
}

int main() {
  test_variableexpense_request(1);
  test_variableexpense_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_request_MAIN
#endif // variableexpense_request_TEST
