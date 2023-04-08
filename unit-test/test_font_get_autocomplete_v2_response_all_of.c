#ifndef font_get_autocomplete_v2_response_all_of_TEST
#define font_get_autocomplete_v2_response_all_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define font_get_autocomplete_v2_response_all_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/font_get_autocomplete_v2_response_all_of.h"
font_get_autocomplete_v2_response_all_of_t* instantiate_font_get_autocomplete_v2_response_all_of(int include_optional);

#include "test_font_get_autocomplete_v2_response_m_payload.c"


font_get_autocomplete_v2_response_all_of_t* instantiate_font_get_autocomplete_v2_response_all_of(int include_optional) {
  font_get_autocomplete_v2_response_all_of_t* font_get_autocomplete_v2_response_all_of = NULL;
  if (include_optional) {
    font_get_autocomplete_v2_response_all_of = font_get_autocomplete_v2_response_all_of_create(
       // false, not to have infinite recursion
      instantiate_font_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    font_get_autocomplete_v2_response_all_of = font_get_autocomplete_v2_response_all_of_create(
      NULL
    );
  }

  return font_get_autocomplete_v2_response_all_of;
}


#ifdef font_get_autocomplete_v2_response_all_of_MAIN

void test_font_get_autocomplete_v2_response_all_of(int include_optional) {
    font_get_autocomplete_v2_response_all_of_t* font_get_autocomplete_v2_response_all_of_1 = instantiate_font_get_autocomplete_v2_response_all_of(include_optional);

	cJSON* jsonfont_get_autocomplete_v2_response_all_of_1 = font_get_autocomplete_v2_response_all_of_convertToJSON(font_get_autocomplete_v2_response_all_of_1);
	printf("font_get_autocomplete_v2_response_all_of :\n%s\n", cJSON_Print(jsonfont_get_autocomplete_v2_response_all_of_1));
	font_get_autocomplete_v2_response_all_of_t* font_get_autocomplete_v2_response_all_of_2 = font_get_autocomplete_v2_response_all_of_parseFromJSON(jsonfont_get_autocomplete_v2_response_all_of_1);
	cJSON* jsonfont_get_autocomplete_v2_response_all_of_2 = font_get_autocomplete_v2_response_all_of_convertToJSON(font_get_autocomplete_v2_response_all_of_2);
	printf("repeating font_get_autocomplete_v2_response_all_of:\n%s\n", cJSON_Print(jsonfont_get_autocomplete_v2_response_all_of_2));
}

int main() {
  test_font_get_autocomplete_v2_response_all_of(1);
  test_font_get_autocomplete_v2_response_all_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // font_get_autocomplete_v2_response_all_of_MAIN
#endif // font_get_autocomplete_v2_response_all_of_TEST
