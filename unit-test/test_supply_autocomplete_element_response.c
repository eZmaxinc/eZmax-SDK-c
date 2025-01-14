#ifndef supply_autocomplete_element_response_TEST
#define supply_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define supply_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/supply_autocomplete_element_response.h"
supply_autocomplete_element_response_t* instantiate_supply_autocomplete_element_response(int include_optional);



supply_autocomplete_element_response_t* instantiate_supply_autocomplete_element_response(int include_optional) {
  supply_autocomplete_element_response_t* supply_autocomplete_element_response = NULL;
  if (include_optional) {
    supply_autocomplete_element_response = supply_autocomplete_element_response_create(
      85,
      "Letter paper package",
      true
    );
  } else {
    supply_autocomplete_element_response = supply_autocomplete_element_response_create(
      85,
      "Letter paper package",
      true
    );
  }

  return supply_autocomplete_element_response;
}


#ifdef supply_autocomplete_element_response_MAIN

void test_supply_autocomplete_element_response(int include_optional) {
    supply_autocomplete_element_response_t* supply_autocomplete_element_response_1 = instantiate_supply_autocomplete_element_response(include_optional);

	cJSON* jsonsupply_autocomplete_element_response_1 = supply_autocomplete_element_response_convertToJSON(supply_autocomplete_element_response_1);
	printf("supply_autocomplete_element_response :\n%s\n", cJSON_Print(jsonsupply_autocomplete_element_response_1));
	supply_autocomplete_element_response_t* supply_autocomplete_element_response_2 = supply_autocomplete_element_response_parseFromJSON(jsonsupply_autocomplete_element_response_1);
	cJSON* jsonsupply_autocomplete_element_response_2 = supply_autocomplete_element_response_convertToJSON(supply_autocomplete_element_response_2);
	printf("repeating supply_autocomplete_element_response:\n%s\n", cJSON_Print(jsonsupply_autocomplete_element_response_2));
}

int main() {
  test_supply_autocomplete_element_response(1);
  test_supply_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // supply_autocomplete_element_response_MAIN
#endif // supply_autocomplete_element_response_TEST
