#ifndef paymentterm_request_compound_TEST
#define paymentterm_request_compound_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_request_compound_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_request_compound.h"
paymentterm_request_compound_t* instantiate_paymentterm_request_compound(int include_optional);

#include "test_multilingual_paymentterm_description.c"


paymentterm_request_compound_t* instantiate_paymentterm_request_compound(int include_optional) {
  paymentterm_request_compound_t* paymentterm_request_compound = NULL;
  if (include_optional) {
    paymentterm_request_compound = paymentterm_request_compound_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_request_compound__"Days",
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_paymentterm_description(0),
      true
    );
  } else {
    paymentterm_request_compound = paymentterm_request_compound_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_request_compound__"Days",
      5,
      NULL,
      true
    );
  }

  return paymentterm_request_compound;
}


#ifdef paymentterm_request_compound_MAIN

void test_paymentterm_request_compound(int include_optional) {
    paymentterm_request_compound_t* paymentterm_request_compound_1 = instantiate_paymentterm_request_compound(include_optional);

	cJSON* jsonpaymentterm_request_compound_1 = paymentterm_request_compound_convertToJSON(paymentterm_request_compound_1);
	printf("paymentterm_request_compound :\n%s\n", cJSON_Print(jsonpaymentterm_request_compound_1));
	paymentterm_request_compound_t* paymentterm_request_compound_2 = paymentterm_request_compound_parseFromJSON(jsonpaymentterm_request_compound_1);
	cJSON* jsonpaymentterm_request_compound_2 = paymentterm_request_compound_convertToJSON(paymentterm_request_compound_2);
	printf("repeating paymentterm_request_compound:\n%s\n", cJSON_Print(jsonpaymentterm_request_compound_2));
}

int main() {
  test_paymentterm_request_compound(1);
  test_paymentterm_request_compound(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_request_compound_MAIN
#endif // paymentterm_request_compound_TEST
