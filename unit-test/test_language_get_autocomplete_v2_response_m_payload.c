#ifndef language_get_autocomplete_v2_response_m_payload_TEST
#define language_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define language_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/language_get_autocomplete_v2_response_m_payload.h"
language_get_autocomplete_v2_response_m_payload_t* instantiate_language_get_autocomplete_v2_response_m_payload(int include_optional);



language_get_autocomplete_v2_response_m_payload_t* instantiate_language_get_autocomplete_v2_response_m_payload(int include_optional) {
  language_get_autocomplete_v2_response_m_payload_t* language_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    language_get_autocomplete_v2_response_m_payload = language_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    language_get_autocomplete_v2_response_m_payload = language_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return language_get_autocomplete_v2_response_m_payload;
}


#ifdef language_get_autocomplete_v2_response_m_payload_MAIN

void test_language_get_autocomplete_v2_response_m_payload(int include_optional) {
    language_get_autocomplete_v2_response_m_payload_t* language_get_autocomplete_v2_response_m_payload_1 = instantiate_language_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonlanguage_get_autocomplete_v2_response_m_payload_1 = language_get_autocomplete_v2_response_m_payload_convertToJSON(language_get_autocomplete_v2_response_m_payload_1);
	printf("language_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonlanguage_get_autocomplete_v2_response_m_payload_1));
	language_get_autocomplete_v2_response_m_payload_t* language_get_autocomplete_v2_response_m_payload_2 = language_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonlanguage_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonlanguage_get_autocomplete_v2_response_m_payload_2 = language_get_autocomplete_v2_response_m_payload_convertToJSON(language_get_autocomplete_v2_response_m_payload_2);
	printf("repeating language_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonlanguage_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_language_get_autocomplete_v2_response_m_payload(1);
  test_language_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // language_get_autocomplete_v2_response_m_payload_MAIN
#endif // language_get_autocomplete_v2_response_m_payload_TEST
