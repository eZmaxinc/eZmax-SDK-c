#ifndef pdfalevel_get_autocomplete_v2_response_m_payload_TEST
#define pdfalevel_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdfalevel_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdfalevel_get_autocomplete_v2_response_m_payload.h"
pdfalevel_get_autocomplete_v2_response_m_payload_t* instantiate_pdfalevel_get_autocomplete_v2_response_m_payload(int include_optional);



pdfalevel_get_autocomplete_v2_response_m_payload_t* instantiate_pdfalevel_get_autocomplete_v2_response_m_payload(int include_optional) {
  pdfalevel_get_autocomplete_v2_response_m_payload_t* pdfalevel_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    pdfalevel_get_autocomplete_v2_response_m_payload = pdfalevel_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    pdfalevel_get_autocomplete_v2_response_m_payload = pdfalevel_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return pdfalevel_get_autocomplete_v2_response_m_payload;
}


#ifdef pdfalevel_get_autocomplete_v2_response_m_payload_MAIN

void test_pdfalevel_get_autocomplete_v2_response_m_payload(int include_optional) {
    pdfalevel_get_autocomplete_v2_response_m_payload_t* pdfalevel_get_autocomplete_v2_response_m_payload_1 = instantiate_pdfalevel_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonpdfalevel_get_autocomplete_v2_response_m_payload_1 = pdfalevel_get_autocomplete_v2_response_m_payload_convertToJSON(pdfalevel_get_autocomplete_v2_response_m_payload_1);
	printf("pdfalevel_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonpdfalevel_get_autocomplete_v2_response_m_payload_1));
	pdfalevel_get_autocomplete_v2_response_m_payload_t* pdfalevel_get_autocomplete_v2_response_m_payload_2 = pdfalevel_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonpdfalevel_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonpdfalevel_get_autocomplete_v2_response_m_payload_2 = pdfalevel_get_autocomplete_v2_response_m_payload_convertToJSON(pdfalevel_get_autocomplete_v2_response_m_payload_2);
	printf("repeating pdfalevel_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonpdfalevel_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_pdfalevel_get_autocomplete_v2_response_m_payload(1);
  test_pdfalevel_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdfalevel_get_autocomplete_v2_response_m_payload_MAIN
#endif // pdfalevel_get_autocomplete_v2_response_m_payload_TEST
