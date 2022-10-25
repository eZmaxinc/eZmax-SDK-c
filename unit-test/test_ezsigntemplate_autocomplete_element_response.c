#ifndef ezsigntemplate_autocomplete_element_response_TEST
#define ezsigntemplate_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplate_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplate_autocomplete_element_response.h"
ezsigntemplate_autocomplete_element_response_t* instantiate_ezsigntemplate_autocomplete_element_response(int include_optional);



ezsigntemplate_autocomplete_element_response_t* instantiate_ezsigntemplate_autocomplete_element_response(int include_optional) {
  ezsigntemplate_autocomplete_element_response_t* ezsigntemplate_autocomplete_element_response = NULL;
  if (include_optional) {
    ezsigntemplate_autocomplete_element_response = ezsigntemplate_autocomplete_element_response_create(
      ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__User,
      "Standard Contract",
      36,
      true
    );
  } else {
    ezsigntemplate_autocomplete_element_response = ezsigntemplate_autocomplete_element_response_create(
      ezmax_api_definition__full_ezsigntemplate_autocomplete_element_response__User,
      "Standard Contract",
      36,
      true
    );
  }

  return ezsigntemplate_autocomplete_element_response;
}


#ifdef ezsigntemplate_autocomplete_element_response_MAIN

void test_ezsigntemplate_autocomplete_element_response(int include_optional) {
    ezsigntemplate_autocomplete_element_response_t* ezsigntemplate_autocomplete_element_response_1 = instantiate_ezsigntemplate_autocomplete_element_response(include_optional);

	cJSON* jsonezsigntemplate_autocomplete_element_response_1 = ezsigntemplate_autocomplete_element_response_convertToJSON(ezsigntemplate_autocomplete_element_response_1);
	printf("ezsigntemplate_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezsigntemplate_autocomplete_element_response_1));
	ezsigntemplate_autocomplete_element_response_t* ezsigntemplate_autocomplete_element_response_2 = ezsigntemplate_autocomplete_element_response_parseFromJSON(jsonezsigntemplate_autocomplete_element_response_1);
	cJSON* jsonezsigntemplate_autocomplete_element_response_2 = ezsigntemplate_autocomplete_element_response_convertToJSON(ezsigntemplate_autocomplete_element_response_2);
	printf("repeating ezsigntemplate_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezsigntemplate_autocomplete_element_response_2));
}

int main() {
  test_ezsigntemplate_autocomplete_element_response(1);
  test_ezsigntemplate_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplate_autocomplete_element_response_MAIN
#endif // ezsigntemplate_autocomplete_element_response_TEST
