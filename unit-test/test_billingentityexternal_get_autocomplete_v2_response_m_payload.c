#ifndef billingentityexternal_get_autocomplete_v2_response_m_payload_TEST
#define billingentityexternal_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define billingentityexternal_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/billingentityexternal_get_autocomplete_v2_response_m_payload.h"
billingentityexternal_get_autocomplete_v2_response_m_payload_t* instantiate_billingentityexternal_get_autocomplete_v2_response_m_payload(int include_optional);



billingentityexternal_get_autocomplete_v2_response_m_payload_t* instantiate_billingentityexternal_get_autocomplete_v2_response_m_payload(int include_optional) {
  billingentityexternal_get_autocomplete_v2_response_m_payload_t* billingentityexternal_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    billingentityexternal_get_autocomplete_v2_response_m_payload = billingentityexternal_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    billingentityexternal_get_autocomplete_v2_response_m_payload = billingentityexternal_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return billingentityexternal_get_autocomplete_v2_response_m_payload;
}


#ifdef billingentityexternal_get_autocomplete_v2_response_m_payload_MAIN

void test_billingentityexternal_get_autocomplete_v2_response_m_payload(int include_optional) {
    billingentityexternal_get_autocomplete_v2_response_m_payload_t* billingentityexternal_get_autocomplete_v2_response_m_payload_1 = instantiate_billingentityexternal_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonbillingentityexternal_get_autocomplete_v2_response_m_payload_1 = billingentityexternal_get_autocomplete_v2_response_m_payload_convertToJSON(billingentityexternal_get_autocomplete_v2_response_m_payload_1);
	printf("billingentityexternal_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonbillingentityexternal_get_autocomplete_v2_response_m_payload_1));
	billingentityexternal_get_autocomplete_v2_response_m_payload_t* billingentityexternal_get_autocomplete_v2_response_m_payload_2 = billingentityexternal_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonbillingentityexternal_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonbillingentityexternal_get_autocomplete_v2_response_m_payload_2 = billingentityexternal_get_autocomplete_v2_response_m_payload_convertToJSON(billingentityexternal_get_autocomplete_v2_response_m_payload_2);
	printf("repeating billingentityexternal_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonbillingentityexternal_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_billingentityexternal_get_autocomplete_v2_response_m_payload(1);
  test_billingentityexternal_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // billingentityexternal_get_autocomplete_v2_response_m_payload_MAIN
#endif // billingentityexternal_get_autocomplete_v2_response_m_payload_TEST
