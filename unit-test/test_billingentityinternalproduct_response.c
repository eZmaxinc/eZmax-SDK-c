#ifndef billingentityinternalproduct_response_TEST
#define billingentityinternalproduct_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternalproduct_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternalproduct_response.h"
billingentityinternalproduct_response_t* instantiate_billingentityinternalproduct_response(int include_optional);



billingentityinternalproduct_response_t* instantiate_billingentityinternalproduct_response(int include_optional) {
  billingentityinternalproduct_response_t* billingentityinternalproduct_response = NULL;
  if (include_optional) {
    billingentityinternalproduct_response = billingentityinternalproduct_response_create(
      254,
      1,
      "Default",
      172,
      "eZmax (License)",
      83,
      "ACME Inc"
    );
  } else {
    billingentityinternalproduct_response = billingentityinternalproduct_response_create(
      254,
      1,
      "Default",
      172,
      "eZmax (License)",
      83,
      "ACME Inc"
    );
  }

  return billingentityinternalproduct_response;
}


#ifdef billingentityinternalproduct_response_MAIN

void test_billingentityinternalproduct_response(int include_optional) {
    billingentityinternalproduct_response_t* billingentityinternalproduct_response_1 = instantiate_billingentityinternalproduct_response(include_optional);

	cJSON* jsonbillingentityinternalproduct_response_1 = billingentityinternalproduct_response_convertToJSON(billingentityinternalproduct_response_1);
	printf("billingentityinternalproduct_response :\n%s\n", cJSON_Print(jsonbillingentityinternalproduct_response_1));
	billingentityinternalproduct_response_t* billingentityinternalproduct_response_2 = billingentityinternalproduct_response_parseFromJSON(jsonbillingentityinternalproduct_response_1);
	cJSON* jsonbillingentityinternalproduct_response_2 = billingentityinternalproduct_response_convertToJSON(billingentityinternalproduct_response_2);
	printf("repeating billingentityinternalproduct_response:\n%s\n", cJSON_Print(jsonbillingentityinternalproduct_response_2));
}

int main() {
  test_billingentityinternalproduct_response(1);
  test_billingentityinternalproduct_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternalproduct_response_MAIN
#endif // billingentityinternalproduct_response_TEST
