#ifndef paymentterm_request_TEST
#define paymentterm_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_request.h"
paymentterm_request_t* instantiate_paymentterm_request(int include_optional);

#include "test_multilingual_paymentterm_description.c"


paymentterm_request_t* instantiate_paymentterm_request(int include_optional) {
  paymentterm_request_t* paymentterm_request = NULL;
  if (include_optional) {
    paymentterm_request = paymentterm_request_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_request__"Days",
      5,
       // false, not to have infinite recursion
      instantiate_multilingual_paymentterm_description(0),
      true
    );
  } else {
    paymentterm_request = paymentterm_request_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_request__"Days",
      5,
      NULL,
      true
    );
  }

  return paymentterm_request;
}


#ifdef paymentterm_request_MAIN

void test_paymentterm_request(int include_optional) {
    paymentterm_request_t* paymentterm_request_1 = instantiate_paymentterm_request(include_optional);

	cJSON* jsonpaymentterm_request_1 = paymentterm_request_convertToJSON(paymentterm_request_1);
	printf("paymentterm_request :\n%s\n", cJSON_Print(jsonpaymentterm_request_1));
	paymentterm_request_t* paymentterm_request_2 = paymentterm_request_parseFromJSON(jsonpaymentterm_request_1);
	cJSON* jsonpaymentterm_request_2 = paymentterm_request_convertToJSON(paymentterm_request_2);
	printf("repeating paymentterm_request:\n%s\n", cJSON_Print(jsonpaymentterm_request_2));
}

int main() {
  test_paymentterm_request(1);
  test_paymentterm_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_request_MAIN
#endif // paymentterm_request_TEST
