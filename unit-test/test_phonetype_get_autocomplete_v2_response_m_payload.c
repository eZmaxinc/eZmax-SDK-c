#ifndef phonetype_get_autocomplete_v2_response_m_payload_TEST
#define phonetype_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define phonetype_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/phonetype_get_autocomplete_v2_response_m_payload.h"
phonetype_get_autocomplete_v2_response_m_payload_t* instantiate_phonetype_get_autocomplete_v2_response_m_payload(int include_optional);



phonetype_get_autocomplete_v2_response_m_payload_t* instantiate_phonetype_get_autocomplete_v2_response_m_payload(int include_optional) {
  phonetype_get_autocomplete_v2_response_m_payload_t* phonetype_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    phonetype_get_autocomplete_v2_response_m_payload = phonetype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    phonetype_get_autocomplete_v2_response_m_payload = phonetype_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return phonetype_get_autocomplete_v2_response_m_payload;
}


#ifdef phonetype_get_autocomplete_v2_response_m_payload_MAIN

void test_phonetype_get_autocomplete_v2_response_m_payload(int include_optional) {
    phonetype_get_autocomplete_v2_response_m_payload_t* phonetype_get_autocomplete_v2_response_m_payload_1 = instantiate_phonetype_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonphonetype_get_autocomplete_v2_response_m_payload_1 = phonetype_get_autocomplete_v2_response_m_payload_convertToJSON(phonetype_get_autocomplete_v2_response_m_payload_1);
	printf("phonetype_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonphonetype_get_autocomplete_v2_response_m_payload_1));
	phonetype_get_autocomplete_v2_response_m_payload_t* phonetype_get_autocomplete_v2_response_m_payload_2 = phonetype_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonphonetype_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonphonetype_get_autocomplete_v2_response_m_payload_2 = phonetype_get_autocomplete_v2_response_m_payload_convertToJSON(phonetype_get_autocomplete_v2_response_m_payload_2);
	printf("repeating phonetype_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonphonetype_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_phonetype_get_autocomplete_v2_response_m_payload(1);
  test_phonetype_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // phonetype_get_autocomplete_v2_response_m_payload_MAIN
#endif // phonetype_get_autocomplete_v2_response_m_payload_TEST
