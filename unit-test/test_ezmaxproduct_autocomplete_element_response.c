#ifndef ezmaxproduct_autocomplete_element_response_TEST
#define ezmaxproduct_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxproduct_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxproduct_autocomplete_element_response.h"
ezmaxproduct_autocomplete_element_response_t* instantiate_ezmaxproduct_autocomplete_element_response(int include_optional);



ezmaxproduct_autocomplete_element_response_t* instantiate_ezmaxproduct_autocomplete_element_response(int include_optional) {
  ezmaxproduct_autocomplete_element_response_t* ezmaxproduct_autocomplete_element_response = NULL;
  if (include_optional) {
    ezmaxproduct_autocomplete_element_response = ezmaxproduct_autocomplete_element_response_create(
      172,
      "eZmax (License)",
      true
    );
  } else {
    ezmaxproduct_autocomplete_element_response = ezmaxproduct_autocomplete_element_response_create(
      172,
      "eZmax (License)",
      true
    );
  }

  return ezmaxproduct_autocomplete_element_response;
}


#ifdef ezmaxproduct_autocomplete_element_response_MAIN

void test_ezmaxproduct_autocomplete_element_response(int include_optional) {
    ezmaxproduct_autocomplete_element_response_t* ezmaxproduct_autocomplete_element_response_1 = instantiate_ezmaxproduct_autocomplete_element_response(include_optional);

	cJSON* jsonezmaxproduct_autocomplete_element_response_1 = ezmaxproduct_autocomplete_element_response_convertToJSON(ezmaxproduct_autocomplete_element_response_1);
	printf("ezmaxproduct_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezmaxproduct_autocomplete_element_response_1));
	ezmaxproduct_autocomplete_element_response_t* ezmaxproduct_autocomplete_element_response_2 = ezmaxproduct_autocomplete_element_response_parseFromJSON(jsonezmaxproduct_autocomplete_element_response_1);
	cJSON* jsonezmaxproduct_autocomplete_element_response_2 = ezmaxproduct_autocomplete_element_response_convertToJSON(ezmaxproduct_autocomplete_element_response_2);
	printf("repeating ezmaxproduct_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezmaxproduct_autocomplete_element_response_2));
}

int main() {
  test_ezmaxproduct_autocomplete_element_response(1);
  test_ezmaxproduct_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxproduct_autocomplete_element_response_MAIN
#endif // ezmaxproduct_autocomplete_element_response_TEST
