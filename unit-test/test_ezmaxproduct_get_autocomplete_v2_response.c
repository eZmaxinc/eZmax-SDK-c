#ifndef ezmaxproduct_get_autocomplete_v2_response_TEST
#define ezmaxproduct_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezmaxproduct_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezmaxproduct_get_autocomplete_v2_response.h"
ezmaxproduct_get_autocomplete_v2_response_t* instantiate_ezmaxproduct_get_autocomplete_v2_response(int include_optional);

#include "test_ezmaxproduct_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezmaxproduct_get_autocomplete_v2_response_t* instantiate_ezmaxproduct_get_autocomplete_v2_response(int include_optional) {
  ezmaxproduct_get_autocomplete_v2_response_t* ezmaxproduct_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    ezmaxproduct_get_autocomplete_v2_response = ezmaxproduct_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezmaxproduct_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezmaxproduct_get_autocomplete_v2_response = ezmaxproduct_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezmaxproduct_get_autocomplete_v2_response;
}


#ifdef ezmaxproduct_get_autocomplete_v2_response_MAIN

void test_ezmaxproduct_get_autocomplete_v2_response(int include_optional) {
    ezmaxproduct_get_autocomplete_v2_response_t* ezmaxproduct_get_autocomplete_v2_response_1 = instantiate_ezmaxproduct_get_autocomplete_v2_response(include_optional);

	cJSON* jsonezmaxproduct_get_autocomplete_v2_response_1 = ezmaxproduct_get_autocomplete_v2_response_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_1);
	printf("ezmaxproduct_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonezmaxproduct_get_autocomplete_v2_response_1));
	ezmaxproduct_get_autocomplete_v2_response_t* ezmaxproduct_get_autocomplete_v2_response_2 = ezmaxproduct_get_autocomplete_v2_response_parseFromJSON(jsonezmaxproduct_get_autocomplete_v2_response_1);
	cJSON* jsonezmaxproduct_get_autocomplete_v2_response_2 = ezmaxproduct_get_autocomplete_v2_response_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_2);
	printf("repeating ezmaxproduct_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonezmaxproduct_get_autocomplete_v2_response_2));
}

int main() {
  test_ezmaxproduct_get_autocomplete_v2_response(1);
  test_ezmaxproduct_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezmaxproduct_get_autocomplete_v2_response_MAIN
#endif // ezmaxproduct_get_autocomplete_v2_response_TEST
