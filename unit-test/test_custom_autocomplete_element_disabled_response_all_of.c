#ifndef custom_autocomplete_element_disabled_response_all_of_TEST
#define custom_autocomplete_element_disabled_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define custom_autocomplete_element_disabled_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/custom_autocomplete_element_disabled_response_all_of.h"
custom_autocomplete_element_disabled_response_all_of_t* instantiate_custom_autocomplete_element_disabled_response_all_of(int include_optional);



custom_autocomplete_element_disabled_response_all_of_t* instantiate_custom_autocomplete_element_disabled_response_all_of(int include_optional) {
  custom_autocomplete_element_disabled_response_all_of_t* custom_autocomplete_element_disabled_response_all_of = NULL;
  if (include_optional) {
    custom_autocomplete_element_disabled_response_all_of = custom_autocomplete_element_disabled_response_all_of_create(
      1
    );
  } else {
    custom_autocomplete_element_disabled_response_all_of = custom_autocomplete_element_disabled_response_all_of_create(
      1
    );
  }

  return custom_autocomplete_element_disabled_response_all_of;
}


#ifdef custom_autocomplete_element_disabled_response_all_of_MAIN

void test_custom_autocomplete_element_disabled_response_all_of(int include_optional) {
    custom_autocomplete_element_disabled_response_all_of_t* custom_autocomplete_element_disabled_response_all_of_1 = instantiate_custom_autocomplete_element_disabled_response_all_of(include_optional);

	cJSON* jsoncustom_autocomplete_element_disabled_response_all_of_1 = custom_autocomplete_element_disabled_response_all_of_convertToJSON(custom_autocomplete_element_disabled_response_all_of_1);
	printf("custom_autocomplete_element_disabled_response_all_of :\n%s\n", cJSON_Print(jsoncustom_autocomplete_element_disabled_response_all_of_1));
	custom_autocomplete_element_disabled_response_all_of_t* custom_autocomplete_element_disabled_response_all_of_2 = custom_autocomplete_element_disabled_response_all_of_parseFromJSON(jsoncustom_autocomplete_element_disabled_response_all_of_1);
	cJSON* jsoncustom_autocomplete_element_disabled_response_all_of_2 = custom_autocomplete_element_disabled_response_all_of_convertToJSON(custom_autocomplete_element_disabled_response_all_of_2);
	printf("repeating custom_autocomplete_element_disabled_response_all_of:\n%s\n", cJSON_Print(jsoncustom_autocomplete_element_disabled_response_all_of_2));
}

int main() {
  test_custom_autocomplete_element_disabled_response_all_of(1);
  test_custom_autocomplete_element_disabled_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // custom_autocomplete_element_disabled_response_all_of_MAIN
#endif // custom_autocomplete_element_disabled_response_all_of_TEST
