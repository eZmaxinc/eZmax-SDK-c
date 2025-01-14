#ifndef customer_get_object_v2_response_TEST
#define customer_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_get_object_v2_response.h"
customer_get_object_v2_response_t* instantiate_customer_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_customer_get_object_v2_response_m_payload.c"


customer_get_object_v2_response_t* instantiate_customer_get_object_v2_response(int include_optional) {
  customer_get_object_v2_response_t* customer_get_object_v2_response = NULL;
  if (include_optional) {
    customer_get_object_v2_response = customer_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_customer_get_object_v2_response_m_payload(0)
    );
  } else {
    customer_get_object_v2_response = customer_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return customer_get_object_v2_response;
}


#ifdef customer_get_object_v2_response_MAIN

void test_customer_get_object_v2_response(int include_optional) {
    customer_get_object_v2_response_t* customer_get_object_v2_response_1 = instantiate_customer_get_object_v2_response(include_optional);

	cJSON* jsoncustomer_get_object_v2_response_1 = customer_get_object_v2_response_convertToJSON(customer_get_object_v2_response_1);
	printf("customer_get_object_v2_response :\n%s\n", cJSON_Print(jsoncustomer_get_object_v2_response_1));
	customer_get_object_v2_response_t* customer_get_object_v2_response_2 = customer_get_object_v2_response_parseFromJSON(jsoncustomer_get_object_v2_response_1);
	cJSON* jsoncustomer_get_object_v2_response_2 = customer_get_object_v2_response_convertToJSON(customer_get_object_v2_response_2);
	printf("repeating customer_get_object_v2_response:\n%s\n", cJSON_Print(jsoncustomer_get_object_v2_response_2));
}

int main() {
  test_customer_get_object_v2_response(1);
  test_customer_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_get_object_v2_response_MAIN
#endif // customer_get_object_v2_response_TEST
