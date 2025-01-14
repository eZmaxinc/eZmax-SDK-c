#ifndef glaccount_get_autocomplete_v2_response_m_payload_TEST
#define glaccount_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define glaccount_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/glaccount_get_autocomplete_v2_response_m_payload.h"
glaccount_get_autocomplete_v2_response_m_payload_t* instantiate_glaccount_get_autocomplete_v2_response_m_payload(int include_optional);



glaccount_get_autocomplete_v2_response_m_payload_t* instantiate_glaccount_get_autocomplete_v2_response_m_payload(int include_optional) {
  glaccount_get_autocomplete_v2_response_m_payload_t* glaccount_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    glaccount_get_autocomplete_v2_response_m_payload = glaccount_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    glaccount_get_autocomplete_v2_response_m_payload = glaccount_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return glaccount_get_autocomplete_v2_response_m_payload;
}


#ifdef glaccount_get_autocomplete_v2_response_m_payload_MAIN

void test_glaccount_get_autocomplete_v2_response_m_payload(int include_optional) {
    glaccount_get_autocomplete_v2_response_m_payload_t* glaccount_get_autocomplete_v2_response_m_payload_1 = instantiate_glaccount_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonglaccount_get_autocomplete_v2_response_m_payload_1 = glaccount_get_autocomplete_v2_response_m_payload_convertToJSON(glaccount_get_autocomplete_v2_response_m_payload_1);
	printf("glaccount_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonglaccount_get_autocomplete_v2_response_m_payload_1));
	glaccount_get_autocomplete_v2_response_m_payload_t* glaccount_get_autocomplete_v2_response_m_payload_2 = glaccount_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonglaccount_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonglaccount_get_autocomplete_v2_response_m_payload_2 = glaccount_get_autocomplete_v2_response_m_payload_convertToJSON(glaccount_get_autocomplete_v2_response_m_payload_2);
	printf("repeating glaccount_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonglaccount_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_glaccount_get_autocomplete_v2_response_m_payload(1);
  test_glaccount_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // glaccount_get_autocomplete_v2_response_m_payload_MAIN
#endif // glaccount_get_autocomplete_v2_response_m_payload_TEST
