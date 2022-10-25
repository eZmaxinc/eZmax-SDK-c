#ifndef ezmaxinvoicing_get_autocomplete_v2_response_m_payload_TEST
#define ezmaxinvoicing_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxinvoicing_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxinvoicing_get_autocomplete_v2_response_m_payload.h"
ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t* instantiate_ezmaxinvoicing_get_autocomplete_v2_response_m_payload(int include_optional);



ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t* instantiate_ezmaxinvoicing_get_autocomplete_v2_response_m_payload(int include_optional) {
  ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t* ezmaxinvoicing_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    ezmaxinvoicing_get_autocomplete_v2_response_m_payload = ezmaxinvoicing_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    ezmaxinvoicing_get_autocomplete_v2_response_m_payload = ezmaxinvoicing_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return ezmaxinvoicing_get_autocomplete_v2_response_m_payload;
}


#ifdef ezmaxinvoicing_get_autocomplete_v2_response_m_payload_MAIN

void test_ezmaxinvoicing_get_autocomplete_v2_response_m_payload(int include_optional) {
    ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t* ezmaxinvoicing_get_autocomplete_v2_response_m_payload_1 = instantiate_ezmaxinvoicing_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonezmaxinvoicing_get_autocomplete_v2_response_m_payload_1 = ezmaxinvoicing_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxinvoicing_get_autocomplete_v2_response_m_payload_1);
	printf("ezmaxinvoicing_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezmaxinvoicing_get_autocomplete_v2_response_m_payload_1));
	ezmaxinvoicing_get_autocomplete_v2_response_m_payload_t* ezmaxinvoicing_get_autocomplete_v2_response_m_payload_2 = ezmaxinvoicing_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonezmaxinvoicing_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonezmaxinvoicing_get_autocomplete_v2_response_m_payload_2 = ezmaxinvoicing_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxinvoicing_get_autocomplete_v2_response_m_payload_2);
	printf("repeating ezmaxinvoicing_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezmaxinvoicing_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_ezmaxinvoicing_get_autocomplete_v2_response_m_payload(1);
  test_ezmaxinvoicing_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxinvoicing_get_autocomplete_v2_response_m_payload_MAIN
#endif // ezmaxinvoicing_get_autocomplete_v2_response_m_payload_TEST
