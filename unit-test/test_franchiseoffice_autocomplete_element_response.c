#ifndef franchiseoffice_autocomplete_element_response_TEST
#define franchiseoffice_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchiseoffice_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchiseoffice_autocomplete_element_response.h"
franchiseoffice_autocomplete_element_response_t* instantiate_franchiseoffice_autocomplete_element_response(int include_optional);



franchiseoffice_autocomplete_element_response_t* instantiate_franchiseoffice_autocomplete_element_response(int include_optional) {
  franchiseoffice_autocomplete_element_response_t* franchiseoffice_autocomplete_element_response = NULL;
  if (include_optional) {
    franchiseoffice_autocomplete_element_response = franchiseoffice_autocomplete_element_response_create(
      "Default",
      50,
      true
    );
  } else {
    franchiseoffice_autocomplete_element_response = franchiseoffice_autocomplete_element_response_create(
      "Default",
      50,
      true
    );
  }

  return franchiseoffice_autocomplete_element_response;
}


#ifdef franchiseoffice_autocomplete_element_response_MAIN

void test_franchiseoffice_autocomplete_element_response(int include_optional) {
    franchiseoffice_autocomplete_element_response_t* franchiseoffice_autocomplete_element_response_1 = instantiate_franchiseoffice_autocomplete_element_response(include_optional);

	cJSON* jsonfranchiseoffice_autocomplete_element_response_1 = franchiseoffice_autocomplete_element_response_convertToJSON(franchiseoffice_autocomplete_element_response_1);
	printf("franchiseoffice_autocomplete_element_response :\n%s\n", cJSON_Print(jsonfranchiseoffice_autocomplete_element_response_1));
	franchiseoffice_autocomplete_element_response_t* franchiseoffice_autocomplete_element_response_2 = franchiseoffice_autocomplete_element_response_parseFromJSON(jsonfranchiseoffice_autocomplete_element_response_1);
	cJSON* jsonfranchiseoffice_autocomplete_element_response_2 = franchiseoffice_autocomplete_element_response_convertToJSON(franchiseoffice_autocomplete_element_response_2);
	printf("repeating franchiseoffice_autocomplete_element_response:\n%s\n", cJSON_Print(jsonfranchiseoffice_autocomplete_element_response_2));
}

int main() {
  test_franchiseoffice_autocomplete_element_response(1);
  test_franchiseoffice_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchiseoffice_autocomplete_element_response_MAIN
#endif // franchiseoffice_autocomplete_element_response_TEST
