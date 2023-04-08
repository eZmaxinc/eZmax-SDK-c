#ifndef variableexpense_get_object_v2_response_TEST
#define variableexpense_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_get_object_v2_response.h"
variableexpense_get_object_v2_response_t* instantiate_variableexpense_get_object_v2_response(int include_optional);

#include "test_variableexpense_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


variableexpense_get_object_v2_response_t* instantiate_variableexpense_get_object_v2_response(int include_optional) {
  variableexpense_get_object_v2_response_t* variableexpense_get_object_v2_response = NULL;
  if (include_optional) {
    variableexpense_get_object_v2_response = variableexpense_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_variableexpense_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    variableexpense_get_object_v2_response = variableexpense_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return variableexpense_get_object_v2_response;
}


#ifdef variableexpense_get_object_v2_response_MAIN

void test_variableexpense_get_object_v2_response(int include_optional) {
    variableexpense_get_object_v2_response_t* variableexpense_get_object_v2_response_1 = instantiate_variableexpense_get_object_v2_response(include_optional);

	cJSON* jsonvariableexpense_get_object_v2_response_1 = variableexpense_get_object_v2_response_convertToJSON(variableexpense_get_object_v2_response_1);
	printf("variableexpense_get_object_v2_response :\n%s\n", cJSON_Print(jsonvariableexpense_get_object_v2_response_1));
	variableexpense_get_object_v2_response_t* variableexpense_get_object_v2_response_2 = variableexpense_get_object_v2_response_parseFromJSON(jsonvariableexpense_get_object_v2_response_1);
	cJSON* jsonvariableexpense_get_object_v2_response_2 = variableexpense_get_object_v2_response_convertToJSON(variableexpense_get_object_v2_response_2);
	printf("repeating variableexpense_get_object_v2_response:\n%s\n", cJSON_Print(jsonvariableexpense_get_object_v2_response_2));
}

int main() {
  test_variableexpense_get_object_v2_response(1);
  test_variableexpense_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_get_object_v2_response_MAIN
#endif // variableexpense_get_object_v2_response_TEST
