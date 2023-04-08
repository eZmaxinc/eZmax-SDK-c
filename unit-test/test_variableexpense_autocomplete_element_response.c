#ifndef variableexpense_autocomplete_element_response_TEST
#define variableexpense_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_autocomplete_element_response.h"
variableexpense_autocomplete_element_response_t* instantiate_variableexpense_autocomplete_element_response(int include_optional);



variableexpense_autocomplete_element_response_t* instantiate_variableexpense_autocomplete_element_response(int include_optional) {
  variableexpense_autocomplete_element_response_t* variableexpense_autocomplete_element_response = NULL;
  if (include_optional) {
    variableexpense_autocomplete_element_response = variableexpense_autocomplete_element_response_create(
      "Équipements de bureau",
      2,
      true
    );
  } else {
    variableexpense_autocomplete_element_response = variableexpense_autocomplete_element_response_create(
      "Équipements de bureau",
      2,
      true
    );
  }

  return variableexpense_autocomplete_element_response;
}


#ifdef variableexpense_autocomplete_element_response_MAIN

void test_variableexpense_autocomplete_element_response(int include_optional) {
    variableexpense_autocomplete_element_response_t* variableexpense_autocomplete_element_response_1 = instantiate_variableexpense_autocomplete_element_response(include_optional);

	cJSON* jsonvariableexpense_autocomplete_element_response_1 = variableexpense_autocomplete_element_response_convertToJSON(variableexpense_autocomplete_element_response_1);
	printf("variableexpense_autocomplete_element_response :\n%s\n", cJSON_Print(jsonvariableexpense_autocomplete_element_response_1));
	variableexpense_autocomplete_element_response_t* variableexpense_autocomplete_element_response_2 = variableexpense_autocomplete_element_response_parseFromJSON(jsonvariableexpense_autocomplete_element_response_1);
	cJSON* jsonvariableexpense_autocomplete_element_response_2 = variableexpense_autocomplete_element_response_convertToJSON(variableexpense_autocomplete_element_response_2);
	printf("repeating variableexpense_autocomplete_element_response:\n%s\n", cJSON_Print(jsonvariableexpense_autocomplete_element_response_2));
}

int main() {
  test_variableexpense_autocomplete_element_response(1);
  test_variableexpense_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_autocomplete_element_response_MAIN
#endif // variableexpense_autocomplete_element_response_TEST
