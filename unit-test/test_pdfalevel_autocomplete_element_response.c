#ifndef pdfalevel_autocomplete_element_response_TEST
#define pdfalevel_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdfalevel_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdfalevel_autocomplete_element_response.h"
pdfalevel_autocomplete_element_response_t* instantiate_pdfalevel_autocomplete_element_response(int include_optional);



pdfalevel_autocomplete_element_response_t* instantiate_pdfalevel_autocomplete_element_response(int include_optional) {
  pdfalevel_autocomplete_element_response_t* pdfalevel_autocomplete_element_response = NULL;
  if (include_optional) {
    pdfalevel_autocomplete_element_response = pdfalevel_autocomplete_element_response_create(
      102,
      "PDF/A-1a",
      true
    );
  } else {
    pdfalevel_autocomplete_element_response = pdfalevel_autocomplete_element_response_create(
      102,
      "PDF/A-1a",
      true
    );
  }

  return pdfalevel_autocomplete_element_response;
}


#ifdef pdfalevel_autocomplete_element_response_MAIN

void test_pdfalevel_autocomplete_element_response(int include_optional) {
    pdfalevel_autocomplete_element_response_t* pdfalevel_autocomplete_element_response_1 = instantiate_pdfalevel_autocomplete_element_response(include_optional);

	cJSON* jsonpdfalevel_autocomplete_element_response_1 = pdfalevel_autocomplete_element_response_convertToJSON(pdfalevel_autocomplete_element_response_1);
	printf("pdfalevel_autocomplete_element_response :\n%s\n", cJSON_Print(jsonpdfalevel_autocomplete_element_response_1));
	pdfalevel_autocomplete_element_response_t* pdfalevel_autocomplete_element_response_2 = pdfalevel_autocomplete_element_response_parseFromJSON(jsonpdfalevel_autocomplete_element_response_1);
	cJSON* jsonpdfalevel_autocomplete_element_response_2 = pdfalevel_autocomplete_element_response_convertToJSON(pdfalevel_autocomplete_element_response_2);
	printf("repeating pdfalevel_autocomplete_element_response:\n%s\n", cJSON_Print(jsonpdfalevel_autocomplete_element_response_2));
}

int main() {
  test_pdfalevel_autocomplete_element_response(1);
  test_pdfalevel_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdfalevel_autocomplete_element_response_MAIN
#endif // pdfalevel_autocomplete_element_response_TEST
