#ifndef timezone_get_autocomplete_v2_response_TEST
#define timezone_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define timezone_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/timezone_get_autocomplete_v2_response.h"
timezone_get_autocomplete_v2_response_t* instantiate_timezone_get_autocomplete_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_timezone_get_autocomplete_v2_response_m_payload.c"


timezone_get_autocomplete_v2_response_t* instantiate_timezone_get_autocomplete_v2_response(int include_optional) {
  timezone_get_autocomplete_v2_response_t* timezone_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    timezone_get_autocomplete_v2_response = timezone_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_timezone_get_autocomplete_v2_response_m_payload(0)
    );
  } else {
    timezone_get_autocomplete_v2_response = timezone_get_autocomplete_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return timezone_get_autocomplete_v2_response;
}


#ifdef timezone_get_autocomplete_v2_response_MAIN

void test_timezone_get_autocomplete_v2_response(int include_optional) {
    timezone_get_autocomplete_v2_response_t* timezone_get_autocomplete_v2_response_1 = instantiate_timezone_get_autocomplete_v2_response(include_optional);

	cJSON* jsontimezone_get_autocomplete_v2_response_1 = timezone_get_autocomplete_v2_response_convertToJSON(timezone_get_autocomplete_v2_response_1);
	printf("timezone_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsontimezone_get_autocomplete_v2_response_1));
	timezone_get_autocomplete_v2_response_t* timezone_get_autocomplete_v2_response_2 = timezone_get_autocomplete_v2_response_parseFromJSON(jsontimezone_get_autocomplete_v2_response_1);
	cJSON* jsontimezone_get_autocomplete_v2_response_2 = timezone_get_autocomplete_v2_response_convertToJSON(timezone_get_autocomplete_v2_response_2);
	printf("repeating timezone_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsontimezone_get_autocomplete_v2_response_2));
}

int main() {
  test_timezone_get_autocomplete_v2_response(1);
  test_timezone_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // timezone_get_autocomplete_v2_response_MAIN
#endif // timezone_get_autocomplete_v2_response_TEST
