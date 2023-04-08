#ifndef billingentityexternal_get_autocomplete_v2_response_all_of_TEST
#define billingentityexternal_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityexternal_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityexternal_get_autocomplete_v2_response_all_of.h"
billingentityexternal_get_autocomplete_v2_response_all_of_t* instantiate_billingentityexternal_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_billingentityexternal_get_autocomplete_v2_response_m_payload.c"


billingentityexternal_get_autocomplete_v2_response_all_of_t* instantiate_billingentityexternal_get_autocomplete_v2_response_all_of(int include_optional) {
  billingentityexternal_get_autocomplete_v2_response_all_of_t* billingentityexternal_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    billingentityexternal_get_autocomplete_v2_response_all_of = billingentityexternal_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_billingentityexternal_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    billingentityexternal_get_autocomplete_v2_response_all_of = billingentityexternal_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return billingentityexternal_get_autocomplete_v2_response_all_of;
}


#ifdef billingentityexternal_get_autocomplete_v2_response_all_of_MAIN

void test_billingentityexternal_get_autocomplete_v2_response_all_of(int include_optional) {
    billingentityexternal_get_autocomplete_v2_response_all_of_t* billingentityexternal_get_autocomplete_v2_response_all_of_1 = instantiate_billingentityexternal_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonbillingentityexternal_get_autocomplete_v2_response_all_of_1 = billingentityexternal_get_autocomplete_v2_response_all_of_convertToJSON(billingentityexternal_get_autocomplete_v2_response_all_of_1);
	printf("billingentityexternal_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonbillingentityexternal_get_autocomplete_v2_response_all_of_1));
	billingentityexternal_get_autocomplete_v2_response_all_of_t* billingentityexternal_get_autocomplete_v2_response_all_of_2 = billingentityexternal_get_autocomplete_v2_response_all_of_parseFromJSON(jsonbillingentityexternal_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonbillingentityexternal_get_autocomplete_v2_response_all_of_2 = billingentityexternal_get_autocomplete_v2_response_all_of_convertToJSON(billingentityexternal_get_autocomplete_v2_response_all_of_2);
	printf("repeating billingentityexternal_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonbillingentityexternal_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_billingentityexternal_get_autocomplete_v2_response_all_of(1);
  test_billingentityexternal_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityexternal_get_autocomplete_v2_response_all_of_MAIN
#endif // billingentityexternal_get_autocomplete_v2_response_all_of_TEST
