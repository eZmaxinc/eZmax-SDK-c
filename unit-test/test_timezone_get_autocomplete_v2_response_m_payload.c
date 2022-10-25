#ifndef timezone_get_autocomplete_v2_response_m_payload_TEST
#define timezone_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_get_autocomplete_v2_response_m_payload.h"
timezone_get_autocomplete_v2_response_m_payload_t* instantiate_timezone_get_autocomplete_v2_response_m_payload(int include_optional);



timezone_get_autocomplete_v2_response_m_payload_t* instantiate_timezone_get_autocomplete_v2_response_m_payload(int include_optional) {
  timezone_get_autocomplete_v2_response_m_payload_t* timezone_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    timezone_get_autocomplete_v2_response_m_payload = timezone_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    timezone_get_autocomplete_v2_response_m_payload = timezone_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return timezone_get_autocomplete_v2_response_m_payload;
}


#ifdef timezone_get_autocomplete_v2_response_m_payload_MAIN

void test_timezone_get_autocomplete_v2_response_m_payload(int include_optional) {
    timezone_get_autocomplete_v2_response_m_payload_t* timezone_get_autocomplete_v2_response_m_payload_1 = instantiate_timezone_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsontimezone_get_autocomplete_v2_response_m_payload_1 = timezone_get_autocomplete_v2_response_m_payload_convertToJSON(timezone_get_autocomplete_v2_response_m_payload_1);
	printf("timezone_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsontimezone_get_autocomplete_v2_response_m_payload_1));
	timezone_get_autocomplete_v2_response_m_payload_t* timezone_get_autocomplete_v2_response_m_payload_2 = timezone_get_autocomplete_v2_response_m_payload_parseFromJSON(jsontimezone_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsontimezone_get_autocomplete_v2_response_m_payload_2 = timezone_get_autocomplete_v2_response_m_payload_convertToJSON(timezone_get_autocomplete_v2_response_m_payload_2);
	printf("repeating timezone_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsontimezone_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_timezone_get_autocomplete_v2_response_m_payload(1);
  test_timezone_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_get_autocomplete_v2_response_m_payload_MAIN
#endif // timezone_get_autocomplete_v2_response_m_payload_TEST
