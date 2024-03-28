#ifndef province_get_autocomplete_v2_response_m_payload_TEST
#define province_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define province_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/province_get_autocomplete_v2_response_m_payload.h"
province_get_autocomplete_v2_response_m_payload_t* instantiate_province_get_autocomplete_v2_response_m_payload(int include_optional);



province_get_autocomplete_v2_response_m_payload_t* instantiate_province_get_autocomplete_v2_response_m_payload(int include_optional) {
  province_get_autocomplete_v2_response_m_payload_t* province_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    province_get_autocomplete_v2_response_m_payload = province_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    province_get_autocomplete_v2_response_m_payload = province_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return province_get_autocomplete_v2_response_m_payload;
}


#ifdef province_get_autocomplete_v2_response_m_payload_MAIN

void test_province_get_autocomplete_v2_response_m_payload(int include_optional) {
    province_get_autocomplete_v2_response_m_payload_t* province_get_autocomplete_v2_response_m_payload_1 = instantiate_province_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonprovince_get_autocomplete_v2_response_m_payload_1 = province_get_autocomplete_v2_response_m_payload_convertToJSON(province_get_autocomplete_v2_response_m_payload_1);
	printf("province_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonprovince_get_autocomplete_v2_response_m_payload_1));
	province_get_autocomplete_v2_response_m_payload_t* province_get_autocomplete_v2_response_m_payload_2 = province_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonprovince_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonprovince_get_autocomplete_v2_response_m_payload_2 = province_get_autocomplete_v2_response_m_payload_convertToJSON(province_get_autocomplete_v2_response_m_payload_2);
	printf("repeating province_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonprovince_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_province_get_autocomplete_v2_response_m_payload(1);
  test_province_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // province_get_autocomplete_v2_response_m_payload_MAIN
#endif // province_get_autocomplete_v2_response_m_payload_TEST
