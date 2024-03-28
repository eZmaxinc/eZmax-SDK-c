#ifndef ezsigntemplateglobal_autocomplete_element_response_TEST
#define ezsigntemplateglobal_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateglobal_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateglobal_autocomplete_element_response.h"
ezsigntemplateglobal_autocomplete_element_response_t* instantiate_ezsigntemplateglobal_autocomplete_element_response(int include_optional);



ezsigntemplateglobal_autocomplete_element_response_t* instantiate_ezsigntemplateglobal_autocomplete_element_response(int include_optional) {
  ezsigntemplateglobal_autocomplete_element_response_t* ezsigntemplateglobal_autocomplete_element_response = NULL;
  if (include_optional) {
    ezsigntemplateglobal_autocomplete_element_response = ezsigntemplateglobal_autocomplete_element_response_create(
      36,
      "Standard Contract",
      true
    );
  } else {
    ezsigntemplateglobal_autocomplete_element_response = ezsigntemplateglobal_autocomplete_element_response_create(
      36,
      "Standard Contract",
      true
    );
  }

  return ezsigntemplateglobal_autocomplete_element_response;
}


#ifdef ezsigntemplateglobal_autocomplete_element_response_MAIN

void test_ezsigntemplateglobal_autocomplete_element_response(int include_optional) {
    ezsigntemplateglobal_autocomplete_element_response_t* ezsigntemplateglobal_autocomplete_element_response_1 = instantiate_ezsigntemplateglobal_autocomplete_element_response(include_optional);

	cJSON* jsonezsigntemplateglobal_autocomplete_element_response_1 = ezsigntemplateglobal_autocomplete_element_response_convertToJSON(ezsigntemplateglobal_autocomplete_element_response_1);
	printf("ezsigntemplateglobal_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezsigntemplateglobal_autocomplete_element_response_1));
	ezsigntemplateglobal_autocomplete_element_response_t* ezsigntemplateglobal_autocomplete_element_response_2 = ezsigntemplateglobal_autocomplete_element_response_parseFromJSON(jsonezsigntemplateglobal_autocomplete_element_response_1);
	cJSON* jsonezsigntemplateglobal_autocomplete_element_response_2 = ezsigntemplateglobal_autocomplete_element_response_convertToJSON(ezsigntemplateglobal_autocomplete_element_response_2);
	printf("repeating ezsigntemplateglobal_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezsigntemplateglobal_autocomplete_element_response_2));
}

int main() {
  test_ezsigntemplateglobal_autocomplete_element_response(1);
  test_ezsigntemplateglobal_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateglobal_autocomplete_element_response_MAIN
#endif // ezsigntemplateglobal_autocomplete_element_response_TEST
