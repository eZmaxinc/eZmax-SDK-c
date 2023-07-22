#ifndef billingentityinternalproduct_request_TEST
#define billingentityinternalproduct_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternalproduct_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternalproduct_request.h"
billingentityinternalproduct_request_t* instantiate_billingentityinternalproduct_request(int include_optional);



billingentityinternalproduct_request_t* instantiate_billingentityinternalproduct_request(int include_optional) {
  billingentityinternalproduct_request_t* billingentityinternalproduct_request = NULL;
  if (include_optional) {
    billingentityinternalproduct_request = billingentityinternalproduct_request_create(
      254,
      172,
      83
    );
  } else {
    billingentityinternalproduct_request = billingentityinternalproduct_request_create(
      254,
      172,
      83
    );
  }

  return billingentityinternalproduct_request;
}


#ifdef billingentityinternalproduct_request_MAIN

void test_billingentityinternalproduct_request(int include_optional) {
    billingentityinternalproduct_request_t* billingentityinternalproduct_request_1 = instantiate_billingentityinternalproduct_request(include_optional);

	cJSON* jsonbillingentityinternalproduct_request_1 = billingentityinternalproduct_request_convertToJSON(billingentityinternalproduct_request_1);
	printf("billingentityinternalproduct_request :\n%s\n", cJSON_Print(jsonbillingentityinternalproduct_request_1));
	billingentityinternalproduct_request_t* billingentityinternalproduct_request_2 = billingentityinternalproduct_request_parseFromJSON(jsonbillingentityinternalproduct_request_1);
	cJSON* jsonbillingentityinternalproduct_request_2 = billingentityinternalproduct_request_convertToJSON(billingentityinternalproduct_request_2);
	printf("repeating billingentityinternalproduct_request:\n%s\n", cJSON_Print(jsonbillingentityinternalproduct_request_2));
}

int main() {
  test_billingentityinternalproduct_request(1);
  test_billingentityinternalproduct_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternalproduct_request_MAIN
#endif // billingentityinternalproduct_request_TEST
