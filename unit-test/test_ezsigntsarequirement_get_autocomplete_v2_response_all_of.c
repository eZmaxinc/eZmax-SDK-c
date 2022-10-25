#ifndef ezsigntsarequirement_get_autocomplete_v2_response_all_of_TEST
#define ezsigntsarequirement_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntsarequirement_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntsarequirement_get_autocomplete_v2_response_all_of.h"
ezsigntsarequirement_get_autocomplete_v2_response_all_of_t* instantiate_ezsigntsarequirement_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_ezsigntsarequirement_get_autocomplete_v2_response_m_payload.c"


ezsigntsarequirement_get_autocomplete_v2_response_all_of_t* instantiate_ezsigntsarequirement_get_autocomplete_v2_response_all_of(int include_optional) {
  ezsigntsarequirement_get_autocomplete_v2_response_all_of_t* ezsigntsarequirement_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    ezsigntsarequirement_get_autocomplete_v2_response_all_of = ezsigntsarequirement_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezsigntsarequirement_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    ezsigntsarequirement_get_autocomplete_v2_response_all_of = ezsigntsarequirement_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return ezsigntsarequirement_get_autocomplete_v2_response_all_of;
}


#ifdef ezsigntsarequirement_get_autocomplete_v2_response_all_of_MAIN

void test_ezsigntsarequirement_get_autocomplete_v2_response_all_of(int include_optional) {
    ezsigntsarequirement_get_autocomplete_v2_response_all_of_t* ezsigntsarequirement_get_autocomplete_v2_response_all_of_1 = instantiate_ezsigntsarequirement_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonezsigntsarequirement_get_autocomplete_v2_response_all_of_1 = ezsigntsarequirement_get_autocomplete_v2_response_all_of_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_all_of_1);
	printf("ezsigntsarequirement_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonezsigntsarequirement_get_autocomplete_v2_response_all_of_1));
	ezsigntsarequirement_get_autocomplete_v2_response_all_of_t* ezsigntsarequirement_get_autocomplete_v2_response_all_of_2 = ezsigntsarequirement_get_autocomplete_v2_response_all_of_parseFromJSON(jsonezsigntsarequirement_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonezsigntsarequirement_get_autocomplete_v2_response_all_of_2 = ezsigntsarequirement_get_autocomplete_v2_response_all_of_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_all_of_2);
	printf("repeating ezsigntsarequirement_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonezsigntsarequirement_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_ezsigntsarequirement_get_autocomplete_v2_response_all_of(1);
  test_ezsigntsarequirement_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntsarequirement_get_autocomplete_v2_response_all_of_MAIN
#endif // ezsigntsarequirement_get_autocomplete_v2_response_all_of_TEST
