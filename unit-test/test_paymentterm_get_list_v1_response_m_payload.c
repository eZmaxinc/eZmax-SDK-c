#ifndef paymentterm_get_list_v1_response_m_payload_TEST
#define paymentterm_get_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define paymentterm_get_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/paymentterm_get_list_v1_response_m_payload.h"
paymentterm_get_list_v1_response_m_payload_t* instantiate_paymentterm_get_list_v1_response_m_payload(int include_optional);



paymentterm_get_list_v1_response_m_payload_t* instantiate_paymentterm_get_list_v1_response_m_payload(int include_optional) {
  paymentterm_get_list_v1_response_m_payload_t* paymentterm_get_list_v1_response_m_payload = NULL;
  if (include_optional) {
    paymentterm_get_list_v1_response_m_payload = paymentterm_get_list_v1_response_m_payload_create(
      list_createList(),
      100,
      533
    );
  } else {
    paymentterm_get_list_v1_response_m_payload = paymentterm_get_list_v1_response_m_payload_create(
      list_createList(),
      100,
      533
    );
  }

  return paymentterm_get_list_v1_response_m_payload;
}


#ifdef paymentterm_get_list_v1_response_m_payload_MAIN

void test_paymentterm_get_list_v1_response_m_payload(int include_optional) {
    paymentterm_get_list_v1_response_m_payload_t* paymentterm_get_list_v1_response_m_payload_1 = instantiate_paymentterm_get_list_v1_response_m_payload(include_optional);

	cJSON* jsonpaymentterm_get_list_v1_response_m_payload_1 = paymentterm_get_list_v1_response_m_payload_convertToJSON(paymentterm_get_list_v1_response_m_payload_1);
	printf("paymentterm_get_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsonpaymentterm_get_list_v1_response_m_payload_1));
	paymentterm_get_list_v1_response_m_payload_t* paymentterm_get_list_v1_response_m_payload_2 = paymentterm_get_list_v1_response_m_payload_parseFromJSON(jsonpaymentterm_get_list_v1_response_m_payload_1);
	cJSON* jsonpaymentterm_get_list_v1_response_m_payload_2 = paymentterm_get_list_v1_response_m_payload_convertToJSON(paymentterm_get_list_v1_response_m_payload_2);
	printf("repeating paymentterm_get_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsonpaymentterm_get_list_v1_response_m_payload_2));
}

int main() {
  test_paymentterm_get_list_v1_response_m_payload(1);
  test_paymentterm_get_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // paymentterm_get_list_v1_response_m_payload_MAIN
#endif // paymentterm_get_list_v1_response_m_payload_TEST
