#ifndef ezsigntsarequirement_get_autocomplete_v2_response_m_payload_TEST
#define ezsigntsarequirement_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntsarequirement_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntsarequirement_get_autocomplete_v2_response_m_payload.h"
ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t* instantiate_ezsigntsarequirement_get_autocomplete_v2_response_m_payload(int include_optional);



ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t* instantiate_ezsigntsarequirement_get_autocomplete_v2_response_m_payload(int include_optional) {
  ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t* ezsigntsarequirement_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsigntsarequirement_get_autocomplete_v2_response_m_payload = ezsigntsarequirement_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsigntsarequirement_get_autocomplete_v2_response_m_payload = ezsigntsarequirement_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return ezsigntsarequirement_get_autocomplete_v2_response_m_payload;
}


#ifdef ezsigntsarequirement_get_autocomplete_v2_response_m_payload_MAIN

void test_ezsigntsarequirement_get_autocomplete_v2_response_m_payload(int include_optional) {
    ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t* ezsigntsarequirement_get_autocomplete_v2_response_m_payload_1 = instantiate_ezsigntsarequirement_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonezsigntsarequirement_get_autocomplete_v2_response_m_payload_1 = ezsigntsarequirement_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_m_payload_1);
	printf("ezsigntsarequirement_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsigntsarequirement_get_autocomplete_v2_response_m_payload_1));
	ezsigntsarequirement_get_autocomplete_v2_response_m_payload_t* ezsigntsarequirement_get_autocomplete_v2_response_m_payload_2 = ezsigntsarequirement_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonezsigntsarequirement_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonezsigntsarequirement_get_autocomplete_v2_response_m_payload_2 = ezsigntsarequirement_get_autocomplete_v2_response_m_payload_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_m_payload_2);
	printf("repeating ezsigntsarequirement_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsigntsarequirement_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_ezsigntsarequirement_get_autocomplete_v2_response_m_payload(1);
  test_ezsigntsarequirement_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntsarequirement_get_autocomplete_v2_response_m_payload_MAIN
#endif // ezsigntsarequirement_get_autocomplete_v2_response_m_payload_TEST
