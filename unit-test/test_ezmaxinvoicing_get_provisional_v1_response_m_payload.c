#ifndef ezmaxinvoicing_get_provisional_v1_response_m_payload_TEST
#define ezmaxinvoicing_get_provisional_v1_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicing_get_provisional_v1_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicing_get_provisional_v1_response_m_payload.h"
ezmaxinvoicing_get_provisional_v1_response_m_payload_t* instantiate_ezmaxinvoicing_get_provisional_v1_response_m_payload(int include_optional);

#include "test_common_audit.c"
#include "test_ezmaxinvoicingcontract_response_compound.c"
#include "test_custom_ezmaxpricing_response.c"


ezmaxinvoicing_get_provisional_v1_response_m_payload_t* instantiate_ezmaxinvoicing_get_provisional_v1_response_m_payload(int include_optional) {
  ezmaxinvoicing_get_provisional_v1_response_m_payload_t* ezmaxinvoicing_get_provisional_v1_response_m_payload = NULL;
  if (include_optional) {
    ezmaxinvoicing_get_provisional_v1_response_m_payload = ezmaxinvoicing_get_provisional_v1_response_m_payload_create(
      28,
      28,
      28,
      28,
      "eZsign (Pro)",
      "2022-01",
      28,
      ezmax_api_definition__full_ezmaxinvoicing_get_provisional_v1_response_m_payload__"Cheque",
      "1.00",
      1,
      "1.00",
      true,
       // false, not to have infinite recursion
      instantiate_common_audit(0),
       // false, not to have infinite recursion
      instantiate_ezmaxinvoicingcontract_response_compound(0),
       // false, not to have infinite recursion
      instantiate_custom_ezmaxpricing_response(0),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    ezmaxinvoicing_get_provisional_v1_response_m_payload = ezmaxinvoicing_get_provisional_v1_response_m_payload_create(
      28,
      28,
      28,
      28,
      "eZsign (Pro)",
      "2022-01",
      28,
      ezmax_api_definition__full_ezmaxinvoicing_get_provisional_v1_response_m_payload__"Cheque",
      "1.00",
      1,
      "1.00",
      true,
      NULL,
      NULL,
      NULL,
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return ezmaxinvoicing_get_provisional_v1_response_m_payload;
}


#ifdef ezmaxinvoicing_get_provisional_v1_response_m_payload_MAIN

void test_ezmaxinvoicing_get_provisional_v1_response_m_payload(int include_optional) {
    ezmaxinvoicing_get_provisional_v1_response_m_payload_t* ezmaxinvoicing_get_provisional_v1_response_m_payload_1 = instantiate_ezmaxinvoicing_get_provisional_v1_response_m_payload(include_optional);

	cJSON* jsonezmaxinvoicing_get_provisional_v1_response_m_payload_1 = ezmaxinvoicing_get_provisional_v1_response_m_payload_convertToJSON(ezmaxinvoicing_get_provisional_v1_response_m_payload_1);
	printf("ezmaxinvoicing_get_provisional_v1_response_m_payload :\n%s\n", cJSON_Print(jsonezmaxinvoicing_get_provisional_v1_response_m_payload_1));
	ezmaxinvoicing_get_provisional_v1_response_m_payload_t* ezmaxinvoicing_get_provisional_v1_response_m_payload_2 = ezmaxinvoicing_get_provisional_v1_response_m_payload_parseFromJSON(jsonezmaxinvoicing_get_provisional_v1_response_m_payload_1);
	cJSON* jsonezmaxinvoicing_get_provisional_v1_response_m_payload_2 = ezmaxinvoicing_get_provisional_v1_response_m_payload_convertToJSON(ezmaxinvoicing_get_provisional_v1_response_m_payload_2);
	printf("repeating ezmaxinvoicing_get_provisional_v1_response_m_payload:\n%s\n", cJSON_Print(jsonezmaxinvoicing_get_provisional_v1_response_m_payload_2));
}

int main() {
  test_ezmaxinvoicing_get_provisional_v1_response_m_payload(1);
  test_ezmaxinvoicing_get_provisional_v1_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicing_get_provisional_v1_response_m_payload_MAIN
#endif // ezmaxinvoicing_get_provisional_v1_response_m_payload_TEST
