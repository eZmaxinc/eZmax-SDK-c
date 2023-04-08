#ifndef font_get_autocomplete_v2_response_TEST
#define font_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define font_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/font_get_autocomplete_v2_response.h"
font_get_autocomplete_v2_response_t* instantiate_font_get_autocomplete_v2_response(int include_optional);

#include "test_font_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


font_get_autocomplete_v2_response_t* instantiate_font_get_autocomplete_v2_response(int include_optional) {
  font_get_autocomplete_v2_response_t* font_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    font_get_autocomplete_v2_response = font_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_font_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    font_get_autocomplete_v2_response = font_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return font_get_autocomplete_v2_response;
}


#ifdef font_get_autocomplete_v2_response_MAIN

void test_font_get_autocomplete_v2_response(int include_optional) {
    font_get_autocomplete_v2_response_t* font_get_autocomplete_v2_response_1 = instantiate_font_get_autocomplete_v2_response(include_optional);

	cJSON* jsonfont_get_autocomplete_v2_response_1 = font_get_autocomplete_v2_response_convertToJSON(font_get_autocomplete_v2_response_1);
	printf("font_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonfont_get_autocomplete_v2_response_1));
	font_get_autocomplete_v2_response_t* font_get_autocomplete_v2_response_2 = font_get_autocomplete_v2_response_parseFromJSON(jsonfont_get_autocomplete_v2_response_1);
	cJSON* jsonfont_get_autocomplete_v2_response_2 = font_get_autocomplete_v2_response_convertToJSON(font_get_autocomplete_v2_response_2);
	printf("repeating font_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonfont_get_autocomplete_v2_response_2));
}

int main() {
  test_font_get_autocomplete_v2_response(1);
  test_font_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // font_get_autocomplete_v2_response_MAIN
#endif // font_get_autocomplete_v2_response_TEST
