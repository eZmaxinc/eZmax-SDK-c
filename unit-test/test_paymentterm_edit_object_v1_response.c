#ifndef paymentterm_edit_object_v1_response_TEST
#define paymentterm_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_edit_object_v1_response.h"
paymentterm_edit_object_v1_response_t* instantiate_paymentterm_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


paymentterm_edit_object_v1_response_t* instantiate_paymentterm_edit_object_v1_response(int include_optional) {
  paymentterm_edit_object_v1_response_t* paymentterm_edit_object_v1_response = NULL;
  if (include_optional) {
    paymentterm_edit_object_v1_response = paymentterm_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    paymentterm_edit_object_v1_response = paymentterm_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return paymentterm_edit_object_v1_response;
}


#ifdef paymentterm_edit_object_v1_response_MAIN

void test_paymentterm_edit_object_v1_response(int include_optional) {
    paymentterm_edit_object_v1_response_t* paymentterm_edit_object_v1_response_1 = instantiate_paymentterm_edit_object_v1_response(include_optional);

	cJSON* jsonpaymentterm_edit_object_v1_response_1 = paymentterm_edit_object_v1_response_convertToJSON(paymentterm_edit_object_v1_response_1);
	printf("paymentterm_edit_object_v1_response :\n%s\n", cJSON_Print(jsonpaymentterm_edit_object_v1_response_1));
	paymentterm_edit_object_v1_response_t* paymentterm_edit_object_v1_response_2 = paymentterm_edit_object_v1_response_parseFromJSON(jsonpaymentterm_edit_object_v1_response_1);
	cJSON* jsonpaymentterm_edit_object_v1_response_2 = paymentterm_edit_object_v1_response_convertToJSON(paymentterm_edit_object_v1_response_2);
	printf("repeating paymentterm_edit_object_v1_response:\n%s\n", cJSON_Print(jsonpaymentterm_edit_object_v1_response_2));
}

int main() {
  test_paymentterm_edit_object_v1_response(1);
  test_paymentterm_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_edit_object_v1_response_MAIN
#endif // paymentterm_edit_object_v1_response_TEST
