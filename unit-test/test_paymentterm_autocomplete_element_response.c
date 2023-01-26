#ifndef paymentterm_autocomplete_element_response_TEST
#define paymentterm_autocomplete_element_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_autocomplete_element_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_autocomplete_element_response.h"
paymentterm_autocomplete_element_response_t* instantiate_paymentterm_autocomplete_element_response(int include_optional);



paymentterm_autocomplete_element_response_t* instantiate_paymentterm_autocomplete_element_response(int include_optional) {
  paymentterm_autocomplete_element_response_t* paymentterm_autocomplete_element_response = NULL;
  if (include_optional) {
    paymentterm_autocomplete_element_response = paymentterm_autocomplete_element_response_create(
      46,
      "Net 30 days",
      true
    );
  } else {
    paymentterm_autocomplete_element_response = paymentterm_autocomplete_element_response_create(
      46,
      "Net 30 days",
      true
    );
  }

  return paymentterm_autocomplete_element_response;
}


#ifdef paymentterm_autocomplete_element_response_MAIN

void test_paymentterm_autocomplete_element_response(int include_optional) {
    paymentterm_autocomplete_element_response_t* paymentterm_autocomplete_element_response_1 = instantiate_paymentterm_autocomplete_element_response(include_optional);

	cJSON* jsonpaymentterm_autocomplete_element_response_1 = paymentterm_autocomplete_element_response_convertToJSON(paymentterm_autocomplete_element_response_1);
	printf("paymentterm_autocomplete_element_response :\n%s\n", cJSON_Print(jsonpaymentterm_autocomplete_element_response_1));
	paymentterm_autocomplete_element_response_t* paymentterm_autocomplete_element_response_2 = paymentterm_autocomplete_element_response_parseFromJSON(jsonpaymentterm_autocomplete_element_response_1);
	cJSON* jsonpaymentterm_autocomplete_element_response_2 = paymentterm_autocomplete_element_response_convertToJSON(paymentterm_autocomplete_element_response_2);
	printf("repeating paymentterm_autocomplete_element_response:\n%s\n", cJSON_Print(jsonpaymentterm_autocomplete_element_response_2));
}

int main() {
  test_paymentterm_autocomplete_element_response(1);
  test_paymentterm_autocomplete_element_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_autocomplete_element_response_MAIN
#endif // paymentterm_autocomplete_element_response_TEST
