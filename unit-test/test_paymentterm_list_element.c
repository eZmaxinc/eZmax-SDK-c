#ifndef paymentterm_list_element_TEST
#define paymentterm_list_element_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_list_element_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_list_element.h"
paymentterm_list_element_t* instantiate_paymentterm_list_element(int include_optional);



paymentterm_list_element_t* instantiate_paymentterm_list_element(int include_optional) {
  paymentterm_list_element_t* paymentterm_list_element = NULL;
  if (include_optional) {
    paymentterm_list_element = paymentterm_list_element_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_list_element__"Days",
      5,
      "Net 30 days",
      true
    );
  } else {
    paymentterm_list_element = paymentterm_list_element_create(
      46,
      "0030",
      ezmax_api_definition__full_paymentterm_list_element__"Days",
      5,
      "Net 30 days",
      true
    );
  }

  return paymentterm_list_element;
}


#ifdef paymentterm_list_element_MAIN

void test_paymentterm_list_element(int include_optional) {
    paymentterm_list_element_t* paymentterm_list_element_1 = instantiate_paymentterm_list_element(include_optional);

	cJSON* jsonpaymentterm_list_element_1 = paymentterm_list_element_convertToJSON(paymentterm_list_element_1);
	printf("paymentterm_list_element :\n%s\n", cJSON_Print(jsonpaymentterm_list_element_1));
	paymentterm_list_element_t* paymentterm_list_element_2 = paymentterm_list_element_parseFromJSON(jsonpaymentterm_list_element_1);
	cJSON* jsonpaymentterm_list_element_2 = paymentterm_list_element_convertToJSON(paymentterm_list_element_2);
	printf("repeating paymentterm_list_element:\n%s\n", cJSON_Print(jsonpaymentterm_list_element_2));
}

int main() {
  test_paymentterm_list_element(1);
  test_paymentterm_list_element(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_list_element_MAIN
#endif // paymentterm_list_element_TEST
