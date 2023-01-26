#ifndef paymentterm_edit_object_v1_request_TEST
#define paymentterm_edit_object_v1_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_edit_object_v1_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_edit_object_v1_request.h"
paymentterm_edit_object_v1_request_t* instantiate_paymentterm_edit_object_v1_request(int include_optional);

#include "test_paymentterm_request_compound.c"


paymentterm_edit_object_v1_request_t* instantiate_paymentterm_edit_object_v1_request(int include_optional) {
  paymentterm_edit_object_v1_request_t* paymentterm_edit_object_v1_request = NULL;
  if (include_optional) {
    paymentterm_edit_object_v1_request = paymentterm_edit_object_v1_request_create(
       // false, not to have infinite recursion
      instantiate_paymentterm_request_compound(0)
    );
  } else {
    paymentterm_edit_object_v1_request = paymentterm_edit_object_v1_request_create(
      NULL
    );
  }

  return paymentterm_edit_object_v1_request;
}


#ifdef paymentterm_edit_object_v1_request_MAIN

void test_paymentterm_edit_object_v1_request(int include_optional) {
    paymentterm_edit_object_v1_request_t* paymentterm_edit_object_v1_request_1 = instantiate_paymentterm_edit_object_v1_request(include_optional);

	cJSON* jsonpaymentterm_edit_object_v1_request_1 = paymentterm_edit_object_v1_request_convertToJSON(paymentterm_edit_object_v1_request_1);
	printf("paymentterm_edit_object_v1_request :\n%s\n", cJSON_Print(jsonpaymentterm_edit_object_v1_request_1));
	paymentterm_edit_object_v1_request_t* paymentterm_edit_object_v1_request_2 = paymentterm_edit_object_v1_request_parseFromJSON(jsonpaymentterm_edit_object_v1_request_1);
	cJSON* jsonpaymentterm_edit_object_v1_request_2 = paymentterm_edit_object_v1_request_convertToJSON(paymentterm_edit_object_v1_request_2);
	printf("repeating paymentterm_edit_object_v1_request:\n%s\n", cJSON_Print(jsonpaymentterm_edit_object_v1_request_2));
}

int main() {
  test_paymentterm_edit_object_v1_request(1);
  test_paymentterm_edit_object_v1_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_edit_object_v1_request_MAIN
#endif // paymentterm_edit_object_v1_request_TEST
