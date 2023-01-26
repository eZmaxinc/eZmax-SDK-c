#ifndef paymentterm_get_list_v1_response_m_payload_all_of_TEST
#define paymentterm_get_list_v1_response_m_payload_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_get_list_v1_response_m_payload_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_get_list_v1_response_m_payload_all_of.h"
paymentterm_get_list_v1_response_m_payload_all_of_t* instantiate_paymentterm_get_list_v1_response_m_payload_all_of(int include_optional);



paymentterm_get_list_v1_response_m_payload_all_of_t* instantiate_paymentterm_get_list_v1_response_m_payload_all_of(int include_optional) {
  paymentterm_get_list_v1_response_m_payload_all_of_t* paymentterm_get_list_v1_response_m_payload_all_of = NULL;
  if (include_optional) {
    paymentterm_get_list_v1_response_m_payload_all_of = paymentterm_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  } else {
    paymentterm_get_list_v1_response_m_payload_all_of = paymentterm_get_list_v1_response_m_payload_all_of_create(
      list_createList()
    );
  }

  return paymentterm_get_list_v1_response_m_payload_all_of;
}


#ifdef paymentterm_get_list_v1_response_m_payload_all_of_MAIN

void test_paymentterm_get_list_v1_response_m_payload_all_of(int include_optional) {
    paymentterm_get_list_v1_response_m_payload_all_of_t* paymentterm_get_list_v1_response_m_payload_all_of_1 = instantiate_paymentterm_get_list_v1_response_m_payload_all_of(include_optional);

	cJSON* jsonpaymentterm_get_list_v1_response_m_payload_all_of_1 = paymentterm_get_list_v1_response_m_payload_all_of_convertToJSON(paymentterm_get_list_v1_response_m_payload_all_of_1);
	printf("paymentterm_get_list_v1_response_m_payload_all_of :\n%s\n", cJSON_Print(jsonpaymentterm_get_list_v1_response_m_payload_all_of_1));
	paymentterm_get_list_v1_response_m_payload_all_of_t* paymentterm_get_list_v1_response_m_payload_all_of_2 = paymentterm_get_list_v1_response_m_payload_all_of_parseFromJSON(jsonpaymentterm_get_list_v1_response_m_payload_all_of_1);
	cJSON* jsonpaymentterm_get_list_v1_response_m_payload_all_of_2 = paymentterm_get_list_v1_response_m_payload_all_of_convertToJSON(paymentterm_get_list_v1_response_m_payload_all_of_2);
	printf("repeating paymentterm_get_list_v1_response_m_payload_all_of:\n%s\n", cJSON_Print(jsonpaymentterm_get_list_v1_response_m_payload_all_of_2));
}

int main() {
  test_paymentterm_get_list_v1_response_m_payload_all_of(1);
  test_paymentterm_get_list_v1_response_m_payload_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_get_list_v1_response_m_payload_all_of_MAIN
#endif // paymentterm_get_list_v1_response_m_payload_all_of_TEST
