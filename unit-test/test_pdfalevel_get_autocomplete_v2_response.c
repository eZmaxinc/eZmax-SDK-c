#ifndef pdfalevel_get_autocomplete_v2_response_TEST
#define pdfalevel_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define pdfalevel_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/pdfalevel_get_autocomplete_v2_response.h"
pdfalevel_get_autocomplete_v2_response_t* instantiate_pdfalevel_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_pdfalevel_get_autocomplete_v2_response_m_payload.c"


pdfalevel_get_autocomplete_v2_response_t* instantiate_pdfalevel_get_autocomplete_v2_response(int include_optional) {
  pdfalevel_get_autocomplete_v2_response_t* pdfalevel_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    pdfalevel_get_autocomplete_v2_response = pdfalevel_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_pdfalevel_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    pdfalevel_get_autocomplete_v2_response = pdfalevel_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return pdfalevel_get_autocomplete_v2_response;
}


#ifdef pdfalevel_get_autocomplete_v2_response_MAIN

void test_pdfalevel_get_autocomplete_v2_response(int include_optional) {
    pdfalevel_get_autocomplete_v2_response_t* pdfalevel_get_autocomplete_v2_response_1 = instantiate_pdfalevel_get_autocomplete_v2_response(include_optional);

	cJSON* jsonpdfalevel_get_autocomplete_v2_response_1 = pdfalevel_get_autocomplete_v2_response_convertToJSON(pdfalevel_get_autocomplete_v2_response_1);
	printf("pdfalevel_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonpdfalevel_get_autocomplete_v2_response_1));
	pdfalevel_get_autocomplete_v2_response_t* pdfalevel_get_autocomplete_v2_response_2 = pdfalevel_get_autocomplete_v2_response_parseFromJSON(jsonpdfalevel_get_autocomplete_v2_response_1);
	cJSON* jsonpdfalevel_get_autocomplete_v2_response_2 = pdfalevel_get_autocomplete_v2_response_convertToJSON(pdfalevel_get_autocomplete_v2_response_2);
	printf("repeating pdfalevel_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonpdfalevel_get_autocomplete_v2_response_2));
}

int main() {
  test_pdfalevel_get_autocomplete_v2_response(1);
  test_pdfalevel_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // pdfalevel_get_autocomplete_v2_response_MAIN
#endif // pdfalevel_get_autocomplete_v2_response_TEST
