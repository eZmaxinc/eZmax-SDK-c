#ifndef franchisebroker_autocomplete_element_response_TEST
#define franchisebroker_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define franchisebroker_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/franchisebroker_autocomplete_element_response.h"
franchisebroker_autocomplete_element_response_t* instantiate_franchisebroker_autocomplete_element_response(int include_optional);



franchisebroker_autocomplete_element_response_t* instantiate_franchisebroker_autocomplete_element_response(int include_optional) {
  franchisebroker_autocomplete_element_response_t* franchisebroker_autocomplete_element_response = NULL;
  if (include_optional) {
    franchisebroker_autocomplete_element_response = franchisebroker_autocomplete_element_response_create(
      "Default",
      61,
      true
    );
  } else {
    franchisebroker_autocomplete_element_response = franchisebroker_autocomplete_element_response_create(
      "Default",
      61,
      true
    );
  }

  return franchisebroker_autocomplete_element_response;
}


#ifdef franchisebroker_autocomplete_element_response_MAIN

void test_franchisebroker_autocomplete_element_response(int include_optional) {
    franchisebroker_autocomplete_element_response_t* franchisebroker_autocomplete_element_response_1 = instantiate_franchisebroker_autocomplete_element_response(include_optional);

	cJSON* jsonfranchisebroker_autocomplete_element_response_1 = franchisebroker_autocomplete_element_response_convertToJSON(franchisebroker_autocomplete_element_response_1);
	printf("franchisebroker_autocomplete_element_response :\n%s\n", cJSON_Print(jsonfranchisebroker_autocomplete_element_response_1));
	franchisebroker_autocomplete_element_response_t* franchisebroker_autocomplete_element_response_2 = franchisebroker_autocomplete_element_response_parseFromJSON(jsonfranchisebroker_autocomplete_element_response_1);
	cJSON* jsonfranchisebroker_autocomplete_element_response_2 = franchisebroker_autocomplete_element_response_convertToJSON(franchisebroker_autocomplete_element_response_2);
	printf("repeating franchisebroker_autocomplete_element_response:\n%s\n", cJSON_Print(jsonfranchisebroker_autocomplete_element_response_2));
}

int main() {
  test_franchisebroker_autocomplete_element_response(1);
  test_franchisebroker_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // franchisebroker_autocomplete_element_response_MAIN
#endif // franchisebroker_autocomplete_element_response_TEST
