#ifndef ezmaxinvoicing_autocomplete_element_response_TEST
#define ezmaxinvoicing_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicing_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicing_autocomplete_element_response.h"
ezmaxinvoicing_autocomplete_element_response_t* instantiate_ezmaxinvoicing_autocomplete_element_response(int include_optional);



ezmaxinvoicing_autocomplete_element_response_t* instantiate_ezmaxinvoicing_autocomplete_element_response(int include_optional) {
  ezmaxinvoicing_autocomplete_element_response_t* ezmaxinvoicing_autocomplete_element_response = NULL;
  if (include_optional) {
    ezmaxinvoicing_autocomplete_element_response = ezmaxinvoicing_autocomplete_element_response_create(
      "2022-01",
      28,
      true
    );
  } else {
    ezmaxinvoicing_autocomplete_element_response = ezmaxinvoicing_autocomplete_element_response_create(
      "2022-01",
      28,
      true
    );
  }

  return ezmaxinvoicing_autocomplete_element_response;
}


#ifdef ezmaxinvoicing_autocomplete_element_response_MAIN

void test_ezmaxinvoicing_autocomplete_element_response(int include_optional) {
    ezmaxinvoicing_autocomplete_element_response_t* ezmaxinvoicing_autocomplete_element_response_1 = instantiate_ezmaxinvoicing_autocomplete_element_response(include_optional);

	cJSON* jsonezmaxinvoicing_autocomplete_element_response_1 = ezmaxinvoicing_autocomplete_element_response_convertToJSON(ezmaxinvoicing_autocomplete_element_response_1);
	printf("ezmaxinvoicing_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezmaxinvoicing_autocomplete_element_response_1));
	ezmaxinvoicing_autocomplete_element_response_t* ezmaxinvoicing_autocomplete_element_response_2 = ezmaxinvoicing_autocomplete_element_response_parseFromJSON(jsonezmaxinvoicing_autocomplete_element_response_1);
	cJSON* jsonezmaxinvoicing_autocomplete_element_response_2 = ezmaxinvoicing_autocomplete_element_response_convertToJSON(ezmaxinvoicing_autocomplete_element_response_2);
	printf("repeating ezmaxinvoicing_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezmaxinvoicing_autocomplete_element_response_2));
}

int main() {
  test_ezmaxinvoicing_autocomplete_element_response(1);
  test_ezmaxinvoicing_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicing_autocomplete_element_response_MAIN
#endif // ezmaxinvoicing_autocomplete_element_response_TEST
