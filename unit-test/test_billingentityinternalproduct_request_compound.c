#ifndef billingentityinternalproduct_request_compound_TEST
#define billingentityinternalproduct_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternalproduct_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternalproduct_request_compound.h"
billingentityinternalproduct_request_compound_t* instantiate_billingentityinternalproduct_request_compound(int include_optional);



billingentityinternalproduct_request_compound_t* instantiate_billingentityinternalproduct_request_compound(int include_optional) {
  billingentityinternalproduct_request_compound_t* billingentityinternalproduct_request_compound = NULL;
  if (include_optional) {
    billingentityinternalproduct_request_compound = billingentityinternalproduct_request_compound_create(
      254,
      172,
      83
    );
  } else {
    billingentityinternalproduct_request_compound = billingentityinternalproduct_request_compound_create(
      254,
      172,
      83
    );
  }

  return billingentityinternalproduct_request_compound;
}


#ifdef billingentityinternalproduct_request_compound_MAIN

void test_billingentityinternalproduct_request_compound(int include_optional) {
    billingentityinternalproduct_request_compound_t* billingentityinternalproduct_request_compound_1 = instantiate_billingentityinternalproduct_request_compound(include_optional);

	cJSON* jsonbillingentityinternalproduct_request_compound_1 = billingentityinternalproduct_request_compound_convertToJSON(billingentityinternalproduct_request_compound_1);
	printf("billingentityinternalproduct_request_compound :\n%s\n", cJSON_Print(jsonbillingentityinternalproduct_request_compound_1));
	billingentityinternalproduct_request_compound_t* billingentityinternalproduct_request_compound_2 = billingentityinternalproduct_request_compound_parseFromJSON(jsonbillingentityinternalproduct_request_compound_1);
	cJSON* jsonbillingentityinternalproduct_request_compound_2 = billingentityinternalproduct_request_compound_convertToJSON(billingentityinternalproduct_request_compound_2);
	printf("repeating billingentityinternalproduct_request_compound:\n%s\n", cJSON_Print(jsonbillingentityinternalproduct_request_compound_2));
}

int main() {
  test_billingentityinternalproduct_request_compound(1);
  test_billingentityinternalproduct_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternalproduct_request_compound_MAIN
#endif // billingentityinternalproduct_request_compound_TEST
