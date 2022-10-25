#ifndef taxassignment_autocomplete_element_response_TEST
#define taxassignment_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define taxassignment_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/taxassignment_autocomplete_element_response.h"
taxassignment_autocomplete_element_response_t* instantiate_taxassignment_autocomplete_element_response(int include_optional);



taxassignment_autocomplete_element_response_t* instantiate_taxassignment_autocomplete_element_response(int include_optional) {
  taxassignment_autocomplete_element_response_t* taxassignment_autocomplete_element_response = NULL;
  if (include_optional) {
    taxassignment_autocomplete_element_response = taxassignment_autocomplete_element_response_create(
      "Default",
      1,
      true
    );
  } else {
    taxassignment_autocomplete_element_response = taxassignment_autocomplete_element_response_create(
      "Default",
      1,
      true
    );
  }

  return taxassignment_autocomplete_element_response;
}


#ifdef taxassignment_autocomplete_element_response_MAIN

void test_taxassignment_autocomplete_element_response(int include_optional) {
    taxassignment_autocomplete_element_response_t* taxassignment_autocomplete_element_response_1 = instantiate_taxassignment_autocomplete_element_response(include_optional);

	cJSON* jsontaxassignment_autocomplete_element_response_1 = taxassignment_autocomplete_element_response_convertToJSON(taxassignment_autocomplete_element_response_1);
	printf("taxassignment_autocomplete_element_response :\n%s\n", cJSON_Print(jsontaxassignment_autocomplete_element_response_1));
	taxassignment_autocomplete_element_response_t* taxassignment_autocomplete_element_response_2 = taxassignment_autocomplete_element_response_parseFromJSON(jsontaxassignment_autocomplete_element_response_1);
	cJSON* jsontaxassignment_autocomplete_element_response_2 = taxassignment_autocomplete_element_response_convertToJSON(taxassignment_autocomplete_element_response_2);
	printf("repeating taxassignment_autocomplete_element_response:\n%s\n", cJSON_Print(jsontaxassignment_autocomplete_element_response_2));
}

int main() {
  test_taxassignment_autocomplete_element_response(1);
  test_taxassignment_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // taxassignment_autocomplete_element_response_MAIN
#endif // taxassignment_autocomplete_element_response_TEST
