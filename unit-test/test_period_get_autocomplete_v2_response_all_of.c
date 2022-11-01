#ifndef period_get_autocomplete_v2_response_all_of_TEST
#define period_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define period_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/period_get_autocomplete_v2_response_all_of.h"
period_get_autocomplete_v2_response_all_of_t* instantiate_period_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_period_get_autocomplete_v2_response_m_payload.c"


period_get_autocomplete_v2_response_all_of_t* instantiate_period_get_autocomplete_v2_response_all_of(int include_optional) {
  period_get_autocomplete_v2_response_all_of_t* period_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    period_get_autocomplete_v2_response_all_of = period_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_period_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    period_get_autocomplete_v2_response_all_of = period_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return period_get_autocomplete_v2_response_all_of;
}


#ifdef period_get_autocomplete_v2_response_all_of_MAIN

void test_period_get_autocomplete_v2_response_all_of(int include_optional) {
    period_get_autocomplete_v2_response_all_of_t* period_get_autocomplete_v2_response_all_of_1 = instantiate_period_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonperiod_get_autocomplete_v2_response_all_of_1 = period_get_autocomplete_v2_response_all_of_convertToJSON(period_get_autocomplete_v2_response_all_of_1);
	printf("period_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonperiod_get_autocomplete_v2_response_all_of_1));
	period_get_autocomplete_v2_response_all_of_t* period_get_autocomplete_v2_response_all_of_2 = period_get_autocomplete_v2_response_all_of_parseFromJSON(jsonperiod_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonperiod_get_autocomplete_v2_response_all_of_2 = period_get_autocomplete_v2_response_all_of_convertToJSON(period_get_autocomplete_v2_response_all_of_2);
	printf("repeating period_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonperiod_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_period_get_autocomplete_v2_response_all_of(1);
  test_period_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // period_get_autocomplete_v2_response_all_of_MAIN
#endif // period_get_autocomplete_v2_response_all_of_TEST
