#ifndef ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_TEST
#define ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateglobal_get_autocomplete_v2_response_m_payload.h"
ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t* instantiate_ezsigntemplateglobal_get_autocomplete_v2_response_m_payload(int include_optional);



ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t* instantiate_ezsigntemplateglobal_get_autocomplete_v2_response_m_payload(int include_optional) {
  ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t* ezsigntemplateglobal_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsigntemplateglobal_get_autocomplete_v2_response_m_payload = ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsigntemplateglobal_get_autocomplete_v2_response_m_payload = ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return ezsigntemplateglobal_get_autocomplete_v2_response_m_payload;
}


#ifdef ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_MAIN

void test_ezsigntemplateglobal_get_autocomplete_v2_response_m_payload(int include_optional) {
    ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t* ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_1 = instantiate_ezsigntemplateglobal_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonezsigntemplateglobal_get_autocomplete_v2_response_m_payload_1 = ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_1);
	printf("ezsigntemplateglobal_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntemplateglobal_get_autocomplete_v2_response_m_payload_1));
	ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_t* ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_2 = ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonezsigntemplateglobal_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonezsigntemplateglobal_get_autocomplete_v2_response_m_payload_2 = ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_2);
	printf("repeating ezsigntemplateglobal_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntemplateglobal_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_ezsigntemplateglobal_get_autocomplete_v2_response_m_payload(1);
  test_ezsigntemplateglobal_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_MAIN
#endif // ezsigntemplateglobal_get_autocomplete_v2_response_m_payload_TEST
