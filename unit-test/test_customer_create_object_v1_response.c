#ifndef customer_create_object_v1_response_TEST
#define customer_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_create_object_v1_response.h"
customer_create_object_v1_response_t* instantiate_customer_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_customer_create_object_v1_response_m_payload.c"


customer_create_object_v1_response_t* instantiate_customer_create_object_v1_response(int include_optional) {
  customer_create_object_v1_response_t* customer_create_object_v1_response = NULL;
  if (include_optional) {
    customer_create_object_v1_response = customer_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_customer_create_object_v1_response_m_payload(0)
    );
  } else {
    customer_create_object_v1_response = customer_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return customer_create_object_v1_response;
}


#ifdef customer_create_object_v1_response_MAIN

void test_customer_create_object_v1_response(int include_optional) {
    customer_create_object_v1_response_t* customer_create_object_v1_response_1 = instantiate_customer_create_object_v1_response(include_optional);

	cJSON* jsoncustomer_create_object_v1_response_1 = customer_create_object_v1_response_convertToJSON(customer_create_object_v1_response_1);
	printf("customer_create_object_v1_response :\n%s\n", cJSON_Print(jsoncustomer_create_object_v1_response_1));
	customer_create_object_v1_response_t* customer_create_object_v1_response_2 = customer_create_object_v1_response_parseFromJSON(jsoncustomer_create_object_v1_response_1);
	cJSON* jsoncustomer_create_object_v1_response_2 = customer_create_object_v1_response_convertToJSON(customer_create_object_v1_response_2);
	printf("repeating customer_create_object_v1_response:\n%s\n", cJSON_Print(jsoncustomer_create_object_v1_response_2));
}

int main() {
  test_customer_create_object_v1_response(1);
  test_customer_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_create_object_v1_response_MAIN
#endif // customer_create_object_v1_response_TEST
