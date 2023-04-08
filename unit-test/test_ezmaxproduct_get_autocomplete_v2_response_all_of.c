#ifndef ezmaxproduct_get_autocomplete_v2_response_all_of_TEST
#define ezmaxproduct_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxproduct_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxproduct_get_autocomplete_v2_response_all_of.h"
ezmaxproduct_get_autocomplete_v2_response_all_of_t* instantiate_ezmaxproduct_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_ezmaxproduct_get_autocomplete_v2_response_m_payload.c"


ezmaxproduct_get_autocomplete_v2_response_all_of_t* instantiate_ezmaxproduct_get_autocomplete_v2_response_all_of(int include_optional) {
  ezmaxproduct_get_autocomplete_v2_response_all_of_t* ezmaxproduct_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    ezmaxproduct_get_autocomplete_v2_response_all_of = ezmaxproduct_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_ezmaxproduct_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    ezmaxproduct_get_autocomplete_v2_response_all_of = ezmaxproduct_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return ezmaxproduct_get_autocomplete_v2_response_all_of;
}


#ifdef ezmaxproduct_get_autocomplete_v2_response_all_of_MAIN

void test_ezmaxproduct_get_autocomplete_v2_response_all_of(int include_optional) {
    ezmaxproduct_get_autocomplete_v2_response_all_of_t* ezmaxproduct_get_autocomplete_v2_response_all_of_1 = instantiate_ezmaxproduct_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonezmaxproduct_get_autocomplete_v2_response_all_of_1 = ezmaxproduct_get_autocomplete_v2_response_all_of_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_all_of_1);
	printf("ezmaxproduct_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonezmaxproduct_get_autocomplete_v2_response_all_of_1));
	ezmaxproduct_get_autocomplete_v2_response_all_of_t* ezmaxproduct_get_autocomplete_v2_response_all_of_2 = ezmaxproduct_get_autocomplete_v2_response_all_of_parseFromJSON(jsonezmaxproduct_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonezmaxproduct_get_autocomplete_v2_response_all_of_2 = ezmaxproduct_get_autocomplete_v2_response_all_of_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_all_of_2);
	printf("repeating ezmaxproduct_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonezmaxproduct_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_ezmaxproduct_get_autocomplete_v2_response_all_of(1);
  test_ezmaxproduct_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxproduct_get_autocomplete_v2_response_all_of_MAIN
#endif // ezmaxproduct_get_autocomplete_v2_response_all_of_TEST
