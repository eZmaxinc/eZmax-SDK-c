#ifndef period_get_autocomplete_v2_response_TEST
#define period_get_autocomplete_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define period_get_autocomplete_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/period_get_autocomplete_v2_response.h"
period_get_autocomplete_v2_response_t* instantiate_period_get_autocomplete_v2_response(int include_optional);

#include "test_period_get_autocomplete_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


period_get_autocomplete_v2_response_t* instantiate_period_get_autocomplete_v2_response(int include_optional) {
  period_get_autocomplete_v2_response_t* period_get_autocomplete_v2_response = NULL;
  if (include_optional) {
    period_get_autocomplete_v2_response = period_get_autocomplete_v2_response_create(
       // false, not to have infinite recursion
      instantiate_period_get_autocomplete_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    period_get_autocomplete_v2_response = period_get_autocomplete_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return period_get_autocomplete_v2_response;
}


#ifdef period_get_autocomplete_v2_response_MAIN

void test_period_get_autocomplete_v2_response(int include_optional) {
    period_get_autocomplete_v2_response_t* period_get_autocomplete_v2_response_1 = instantiate_period_get_autocomplete_v2_response(include_optional);

	cJSON* jsonperiod_get_autocomplete_v2_response_1 = period_get_autocomplete_v2_response_convertToJSON(period_get_autocomplete_v2_response_1);
	printf("period_get_autocomplete_v2_response :\n%s\n", cJSON_Print(jsonperiod_get_autocomplete_v2_response_1));
	period_get_autocomplete_v2_response_t* period_get_autocomplete_v2_response_2 = period_get_autocomplete_v2_response_parseFromJSON(jsonperiod_get_autocomplete_v2_response_1);
	cJSON* jsonperiod_get_autocomplete_v2_response_2 = period_get_autocomplete_v2_response_convertToJSON(period_get_autocomplete_v2_response_2);
	printf("repeating period_get_autocomplete_v2_response:\n%s\n", cJSON_Print(jsonperiod_get_autocomplete_v2_response_2));
}

int main() {
  test_period_get_autocomplete_v2_response(1);
  test_period_get_autocomplete_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // period_get_autocomplete_v2_response_MAIN
#endif // period_get_autocomplete_v2_response_TEST
