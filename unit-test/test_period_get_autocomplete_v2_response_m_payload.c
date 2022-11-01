#ifndef period_get_autocomplete_v2_response_m_payload_TEST
#define period_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define period_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/period_get_autocomplete_v2_response_m_payload.h"
period_get_autocomplete_v2_response_m_payload_t* instantiate_period_get_autocomplete_v2_response_m_payload(int include_optional);



period_get_autocomplete_v2_response_m_payload_t* instantiate_period_get_autocomplete_v2_response_m_payload(int include_optional) {
  period_get_autocomplete_v2_response_m_payload_t* period_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    period_get_autocomplete_v2_response_m_payload = period_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    period_get_autocomplete_v2_response_m_payload = period_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return period_get_autocomplete_v2_response_m_payload;
}


#ifdef period_get_autocomplete_v2_response_m_payload_MAIN

void test_period_get_autocomplete_v2_response_m_payload(int include_optional) {
    period_get_autocomplete_v2_response_m_payload_t* period_get_autocomplete_v2_response_m_payload_1 = instantiate_period_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonperiod_get_autocomplete_v2_response_m_payload_1 = period_get_autocomplete_v2_response_m_payload_convertToJSON(period_get_autocomplete_v2_response_m_payload_1);
	printf("period_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonperiod_get_autocomplete_v2_response_m_payload_1));
	period_get_autocomplete_v2_response_m_payload_t* period_get_autocomplete_v2_response_m_payload_2 = period_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonperiod_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonperiod_get_autocomplete_v2_response_m_payload_2 = period_get_autocomplete_v2_response_m_payload_convertToJSON(period_get_autocomplete_v2_response_m_payload_2);
	printf("repeating period_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonperiod_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_period_get_autocomplete_v2_response_m_payload(1);
  test_period_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // period_get_autocomplete_v2_response_m_payload_MAIN
#endif // period_get_autocomplete_v2_response_m_payload_TEST
