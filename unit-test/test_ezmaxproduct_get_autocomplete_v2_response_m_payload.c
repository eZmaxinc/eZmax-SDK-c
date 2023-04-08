#ifndef ezmaxproduct_get_autocomplete_v2_response_m_payload_TEST
#define ezmaxproduct_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxproduct_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxproduct_get_autocomplete_v2_response_m_payload.h"
ezmaxproduct_get_autocomplete_v2_response_m_payload_t* instantiate_ezmaxproduct_get_autocomplete_v2_response_m_payload(int include_optional);



ezmaxproduct_get_autocomplete_v2_response_m_payload_t* instantiate_ezmaxproduct_get_autocomplete_v2_response_m_payload(int include_optional) {
  ezmaxproduct_get_autocomplete_v2_response_m_payload_t* ezmaxproduct_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    ezmaxproduct_get_autocomplete_v2_response_m_payload = ezmaxproduct_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    ezmaxproduct_get_autocomplete_v2_response_m_payload = ezmaxproduct_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return ezmaxproduct_get_autocomplete_v2_response_m_payload;
}


#ifdef ezmaxproduct_get_autocomplete_v2_response_m_payload_MAIN

void test_ezmaxproduct_get_autocomplete_v2_response_m_payload(int include_optional) {
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t* ezmaxproduct_get_autocomplete_v2_response_m_payload_1 = instantiate_ezmaxproduct_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonezmaxproduct_get_autocomplete_v2_response_m_payload_1 = ezmaxproduct_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_m_payload_1);
	printf("ezmaxproduct_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezmaxproduct_get_autocomplete_v2_response_m_payload_1));
	ezmaxproduct_get_autocomplete_v2_response_m_payload_t* ezmaxproduct_get_autocomplete_v2_response_m_payload_2 = ezmaxproduct_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonezmaxproduct_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonezmaxproduct_get_autocomplete_v2_response_m_payload_2 = ezmaxproduct_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_m_payload_2);
	printf("repeating ezmaxproduct_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezmaxproduct_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_ezmaxproduct_get_autocomplete_v2_response_m_payload(1);
  test_ezmaxproduct_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxproduct_get_autocomplete_v2_response_m_payload_MAIN
#endif // ezmaxproduct_get_autocomplete_v2_response_m_payload_TEST
