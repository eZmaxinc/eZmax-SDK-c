#ifndef invoice_get_communication_list_v1_response_m_payload_TEST
#define invoice_get_communication_list_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_get_communication_list_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_get_communication_list_v1_response_m_payload.h"
invoice_get_communication_list_v1_response_m_payload_t* instantiate_invoice_get_communication_list_v1_response_m_payload(int include_optional);



invoice_get_communication_list_v1_response_m_payload_t* instantiate_invoice_get_communication_list_v1_response_m_payload(int include_optional) {
  invoice_get_communication_list_v1_response_m_payload_t* invoice_get_communication_list_v1_response_m_payload = NULL;
  if (include_optional) {
    invoice_get_communication_list_v1_response_m_payload = invoice_get_communication_list_v1_response_m_payload_create(
      list_createList()
    );
  } else {
    invoice_get_communication_list_v1_response_m_payload = invoice_get_communication_list_v1_response_m_payload_create(
      list_createList()
    );
  }

  return invoice_get_communication_list_v1_response_m_payload;
}


#ifdef invoice_get_communication_list_v1_response_m_payload_MAIN

void test_invoice_get_communication_list_v1_response_m_payload(int include_optional) {
    invoice_get_communication_list_v1_response_m_payload_t* invoice_get_communication_list_v1_response_m_payload_1 = instantiate_invoice_get_communication_list_v1_response_m_payload(include_optional);

	cJSON* jsoninvoice_get_communication_list_v1_response_m_payload_1 = invoice_get_communication_list_v1_response_m_payload_convertToJSON(invoice_get_communication_list_v1_response_m_payload_1);
	printf("invoice_get_communication_list_v1_response_m_payload :\n%s\n", cJSON_Print(jsoninvoice_get_communication_list_v1_response_m_payload_1));
	invoice_get_communication_list_v1_response_m_payload_t* invoice_get_communication_list_v1_response_m_payload_2 = invoice_get_communication_list_v1_response_m_payload_parseFromJSON(jsoninvoice_get_communication_list_v1_response_m_payload_1);
	cJSON* jsoninvoice_get_communication_list_v1_response_m_payload_2 = invoice_get_communication_list_v1_response_m_payload_convertToJSON(invoice_get_communication_list_v1_response_m_payload_2);
	printf("repeating invoice_get_communication_list_v1_response_m_payload:\n%s\n", cJSON_Print(jsoninvoice_get_communication_list_v1_response_m_payload_2));
}

int main() {
  test_invoice_get_communication_list_v1_response_m_payload(1);
  test_invoice_get_communication_list_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_get_communication_list_v1_response_m_payload_MAIN
#endif // invoice_get_communication_list_v1_response_m_payload_TEST
