#ifndef custom_autocomplete_element_disabled_response_TEST
#define custom_autocomplete_element_disabled_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_autocomplete_element_disabled_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_autocomplete_element_disabled_response.h"
custom_autocomplete_element_disabled_response_t* instantiate_custom_autocomplete_element_disabled_response(int include_optional);



custom_autocomplete_element_disabled_response_t* instantiate_custom_autocomplete_element_disabled_response(int include_optional) {
  custom_autocomplete_element_disabled_response_t* custom_autocomplete_element_disabled_response = NULL;
  if (include_optional) {
    custom_autocomplete_element_disabled_response = custom_autocomplete_element_disabled_response_create(
      1,
      "0",
      "0",
      "0",
      "0",
      1
    );
  } else {
    custom_autocomplete_element_disabled_response = custom_autocomplete_element_disabled_response_create(
      1,
      "0",
      "0",
      "0",
      "0",
      1
    );
  }

  return custom_autocomplete_element_disabled_response;
}


#ifdef custom_autocomplete_element_disabled_response_MAIN

void test_custom_autocomplete_element_disabled_response(int include_optional) {
    custom_autocomplete_element_disabled_response_t* custom_autocomplete_element_disabled_response_1 = instantiate_custom_autocomplete_element_disabled_response(include_optional);

	cJSON* jsoncustom_autocomplete_element_disabled_response_1 = custom_autocomplete_element_disabled_response_convertToJSON(custom_autocomplete_element_disabled_response_1);
	printf("custom_autocomplete_element_disabled_response :\n%s\n", cJSON_Print(jsoncustom_autocomplete_element_disabled_response_1));
	custom_autocomplete_element_disabled_response_t* custom_autocomplete_element_disabled_response_2 = custom_autocomplete_element_disabled_response_parseFromJSON(jsoncustom_autocomplete_element_disabled_response_1);
	cJSON* jsoncustom_autocomplete_element_disabled_response_2 = custom_autocomplete_element_disabled_response_convertToJSON(custom_autocomplete_element_disabled_response_2);
	printf("repeating custom_autocomplete_element_disabled_response:\n%s\n", cJSON_Print(jsoncustom_autocomplete_element_disabled_response_2));
}

int main() {
  test_custom_autocomplete_element_disabled_response(1);
  test_custom_autocomplete_element_disabled_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_autocomplete_element_disabled_response_MAIN
#endif // custom_autocomplete_element_disabled_response_TEST
