#ifndef branding_autocomplete_element_response_TEST
#define branding_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define branding_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/branding_autocomplete_element_response.h"
branding_autocomplete_element_response_t* instantiate_branding_autocomplete_element_response(int include_optional);



branding_autocomplete_element_response_t* instantiate_branding_autocomplete_element_response(int include_optional) {
  branding_autocomplete_element_response_t* branding_autocomplete_element_response = NULL;
  if (include_optional) {
    branding_autocomplete_element_response = branding_autocomplete_element_response_create(
      "Company X",
      78,
      true
    );
  } else {
    branding_autocomplete_element_response = branding_autocomplete_element_response_create(
      "Company X",
      78,
      true
    );
  }

  return branding_autocomplete_element_response;
}


#ifdef branding_autocomplete_element_response_MAIN

void test_branding_autocomplete_element_response(int include_optional) {
    branding_autocomplete_element_response_t* branding_autocomplete_element_response_1 = instantiate_branding_autocomplete_element_response(include_optional);

	cJSON* jsonbranding_autocomplete_element_response_1 = branding_autocomplete_element_response_convertToJSON(branding_autocomplete_element_response_1);
	printf("branding_autocomplete_element_response :\n%s\n", cJSON_Print(jsonbranding_autocomplete_element_response_1));
	branding_autocomplete_element_response_t* branding_autocomplete_element_response_2 = branding_autocomplete_element_response_parseFromJSON(jsonbranding_autocomplete_element_response_1);
	cJSON* jsonbranding_autocomplete_element_response_2 = branding_autocomplete_element_response_convertToJSON(branding_autocomplete_element_response_2);
	printf("repeating branding_autocomplete_element_response:\n%s\n", cJSON_Print(jsonbranding_autocomplete_element_response_2));
}

int main() {
  test_branding_autocomplete_element_response(1);
  test_branding_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // branding_autocomplete_element_response_MAIN
#endif // branding_autocomplete_element_response_TEST
