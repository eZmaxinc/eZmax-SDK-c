#ifndef paymentterm_response_TEST
#define paymentterm_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_response.h"
paymentterm_response_t* instantiate_paymentterm_response(int include_optional);

#include "test_multilingual_paymentterm_description.c"
#include "test_common_audit.c"


paymentterm_response_t* instantiate_paymentterm_response(int include_optional) {
  paymentterm_response_t* paymentterm_response = NULL;
  if (include_optional) {
    paymentterm_response = paymentterm_response_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_response__"Days",
      30,
       // false, not to have infinite recursion
      instantiate_multilingual_paymentterm_description(0),
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0)
    );
  } else {
    paymentterm_response = paymentterm_response_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_response__"Days",
      30,
      NULL,
      true,
      NULL
    );
  }

  return paymentterm_response;
}


#ifdef paymentterm_response_MAIN

void test_paymentterm_response(int include_optional) {
    paymentterm_response_t* paymentterm_response_1 = instantiate_paymentterm_response(include_optional);

	cJSON* jsonpaymentterm_response_1 = paymentterm_response_convertToJSON(paymentterm_response_1);
	printf("paymentterm_response :\n%s\n", cJSON_Print(jsonpaymentterm_response_1));
	paymentterm_response_t* paymentterm_response_2 = paymentterm_response_parseFromJSON(jsonpaymentterm_response_1);
	cJSON* jsonpaymentterm_response_2 = paymentterm_response_convertToJSON(paymentterm_response_2);
	printf("repeating paymentterm_response:\n%s\n", cJSON_Print(jsonpaymentterm_response_2));
}

int main() {
  test_paymentterm_response(1);
  test_paymentterm_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_response_MAIN
#endif // paymentterm_response_TEST
