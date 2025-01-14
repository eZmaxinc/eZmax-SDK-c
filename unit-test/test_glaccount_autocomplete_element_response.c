#ifndef glaccount_autocomplete_element_response_TEST
#define glaccount_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define glaccount_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/glaccount_autocomplete_element_response.h"
glaccount_autocomplete_element_response_t* instantiate_glaccount_autocomplete_element_response(int include_optional);



glaccount_autocomplete_element_response_t* instantiate_glaccount_autocomplete_element_response(int include_optional) {
  glaccount_autocomplete_element_response_t* glaccount_autocomplete_element_response = NULL;
  if (include_optional) {
    glaccount_autocomplete_element_response = glaccount_autocomplete_element_response_create(
      35,
      2000,
      "Supplies income",
      true
    );
  } else {
    glaccount_autocomplete_element_response = glaccount_autocomplete_element_response_create(
      35,
      2000,
      "Supplies income",
      true
    );
  }

  return glaccount_autocomplete_element_response;
}


#ifdef glaccount_autocomplete_element_response_MAIN

void test_glaccount_autocomplete_element_response(int include_optional) {
    glaccount_autocomplete_element_response_t* glaccount_autocomplete_element_response_1 = instantiate_glaccount_autocomplete_element_response(include_optional);

	cJSON* jsonglaccount_autocomplete_element_response_1 = glaccount_autocomplete_element_response_convertToJSON(glaccount_autocomplete_element_response_1);
	printf("glaccount_autocomplete_element_response :\n%s\n", cJSON_Print(jsonglaccount_autocomplete_element_response_1));
	glaccount_autocomplete_element_response_t* glaccount_autocomplete_element_response_2 = glaccount_autocomplete_element_response_parseFromJSON(jsonglaccount_autocomplete_element_response_1);
	cJSON* jsonglaccount_autocomplete_element_response_2 = glaccount_autocomplete_element_response_convertToJSON(glaccount_autocomplete_element_response_2);
	printf("repeating glaccount_autocomplete_element_response:\n%s\n", cJSON_Print(jsonglaccount_autocomplete_element_response_2));
}

int main() {
  test_glaccount_autocomplete_element_response(1);
  test_glaccount_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // glaccount_autocomplete_element_response_MAIN
#endif // glaccount_autocomplete_element_response_TEST
