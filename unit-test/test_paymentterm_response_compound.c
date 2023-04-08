#ifndef paymentterm_response_compound_TEST
#define paymentterm_response_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_response_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_response_compound.h"
paymentterm_response_compound_t* instantiate_paymentterm_response_compound(int include_optional);

#include "test_multilingual_paymentterm_description.c"
#include "test_common_audit.c"


paymentterm_response_compound_t* instantiate_paymentterm_response_compound(int include_optional) {
  paymentterm_response_compound_t* paymentterm_response_compound = NULL;
  if (include_optional) {
    paymentterm_response_compound = paymentterm_response_compound_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_response_compound__"Days",
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_paymentterm_description(0),
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    paymentterm_response_compound = paymentterm_response_compound_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_response_compound__"Days",
      5,
      NULL,
      true,
      NULL
    );
  }

  return paymentterm_response_compound;
}


#ifdef paymentterm_response_compound_MAIN

void test_paymentterm_response_compound(int include_optional) {
    paymentterm_response_compound_t* paymentterm_response_compound_1 = instantiate_paymentterm_response_compound(include_optional);

	cJSON* jsonpaymentterm_response_compound_1 = paymentterm_response_compound_convertToJSON(paymentterm_response_compound_1);
	printf("paymentterm_response_compound :\n%s\n", cJSON_Print(jsonpaymentterm_response_compound_1));
	paymentterm_response_compound_t* paymentterm_response_compound_2 = paymentterm_response_compound_parseFromJSON(jsonpaymentterm_response_compound_1);
	cJSON* jsonpaymentterm_response_compound_2 = paymentterm_response_compound_convertToJSON(paymentterm_response_compound_2);
	printf("repeating paymentterm_response_compound:\n%s\n", cJSON_Print(jsonpaymentterm_response_compound_2));
}

int main() {
  test_paymentterm_response_compound(1);
  test_paymentterm_response_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_response_compound_MAIN
#endif // paymentterm_response_compound_TEST
