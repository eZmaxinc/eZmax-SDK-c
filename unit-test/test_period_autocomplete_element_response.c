#ifndef period_autocomplete_element_response_TEST
#define period_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define period_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/period_autocomplete_element_response.h"
period_autocomplete_element_response_t* instantiate_period_autocomplete_element_response(int include_optional);



period_autocomplete_element_response_t* instantiate_period_autocomplete_element_response(int include_optional) {
  period_autocomplete_element_response_t* period_autocomplete_element_response = NULL;
  if (include_optional) {
    period_autocomplete_element_response = period_autocomplete_element_response_create(
      "2202-12",
      21,
      true
    );
  } else {
    period_autocomplete_element_response = period_autocomplete_element_response_create(
      "2202-12",
      21,
      true
    );
  }

  return period_autocomplete_element_response;
}


#ifdef period_autocomplete_element_response_MAIN

void test_period_autocomplete_element_response(int include_optional) {
    period_autocomplete_element_response_t* period_autocomplete_element_response_1 = instantiate_period_autocomplete_element_response(include_optional);

	cJSON* jsonperiod_autocomplete_element_response_1 = period_autocomplete_element_response_convertToJSON(period_autocomplete_element_response_1);
	printf("period_autocomplete_element_response :\n%s\n", cJSON_Print(jsonperiod_autocomplete_element_response_1));
	period_autocomplete_element_response_t* period_autocomplete_element_response_2 = period_autocomplete_element_response_parseFromJSON(jsonperiod_autocomplete_element_response_1);
	cJSON* jsonperiod_autocomplete_element_response_2 = period_autocomplete_element_response_convertToJSON(period_autocomplete_element_response_2);
	printf("repeating period_autocomplete_element_response:\n%s\n", cJSON_Print(jsonperiod_autocomplete_element_response_2));
}

int main() {
  test_period_autocomplete_element_response(1);
  test_period_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // period_autocomplete_element_response_MAIN
#endif // period_autocomplete_element_response_TEST
