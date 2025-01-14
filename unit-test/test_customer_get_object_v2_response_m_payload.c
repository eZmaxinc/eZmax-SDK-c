#ifndef customer_get_object_v2_response_m_payload_TEST
#define customer_get_object_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define customer_get_object_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/customer_get_object_v2_response_m_payload.h"
customer_get_object_v2_response_m_payload_t* instantiate_customer_get_object_v2_response_m_payload(int include_optional);

#include "test_customer_response_compound.c"


customer_get_object_v2_response_m_payload_t* instantiate_customer_get_object_v2_response_m_payload(int include_optional) {
  customer_get_object_v2_response_m_payload_t* customer_get_object_v2_response_m_payload = NULL;
  if (include_optional) {
    customer_get_object_v2_response_m_payload = customer_get_object_v2_response_m_payload_create(
       // false, not to have infinite recursion
      instantiate_customer_response_compound(0)
    );
  } else {
    customer_get_object_v2_response_m_payload = customer_get_object_v2_response_m_payload_create(
      NULL
    );
  }

  return customer_get_object_v2_response_m_payload;
}


#ifdef customer_get_object_v2_response_m_payload_MAIN

void test_customer_get_object_v2_response_m_payload(int include_optional) {
    customer_get_object_v2_response_m_payload_t* customer_get_object_v2_response_m_payload_1 = instantiate_customer_get_object_v2_response_m_payload(include_optional);

	cJSON* jsoncustomer_get_object_v2_response_m_payload_1 = customer_get_object_v2_response_m_payload_convertToJSON(customer_get_object_v2_response_m_payload_1);
	printf("customer_get_object_v2_response_m_payload :\n%s\n", cJSON_Print(jsoncustomer_get_object_v2_response_m_payload_1));
	customer_get_object_v2_response_m_payload_t* customer_get_object_v2_response_m_payload_2 = customer_get_object_v2_response_m_payload_parseFromJSON(jsoncustomer_get_object_v2_response_m_payload_1);
	cJSON* jsoncustomer_get_object_v2_response_m_payload_2 = customer_get_object_v2_response_m_payload_convertToJSON(customer_get_object_v2_response_m_payload_2);
	printf("repeating customer_get_object_v2_response_m_payload:\n%s\n", cJSON_Print(jsoncustomer_get_object_v2_response_m_payload_2));
}

int main() {
  test_customer_get_object_v2_response_m_payload(1);
  test_customer_get_object_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // customer_get_object_v2_response_m_payload_MAIN
#endif // customer_get_object_v2_response_m_payload_TEST
