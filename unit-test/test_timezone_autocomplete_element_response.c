#ifndef timezone_autocomplete_element_response_TEST
#define timezone_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_autocomplete_element_response.h"
timezone_autocomplete_element_response_t* instantiate_timezone_autocomplete_element_response(int include_optional);



timezone_autocomplete_element_response_t* instantiate_timezone_autocomplete_element_response(int include_optional) {
  timezone_autocomplete_element_response_t* timezone_autocomplete_element_response = NULL;
  if (include_optional) {
    timezone_autocomplete_element_response = timezone_autocomplete_element_response_create(
      "Default",
      247,
      true
    );
  } else {
    timezone_autocomplete_element_response = timezone_autocomplete_element_response_create(
      "Default",
      247,
      true
    );
  }

  return timezone_autocomplete_element_response;
}


#ifdef timezone_autocomplete_element_response_MAIN

void test_timezone_autocomplete_element_response(int include_optional) {
    timezone_autocomplete_element_response_t* timezone_autocomplete_element_response_1 = instantiate_timezone_autocomplete_element_response(include_optional);

	cJSON* jsontimezone_autocomplete_element_response_1 = timezone_autocomplete_element_response_convertToJSON(timezone_autocomplete_element_response_1);
	printf("timezone_autocomplete_element_response :\n%s\n", cJSON_Print(jsontimezone_autocomplete_element_response_1));
	timezone_autocomplete_element_response_t* timezone_autocomplete_element_response_2 = timezone_autocomplete_element_response_parseFromJSON(jsontimezone_autocomplete_element_response_1);
	cJSON* jsontimezone_autocomplete_element_response_2 = timezone_autocomplete_element_response_convertToJSON(timezone_autocomplete_element_response_2);
	printf("repeating timezone_autocomplete_element_response:\n%s\n", cJSON_Print(jsontimezone_autocomplete_element_response_2));
}

int main() {
  test_timezone_autocomplete_element_response(1);
  test_timezone_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_autocomplete_element_response_MAIN
#endif // timezone_autocomplete_element_response_TEST
