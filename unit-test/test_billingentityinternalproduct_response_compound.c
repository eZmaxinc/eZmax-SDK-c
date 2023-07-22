#ifndef billingentityinternalproduct_response_compound_TEST
#define billingentityinternalproduct_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityinternalproduct_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityinternalproduct_response_compound.h"
billingentityinternalproduct_response_compound_t* instantiate_billingentityinternalproduct_response_compound(int include_optional);



billingentityinternalproduct_response_compound_t* instantiate_billingentityinternalproduct_response_compound(int include_optional) {
  billingentityinternalproduct_response_compound_t* billingentityinternalproduct_response_compound = NULL;
  if (include_optional) {
    billingentityinternalproduct_response_compound = billingentityinternalproduct_response_compound_create(
      254,
      1,
      "Default",
      172,
      "eZmax (License)",
      83,
      "ACME Inc"
    );
  } else {
    billingentityinternalproduct_response_compound = billingentityinternalproduct_response_compound_create(
      254,
      1,
      "Default",
      172,
      "eZmax (License)",
      83,
      "ACME Inc"
    );
  }

  return billingentityinternalproduct_response_compound;
}


#ifdef billingentityinternalproduct_response_compound_MAIN

void test_billingentityinternalproduct_response_compound(int include_optional) {
    billingentityinternalproduct_response_compound_t* billingentityinternalproduct_response_compound_1 = instantiate_billingentityinternalproduct_response_compound(include_optional);

	cJSON* jsonbillingentityinternalproduct_response_compound_1 = billingentityinternalproduct_response_compound_convertToJSON(billingentityinternalproduct_response_compound_1);
	printf("billingentityinternalproduct_response_compound :\n%s\n", cJSON_Print(jsonbillingentityinternalproduct_response_compound_1));
	billingentityinternalproduct_response_compound_t* billingentityinternalproduct_response_compound_2 = billingentityinternalproduct_response_compound_parseFromJSON(jsonbillingentityinternalproduct_response_compound_1);
	cJSON* jsonbillingentityinternalproduct_response_compound_2 = billingentityinternalproduct_response_compound_convertToJSON(billingentityinternalproduct_response_compound_2);
	printf("repeating billingentityinternalproduct_response_compound:\n%s\n", cJSON_Print(jsonbillingentityinternalproduct_response_compound_2));
}

int main() {
  test_billingentityinternalproduct_response_compound(1);
  test_billingentityinternalproduct_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityinternalproduct_response_compound_MAIN
#endif // billingentityinternalproduct_response_compound_TEST
