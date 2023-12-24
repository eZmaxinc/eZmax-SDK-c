#ifndef ezsignsigningreason_autocomplete_element_response_TEST
#define ezsignsigningreason_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigningreason_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigningreason_autocomplete_element_response.h"
ezsignsigningreason_autocomplete_element_response_t* instantiate_ezsignsigningreason_autocomplete_element_response(int include_optional);



ezsignsigningreason_autocomplete_element_response_t* instantiate_ezsignsigningreason_autocomplete_element_response(int include_optional) {
  ezsignsigningreason_autocomplete_element_response_t* ezsignsigningreason_autocomplete_element_response = NULL;
  if (include_optional) {
    ezsignsigningreason_autocomplete_element_response = ezsignsigningreason_autocomplete_element_response_create(
      194,
      "I approve this document",
      true
    );
  } else {
    ezsignsigningreason_autocomplete_element_response = ezsignsigningreason_autocomplete_element_response_create(
      194,
      "I approve this document",
      true
    );
  }

  return ezsignsigningreason_autocomplete_element_response;
}


#ifdef ezsignsigningreason_autocomplete_element_response_MAIN

void test_ezsignsigningreason_autocomplete_element_response(int include_optional) {
    ezsignsigningreason_autocomplete_element_response_t* ezsignsigningreason_autocomplete_element_response_1 = instantiate_ezsignsigningreason_autocomplete_element_response(include_optional);

	cJSON* jsonezsignsigningreason_autocomplete_element_response_1 = ezsignsigningreason_autocomplete_element_response_convertToJSON(ezsignsigningreason_autocomplete_element_response_1);
	printf("ezsignsigningreason_autocomplete_element_response :\n%s\n", cJSON_Print(jsonezsignsigningreason_autocomplete_element_response_1));
	ezsignsigningreason_autocomplete_element_response_t* ezsignsigningreason_autocomplete_element_response_2 = ezsignsigningreason_autocomplete_element_response_parseFromJSON(jsonezsignsigningreason_autocomplete_element_response_1);
	cJSON* jsonezsignsigningreason_autocomplete_element_response_2 = ezsignsigningreason_autocomplete_element_response_convertToJSON(ezsignsigningreason_autocomplete_element_response_2);
	printf("repeating ezsignsigningreason_autocomplete_element_response:\n%s\n", cJSON_Print(jsonezsignsigningreason_autocomplete_element_response_2));
}

int main() {
  test_ezsignsigningreason_autocomplete_element_response(1);
  test_ezsignsigningreason_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigningreason_autocomplete_element_response_MAIN
#endif // ezsignsigningreason_autocomplete_element_response_TEST
