#ifndef billingentityinternal_autocomplete_element_response_TEST
#define billingentityinternal_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternal_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternal_autocomplete_element_response.h"
billingentityinternal_autocomplete_element_response_t* instantiate_billingentityinternal_autocomplete_element_response(int include_optional);



billingentityinternal_autocomplete_element_response_t* instantiate_billingentityinternal_autocomplete_element_response(int include_optional) {
  billingentityinternal_autocomplete_element_response_t* billingentityinternal_autocomplete_element_response = NULL;
  if (include_optional) {
    billingentityinternal_autocomplete_element_response = billingentityinternal_autocomplete_element_response_create(
      "Default",
      1,
      true
    );
  } else {
    billingentityinternal_autocomplete_element_response = billingentityinternal_autocomplete_element_response_create(
      "Default",
      1,
      true
    );
  }

  return billingentityinternal_autocomplete_element_response;
}


#ifdef billingentityinternal_autocomplete_element_response_MAIN

void test_billingentityinternal_autocomplete_element_response(int include_optional) {
    billingentityinternal_autocomplete_element_response_t* billingentityinternal_autocomplete_element_response_1 = instantiate_billingentityinternal_autocomplete_element_response(include_optional);

	cJSON* jsonbillingentityinternal_autocomplete_element_response_1 = billingentityinternal_autocomplete_element_response_convertToJSON(billingentityinternal_autocomplete_element_response_1);
	printf("billingentityinternal_autocomplete_element_response :\n%s\n", cJSON_Print(jsonbillingentityinternal_autocomplete_element_response_1));
	billingentityinternal_autocomplete_element_response_t* billingentityinternal_autocomplete_element_response_2 = billingentityinternal_autocomplete_element_response_parseFromJSON(jsonbillingentityinternal_autocomplete_element_response_1);
	cJSON* jsonbillingentityinternal_autocomplete_element_response_2 = billingentityinternal_autocomplete_element_response_convertToJSON(billingentityinternal_autocomplete_element_response_2);
	printf("repeating billingentityinternal_autocomplete_element_response:\n%s\n", cJSON_Print(jsonbillingentityinternal_autocomplete_element_response_2));
}

int main() {
  test_billingentityinternal_autocomplete_element_response(1);
  test_billingentityinternal_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternal_autocomplete_element_response_MAIN
#endif // billingentityinternal_autocomplete_element_response_TEST
