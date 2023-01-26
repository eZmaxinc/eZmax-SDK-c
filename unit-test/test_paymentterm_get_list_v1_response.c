#ifndef paymentterm_get_list_v1_response_TEST
#define paymentterm_get_list_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_get_list_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_get_list_v1_response.h"
paymentterm_get_list_v1_response_t* instantiate_paymentterm_get_list_v1_response(int include_optional);

#include "test_paymentterm_get_list_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload_get_list.c"
#include "test_common_response_obj_debug.c"


paymentterm_get_list_v1_response_t* instantiate_paymentterm_get_list_v1_response(int include_optional) {
  paymentterm_get_list_v1_response_t* paymentterm_get_list_v1_response = NULL;
  if (include_optional) {
    paymentterm_get_list_v1_response = paymentterm_get_list_v1_response_create(
       // false, not to have infinite recursion
      instantiate_paymentterm_get_list_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload_get_list(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    paymentterm_get_list_v1_response = paymentterm_get_list_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return paymentterm_get_list_v1_response;
}


#ifdef paymentterm_get_list_v1_response_MAIN

void test_paymentterm_get_list_v1_response(int include_optional) {
    paymentterm_get_list_v1_response_t* paymentterm_get_list_v1_response_1 = instantiate_paymentterm_get_list_v1_response(include_optional);

	cJSON* jsonpaymentterm_get_list_v1_response_1 = paymentterm_get_list_v1_response_convertToJSON(paymentterm_get_list_v1_response_1);
	printf("paymentterm_get_list_v1_response :\n%s\n", cJSON_Print(jsonpaymentterm_get_list_v1_response_1));
	paymentterm_get_list_v1_response_t* paymentterm_get_list_v1_response_2 = paymentterm_get_list_v1_response_parseFromJSON(jsonpaymentterm_get_list_v1_response_1);
	cJSON* jsonpaymentterm_get_list_v1_response_2 = paymentterm_get_list_v1_response_convertToJSON(paymentterm_get_list_v1_response_2);
	printf("repeating paymentterm_get_list_v1_response:\n%s\n", cJSON_Print(jsonpaymentterm_get_list_v1_response_2));
}

int main() {
  test_paymentterm_get_list_v1_response(1);
  test_paymentterm_get_list_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_get_list_v1_response_MAIN
#endif // paymentterm_get_list_v1_response_TEST
