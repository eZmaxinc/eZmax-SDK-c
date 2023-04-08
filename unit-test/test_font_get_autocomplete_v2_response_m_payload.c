#ifndef font_get_autocomplete_v2_response_m_payload_TEST
#define font_get_autocomplete_v2_response_m_payload_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define font_get_autocomplete_v2_response_m_payload_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/font_get_autocomplete_v2_response_m_payload.h"
font_get_autocomplete_v2_response_m_payload_t* instantiate_font_get_autocomplete_v2_response_m_payload(int include_optional);



font_get_autocomplete_v2_response_m_payload_t* instantiate_font_get_autocomplete_v2_response_m_payload(int include_optional) {
  font_get_autocomplete_v2_response_m_payload_t* font_get_autocomplete_v2_response_m_payload = NULL;
  if (include_optional) {
    font_get_autocomplete_v2_response_m_payload = font_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  } else {
    font_get_autocomplete_v2_response_m_payload = font_get_autocomplete_v2_response_m_payload_create(
      list_createList()
    );
  }

  return font_get_autocomplete_v2_response_m_payload;
}


#ifdef font_get_autocomplete_v2_response_m_payload_MAIN

void test_font_get_autocomplete_v2_response_m_payload(int include_optional) {
    font_get_autocomplete_v2_response_m_payload_t* font_get_autocomplete_v2_response_m_payload_1 = instantiate_font_get_autocomplete_v2_response_m_payload(include_optional);

	cJSON* jsonfont_get_autocomplete_v2_response_m_payload_1 = font_get_autocomplete_v2_response_m_payload_convertToJSON(font_get_autocomplete_v2_response_m_payload_1);
	printf("font_get_autocomplete_v2_response_m_payload :\n%s\n", cJSON_Print(jsonfont_get_autocomplete_v2_response_m_payload_1));
	font_get_autocomplete_v2_response_m_payload_t* font_get_autocomplete_v2_response_m_payload_2 = font_get_autocomplete_v2_response_m_payload_parseFromJSON(jsonfont_get_autocomplete_v2_response_m_payload_1);
	cJSON* jsonfont_get_autocomplete_v2_response_m_payload_2 = font_get_autocomplete_v2_response_m_payload_convertToJSON(font_get_autocomplete_v2_response_m_payload_2);
	printf("repeating font_get_autocomplete_v2_response_m_payload:\n%s\n", cJSON_Print(jsonfont_get_autocomplete_v2_response_m_payload_2));
}

int main() {
  test_font_get_autocomplete_v2_response_m_payload(1);
  test_font_get_autocomplete_v2_response_m_payload(0);

  printf("Hello world \n");
  return 0;
}

#endif // font_get_autocomplete_v2_response_m_payload_MAIN
#endif // font_get_autocomplete_v2_response_m_payload_TEST
