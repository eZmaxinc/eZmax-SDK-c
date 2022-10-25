#ifndef ezsigntsarequirement_get_autocomplete_v2_response_TEST
#define ezsigntsarequirement_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntsarequirement_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntsarequirement_get_autocomplete_v2_response.h"
ezsigntsarequirement_get_autocomplete_v2_response_t* instantiate_ezsigntsarequirement_get_autocomplete_v2_response(int include_optional);

#include "test_ezsigntsarequirement_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntsarequirement_get_autocomplete_v2_response_t* instantiate_ezsigntsarequirement_get_autocomplete_v2_response(int include_optional) {
  ezsigntsarequirement_get_autocomplete_v2_response_t* ezsigntsarequirement_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    ezsigntsarequirement_get_autocomplete_v2_response = ezsigntsarequirement_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsigntsarequirement_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntsarequirement_get_autocomplete_v2_response = ezsigntsarequirement_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntsarequirement_get_autocomplete_v2_response;
}


#ifdef ezsigntsarequirement_get_autocomplete_v2_response_MAIN

void test_ezsigntsarequirement_get_autocomplete_v2_response(int include_optional) {
    ezsigntsarequirement_get_autocomplete_v2_response_t* ezsigntsarequirement_get_autocomplete_v2_response_1 = instantiate_ezsigntsarequirement_get_autocomplete_v2_response(include_optional);

	cJSON* jsonezsigntsarequirement_get_autocomplete_v2_response_1 = ezsigntsarequirement_get_autocomplete_v2_response_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_1);
	printf("ezsigntsarequirement_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonezsigntsarequirement_get_autocomplete_v2_response_1));
	ezsigntsarequirement_get_autocomplete_v2_response_t* ezsigntsarequirement_get_autocomplete_v2_response_2 = ezsigntsarequirement_get_autocomplete_v2_response_parseFromJSON(jsonezsigntsarequirement_get_autocomplete_v2_response_1);
	cJSON* jsonezsigntsarequirement_get_autocomplete_v2_response_2 = ezsigntsarequirement_get_autocomplete_v2_response_convertToJSON(ezsigntsarequirement_get_autocomplete_v2_response_2);
	printf("repeating ezsigntsarequirement_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonezsigntsarequirement_get_autocomplete_v2_response_2));
}

int main() {
  test_ezsigntsarequirement_get_autocomplete_v2_response(1);
  test_ezsigntsarequirement_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntsarequirement_get_autocomplete_v2_response_MAIN
#endif // ezsigntsarequirement_get_autocomplete_v2_response_TEST
