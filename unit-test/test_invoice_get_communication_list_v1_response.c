#ifndef invoice_get_communication_list_v1_response_TEST
#define invoice_get_communication_list_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define invoice_get_communication_list_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/invoice_get_communication_list_v1_response.h"
invoice_get_communication_list_v1_response_t* instantiate_invoice_get_communication_list_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload_get_list.c"
#include "test_common_response_obj_debug.c"
#include "test_invoice_get_communication_list_v1_response_m_payload.c"


invoice_get_communication_list_v1_response_t* instantiate_invoice_get_communication_list_v1_response(int include_optional) {
  invoice_get_communication_list_v1_response_t* invoice_get_communication_list_v1_response = NULL;
  if (include_optional) {
    invoice_get_communication_list_v1_response = invoice_get_communication_list_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload_get_list(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_invoice_get_communication_list_v1_response_m_payload(0)
    );
  } else {
    invoice_get_communication_list_v1_response = invoice_get_communication_list_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return invoice_get_communication_list_v1_response;
}


#ifdef invoice_get_communication_list_v1_response_MAIN

void test_invoice_get_communication_list_v1_response(int include_optional) {
    invoice_get_communication_list_v1_response_t* invoice_get_communication_list_v1_response_1 = instantiate_invoice_get_communication_list_v1_response(include_optional);

	cJSON* jsoninvoice_get_communication_list_v1_response_1 = invoice_get_communication_list_v1_response_convertToJSON(invoice_get_communication_list_v1_response_1);
	printf("invoice_get_communication_list_v1_response :\n%s\n", cJSON_Print(jsoninvoice_get_communication_list_v1_response_1));
	invoice_get_communication_list_v1_response_t* invoice_get_communication_list_v1_response_2 = invoice_get_communication_list_v1_response_parseFromJSON(jsoninvoice_get_communication_list_v1_response_1);
	cJSON* jsoninvoice_get_communication_list_v1_response_2 = invoice_get_communication_list_v1_response_convertToJSON(invoice_get_communication_list_v1_response_2);
	printf("repeating invoice_get_communication_list_v1_response:\n%s\n", cJSON_Print(jsoninvoice_get_communication_list_v1_response_2));
}

int main() {
  test_invoice_get_communication_list_v1_response(1);
  test_invoice_get_communication_list_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // invoice_get_communication_list_v1_response_MAIN
#endif // invoice_get_communication_list_v1_response_TEST
