#ifndef paymentterm_create_object_v1_response_all_of_TEST
#define paymentterm_create_object_v1_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_create_object_v1_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_create_object_v1_response_all_of.h"
paymentterm_create_object_v1_response_all_of_t* instantiate_paymentterm_create_object_v1_response_all_of(int include_optional);

#include "test_paymentterm_create_object_v1_response_m_payload.c"


paymentterm_create_object_v1_response_all_of_t* instantiate_paymentterm_create_object_v1_response_all_of(int include_optional) {
  paymentterm_create_object_v1_response_all_of_t* paymentterm_create_object_v1_response_all_of = NULL;
  if (include_optional) {
    paymentterm_create_object_v1_response_all_of = paymentterm_create_object_v1_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_paymentterm_create_object_v1_response_m_payload(0)
    );
  } else {
    paymentterm_create_object_v1_response_all_of = paymentterm_create_object_v1_response_all_of_create(
      NULL
    );
  }

  return paymentterm_create_object_v1_response_all_of;
}


#ifdef paymentterm_create_object_v1_response_all_of_MAIN

void test_paymentterm_create_object_v1_response_all_of(int include_optional) {
    paymentterm_create_object_v1_response_all_of_t* paymentterm_create_object_v1_response_all_of_1 = instantiate_paymentterm_create_object_v1_response_all_of(include_optional);

	cJSON* jsonpaymentterm_create_object_v1_response_all_of_1 = paymentterm_create_object_v1_response_all_of_convertToJSON(paymentterm_create_object_v1_response_all_of_1);
	printf("paymentterm_create_object_v1_response_all_of :\n%s\n", cJSON_Print(jsonpaymentterm_create_object_v1_response_all_of_1));
	paymentterm_create_object_v1_response_all_of_t* paymentterm_create_object_v1_response_all_of_2 = paymentterm_create_object_v1_response_all_of_parseFromJSON(jsonpaymentterm_create_object_v1_response_all_of_1);
	cJSON* jsonpaymentterm_create_object_v1_response_all_of_2 = paymentterm_create_object_v1_response_all_of_convertToJSON(paymentterm_create_object_v1_response_all_of_2);
	printf("repeating paymentterm_create_object_v1_response_all_of:\n%s\n", cJSON_Print(jsonpaymentterm_create_object_v1_response_all_of_2));
}

int main() {
  test_paymentterm_create_object_v1_response_all_of(1);
  test_paymentterm_create_object_v1_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_create_object_v1_response_all_of_MAIN
#endif // paymentterm_create_object_v1_response_all_of_TEST
