#ifndef variableexpense_create_object_v1_response_TEST
#define variableexpense_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_create_object_v1_response.h"
variableexpense_create_object_v1_response_t* instantiate_variableexpense_create_object_v1_response(int include_optional);

#include "test_variableexpense_create_object_v1_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


variableexpense_create_object_v1_response_t* instantiate_variableexpense_create_object_v1_response(int include_optional) {
  variableexpense_create_object_v1_response_t* variableexpense_create_object_v1_response = NULL;
  if (include_optional) {
    variableexpense_create_object_v1_response = variableexpense_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_variableexpense_create_object_v1_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    variableexpense_create_object_v1_response = variableexpense_create_object_v1_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return variableexpense_create_object_v1_response;
}


#ifdef variableexpense_create_object_v1_response_MAIN

void test_variableexpense_create_object_v1_response(int include_optional) {
    variableexpense_create_object_v1_response_t* variableexpense_create_object_v1_response_1 = instantiate_variableexpense_create_object_v1_response(include_optional);

	cJSON* jsonvariableexpense_create_object_v1_response_1 = variableexpense_create_object_v1_response_convertToJSON(variableexpense_create_object_v1_response_1);
	printf("variableexpense_create_object_v1_response :\n%s\n", cJSON_Print(jsonvariableexpense_create_object_v1_response_1));
	variableexpense_create_object_v1_response_t* variableexpense_create_object_v1_response_2 = variableexpense_create_object_v1_response_parseFromJSON(jsonvariableexpense_create_object_v1_response_1);
	cJSON* jsonvariableexpense_create_object_v1_response_2 = variableexpense_create_object_v1_response_convertToJSON(variableexpense_create_object_v1_response_2);
	printf("repeating variableexpense_create_object_v1_response:\n%s\n", cJSON_Print(jsonvariableexpense_create_object_v1_response_2));
}

int main() {
  test_variableexpense_create_object_v1_response(1);
  test_variableexpense_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_create_object_v1_response_MAIN
#endif // variableexpense_create_object_v1_response_TEST
