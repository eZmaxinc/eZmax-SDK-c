#ifndef variableexpense_get_autocomplete_v2_response_all_of_TEST
#define variableexpense_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_get_autocomplete_v2_response_all_of.h"
variableexpense_get_autocomplete_v2_response_all_of_t* instantiate_variableexpense_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_variableexpense_get_autocomplete_v2_response_m_payload.c"


variableexpense_get_autocomplete_v2_response_all_of_t* instantiate_variableexpense_get_autocomplete_v2_response_all_of(int include_optional) {
  variableexpense_get_autocomplete_v2_response_all_of_t* variableexpense_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    variableexpense_get_autocomplete_v2_response_all_of = variableexpense_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_variableexpense_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    variableexpense_get_autocomplete_v2_response_all_of = variableexpense_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return variableexpense_get_autocomplete_v2_response_all_of;
}


#ifdef variableexpense_get_autocomplete_v2_response_all_of_MAIN

void test_variableexpense_get_autocomplete_v2_response_all_of(int include_optional) {
    variableexpense_get_autocomplete_v2_response_all_of_t* variableexpense_get_autocomplete_v2_response_all_of_1 = instantiate_variableexpense_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonvariableexpense_get_autocomplete_v2_response_all_of_1 = variableexpense_get_autocomplete_v2_response_all_of_convertToJSON(variableexpense_get_autocomplete_v2_response_all_of_1);
	printf("variableexpense_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonvariableexpense_get_autocomplete_v2_response_all_of_1));
	variableexpense_get_autocomplete_v2_response_all_of_t* variableexpense_get_autocomplete_v2_response_all_of_2 = variableexpense_get_autocomplete_v2_response_all_of_parseFromJSON(jsonvariableexpense_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonvariableexpense_get_autocomplete_v2_response_all_of_2 = variableexpense_get_autocomplete_v2_response_all_of_convertToJSON(variableexpense_get_autocomplete_v2_response_all_of_2);
	printf("repeating variableexpense_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonvariableexpense_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_variableexpense_get_autocomplete_v2_response_all_of(1);
  test_variableexpense_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_get_autocomplete_v2_response_all_of_MAIN
#endif // variableexpense_get_autocomplete_v2_response_all_of_TEST
