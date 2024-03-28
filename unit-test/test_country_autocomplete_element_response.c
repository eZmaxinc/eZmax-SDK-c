#ifndef country_autocomplete_element_response_TEST
#define country_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_autocomplete_element_response.h"
country_autocomplete_element_response_t* instantiate_country_autocomplete_element_response(int include_optional);



country_autocomplete_element_response_t* instantiate_country_autocomplete_element_response(int include_optional) {
  country_autocomplete_element_response_t* country_autocomplete_element_response = NULL;
  if (include_optional) {
    country_autocomplete_element_response = country_autocomplete_element_response_create(
      1,
      "Canada",
      "CA",
      true
    );
  } else {
    country_autocomplete_element_response = country_autocomplete_element_response_create(
      1,
      "Canada",
      "CA",
      true
    );
  }

  return country_autocomplete_element_response;
}


#ifdef country_autocomplete_element_response_MAIN

void test_country_autocomplete_element_response(int include_optional) {
    country_autocomplete_element_response_t* country_autocomplete_element_response_1 = instantiate_country_autocomplete_element_response(include_optional);

	cJSON* jsoncountry_autocomplete_element_response_1 = country_autocomplete_element_response_convertToJSON(country_autocomplete_element_response_1);
	printf("country_autocomplete_element_response :\n%s\n", cJSON_Print(jsoncountry_autocomplete_element_response_1));
	country_autocomplete_element_response_t* country_autocomplete_element_response_2 = country_autocomplete_element_response_parseFromJSON(jsoncountry_autocomplete_element_response_1);
	cJSON* jsoncountry_autocomplete_element_response_2 = country_autocomplete_element_response_convertToJSON(country_autocomplete_element_response_2);
	printf("repeating country_autocomplete_element_response:\n%s\n", cJSON_Print(jsoncountry_autocomplete_element_response_2));
}

int main() {
  test_country_autocomplete_element_response(1);
  test_country_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_autocomplete_element_response_MAIN
#endif // country_autocomplete_element_response_TEST
