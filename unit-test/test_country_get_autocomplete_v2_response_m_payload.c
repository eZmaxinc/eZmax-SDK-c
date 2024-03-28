#ifndef country_get_autocomplete_v2_response_m_payload_TEST
#define country_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define country_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/country_get_autocomplete_v2_response_m_payload.h"
country_get_autocomplete_v2_response_m_payload_t* instantiate_country_get_autocomplete_v2_response_m_payload(int include_optional);



country_get_autocomplete_v2_response_m_payload_t* instantiate_country_get_autocomplete_v2_response_m_payload(int include_optional) {
  country_get_autocomplete_v2_response_m_payload_t* country_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    country_get_autocomplete_v2_response_m_payload = country_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    country_get_autocomplete_v2_response_m_payload = country_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return country_get_autocomplete_v2_response_m_payload;
}


#ifdef country_get_autocomplete_v2_response_m_payload_MAIN

void test_country_get_autocomplete_v2_response_m_payload(int include_optional) {
    country_get_autocomplete_v2_response_m_payload_t* country_get_autocomplete_v2_response_m_payload_1 = instantiate_country_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsoncountry_get_autocomplete_v2_response_m_payload_1 = country_get_autocomplete_v2_response_m_payload_convertToJSON(country_get_autocomplete_v2_response_m_payload_1);
	printf("country_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsoncountry_get_autocomplete_v2_response_m_payload_1));
	country_get_autocomplete_v2_response_m_payload_t* country_get_autocomplete_v2_response_m_payload_2 = country_get_autocomplete_v2_response_m_payload_parseFromJSON(jsoncountry_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsoncountry_get_autocomplete_v2_response_m_payload_2 = country_get_autocomplete_v2_response_m_payload_convertToJSON(country_get_autocomplete_v2_response_m_payload_2);
	printf("repeating country_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsoncountry_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_country_get_autocomplete_v2_response_m_payload(1);
  test_country_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // country_get_autocomplete_v2_response_m_payload_MAIN
#endif // country_get_autocomplete_v2_response_m_payload_TEST
