#ifndef ezsigntsarequirement_autocomplete_element_response_TEST
#define ezsigntsarequirement_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntsarequirement_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntsarequirement_autocomplete_element_response.h"
ezsigntsarequirement_autocomplete_element_response_t* instantiate_ezsigntsarequirement_autocomplete_element_response(int include_optional);



ezsigntsarequirement_autocomplete_element_response_t* instantiate_ezsigntsarequirement_autocomplete_element_response(int include_optional) {
  ezsigntsarequirement_autocomplete_element_response_t* ezsigntsarequirement_autocomplete_element_response = NULL;
  if (include_optional) {
    ezsigntsarequirement_autocomplete_element_response = ezsigntsarequirement_autocomplete_element_response_create(
      "No",
      1,
      true,
      1
    );
  } else {
    ezsigntsarequirement_autocomplete_element_response = ezsigntsarequirement_autocomplete_element_response_create(
      "No",
      1,
      true,
      1
    );
  }

  return ezsigntsarequirement_autocomplete_element_response;
}


#ifdef ezsigntsarequirement_autocomplete_element_response_MAIN

void test_ezsigntsarequirement_autocomplete_element_response(int include_optional) {
    ezsigntsarequirement_autocomplete_element_response_t* ezsigntsarequirement_autocomplete_element_response_1 = instantiate_ezsigntsarequirement_autocomplete_element_response(include_optional);

	cJSON* jsonezsigntsarequirement_autocomplete_element_response_1 = ezsigntsarequirement_autocomplete_element_response_convertToJSON(ezsigntsarequirement_autocomplete_element_response_1);
	printf("ezsigntsarequirement_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezsigntsarequirement_autocomplete_element_response_1));
	ezsigntsarequirement_autocomplete_element_response_t* ezsigntsarequirement_autocomplete_element_response_2 = ezsigntsarequirement_autocomplete_element_response_parseFromJSON(jsonezsigntsarequirement_autocomplete_element_response_1);
	cJSON* jsonezsigntsarequirement_autocomplete_element_response_2 = ezsigntsarequirement_autocomplete_element_response_convertToJSON(ezsigntsarequirement_autocomplete_element_response_2);
	printf("repeating ezsigntsarequirement_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezsigntsarequirement_autocomplete_element_response_2));
}

int main() {
  test_ezsigntsarequirement_autocomplete_element_response(1);
  test_ezsigntsarequirement_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntsarequirement_autocomplete_element_response_MAIN
#endif // ezsigntsarequirement_autocomplete_element_response_TEST
