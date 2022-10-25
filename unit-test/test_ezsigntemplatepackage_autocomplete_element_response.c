#ifndef ezsigntemplatepackage_autocomplete_element_response_TEST
#define ezsigntemplatepackage_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatepackage_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatepackage_autocomplete_element_response.h"
ezsigntemplatepackage_autocomplete_element_response_t* instantiate_ezsigntemplatepackage_autocomplete_element_response(int include_optional);



ezsigntemplatepackage_autocomplete_element_response_t* instantiate_ezsigntemplatepackage_autocomplete_element_response(int include_optional) {
  ezsigntemplatepackage_autocomplete_element_response_t* ezsigntemplatepackage_autocomplete_element_response = NULL;
  if (include_optional) {
    ezsigntemplatepackage_autocomplete_element_response = ezsigntemplatepackage_autocomplete_element_response_create(
      ezmax_api_definition__full_ezsigntemplatepackage_autocomplete_element_response__User,
      "Package for new clients",
      99,
      true,
      1
    );
  } else {
    ezsigntemplatepackage_autocomplete_element_response = ezsigntemplatepackage_autocomplete_element_response_create(
      ezmax_api_definition__full_ezsigntemplatepackage_autocomplete_element_response__User,
      "Package for new clients",
      99,
      true,
      1
    );
  }

  return ezsigntemplatepackage_autocomplete_element_response;
}


#ifdef ezsigntemplatepackage_autocomplete_element_response_MAIN

void test_ezsigntemplatepackage_autocomplete_element_response(int include_optional) {
    ezsigntemplatepackage_autocomplete_element_response_t* ezsigntemplatepackage_autocomplete_element_response_1 = instantiate_ezsigntemplatepackage_autocomplete_element_response(include_optional);

	cJSON* jsonezsigntemplatepackage_autocomplete_element_response_1 = ezsigntemplatepackage_autocomplete_element_response_convertToJSON(ezsigntemplatepackage_autocomplete_element_response_1);
	printf("ezsigntemplatepackage_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezsigntemplatepackage_autocomplete_element_response_1));
	ezsigntemplatepackage_autocomplete_element_response_t* ezsigntemplatepackage_autocomplete_element_response_2 = ezsigntemplatepackage_autocomplete_element_response_parseFromJSON(jsonezsigntemplatepackage_autocomplete_element_response_1);
	cJSON* jsonezsigntemplatepackage_autocomplete_element_response_2 = ezsigntemplatepackage_autocomplete_element_response_convertToJSON(ezsigntemplatepackage_autocomplete_element_response_2);
	printf("repeating ezsigntemplatepackage_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezsigntemplatepackage_autocomplete_element_response_2));
}

int main() {
  test_ezsigntemplatepackage_autocomplete_element_response(1);
  test_ezsigntemplatepackage_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatepackage_autocomplete_element_response_MAIN
#endif // ezsigntemplatepackage_autocomplete_element_response_TEST
