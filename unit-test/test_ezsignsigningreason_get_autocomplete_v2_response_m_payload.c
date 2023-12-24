#ifndef ezsignsigningreason_get_autocomplete_v2_response_m_payload_TEST
#define ezsignsigningreason_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignsigningreason_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignsigningreason_get_autocomplete_v2_response_m_payload.h"
ezsignsigningreason_get_autocomplete_v2_response_m_payload_t* instantiate_ezsignsigningreason_get_autocomplete_v2_response_m_payload(int include_optional);



ezsignsigningreason_get_autocomplete_v2_response_m_payload_t* instantiate_ezsignsigningreason_get_autocomplete_v2_response_m_payload(int include_optional) {
  ezsignsigningreason_get_autocomplete_v2_response_m_payload_t* ezsignsigningreason_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    ezsignsigningreason_get_autocomplete_v2_response_m_payload = ezsignsigningreason_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    ezsignsigningreason_get_autocomplete_v2_response_m_payload = ezsignsigningreason_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return ezsignsigningreason_get_autocomplete_v2_response_m_payload;
}


#ifdef ezsignsigningreason_get_autocomplete_v2_response_m_payload_MAIN

void test_ezsignsigningreason_get_autocomplete_v2_response_m_payload(int include_optional) {
    ezsignsigningreason_get_autocomplete_v2_response_m_payload_t* ezsignsigningreason_get_autocomplete_v2_response_m_payload_1 = instantiate_ezsignsigningreason_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonezsignsigningreason_get_autocomplete_v2_response_m_payload_1 = ezsignsigningreason_get_autocomplete_v2_response_m_payload_convertToJSON(ezsignsigningreason_get_autocomplete_v2_response_m_payload_1);
	printf("ezsignsigningreason_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonezsignsigningreason_get_autocomplete_v2_response_m_payload_1));
	ezsignsigningreason_get_autocomplete_v2_response_m_payload_t* ezsignsigningreason_get_autocomplete_v2_response_m_payload_2 = ezsignsigningreason_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonezsignsigningreason_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonezsignsigningreason_get_autocomplete_v2_response_m_payload_2 = ezsignsigningreason_get_autocomplete_v2_response_m_payload_convertToJSON(ezsignsigningreason_get_autocomplete_v2_response_m_payload_2);
	printf("repeating ezsignsigningreason_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonezsignsigningreason_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_ezsignsigningreason_get_autocomplete_v2_response_m_payload(1);
  test_ezsignsigningreason_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignsigningreason_get_autocomplete_v2_response_m_payload_MAIN
#endif // ezsignsigningreason_get_autocomplete_v2_response_m_payload_TEST
