#ifndef billingentityexternal_autocomplete_element_response_TEST
#define billingentityexternal_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityexternal_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityexternal_autocomplete_element_response.h"
billingentityexternal_autocomplete_element_response_t* instantiate_billingentityexternal_autocomplete_element_response(int include_optional);



billingentityexternal_autocomplete_element_response_t* instantiate_billingentityexternal_autocomplete_element_response(int include_optional) {
  billingentityexternal_autocomplete_element_response_t* billingentityexternal_autocomplete_element_response = NULL;
  if (include_optional) {
    billingentityexternal_autocomplete_element_response = billingentityexternal_autocomplete_element_response_create(
      83,
      "ACME Inc",
      true
    );
  } else {
    billingentityexternal_autocomplete_element_response = billingentityexternal_autocomplete_element_response_create(
      83,
      "ACME Inc",
      true
    );
  }

  return billingentityexternal_autocomplete_element_response;
}


#ifdef billingentityexternal_autocomplete_element_response_MAIN

void test_billingentityexternal_autocomplete_element_response(int include_optional) {
    billingentityexternal_autocomplete_element_response_t* billingentityexternal_autocomplete_element_response_1 = instantiate_billingentityexternal_autocomplete_element_response(include_optional);

	cJSON* jsonbillingentityexternal_autocomplete_element_response_1 = billingentityexternal_autocomplete_element_response_convertToJSON(billingentityexternal_autocomplete_element_response_1);
	printf("billingentityexternal_autocomplete_element_response :\n%s\n", cJSON_Print(jsonbillingentityexternal_autocomplete_element_response_1));
	billingentityexternal_autocomplete_element_response_t* billingentityexternal_autocomplete_element_response_2 = billingentityexternal_autocomplete_element_response_parseFromJSON(jsonbillingentityexternal_autocomplete_element_response_1);
	cJSON* jsonbillingentityexternal_autocomplete_element_response_2 = billingentityexternal_autocomplete_element_response_convertToJSON(billingentityexternal_autocomplete_element_response_2);
	printf("repeating billingentityexternal_autocomplete_element_response:\n%s\n", cJSON_Print(jsonbillingentityexternal_autocomplete_element_response_2));
}

int main() {
  test_billingentityexternal_autocomplete_element_response(1);
  test_billingentityexternal_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityexternal_autocomplete_element_response_MAIN
#endif // billingentityexternal_autocomplete_element_response_TEST
