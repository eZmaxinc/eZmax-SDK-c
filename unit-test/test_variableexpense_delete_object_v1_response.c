#ifndef variableexpense_delete_object_v1_response_TEST
#define variableexpense_delete_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define variableexpense_delete_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/variableexpense_delete_object_v1_response.h"
variableexpense_delete_object_v1_response_t* instantiate_variableexpense_delete_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


variableexpense_delete_object_v1_response_t* instantiate_variableexpense_delete_object_v1_response(int include_optional) {
  variableexpense_delete_object_v1_response_t* variableexpense_delete_object_v1_response = NULL;
  if (include_optional) {
    variableexpense_delete_object_v1_response = variableexpense_delete_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    variableexpense_delete_object_v1_response = variableexpense_delete_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return variableexpense_delete_object_v1_response;
}


#ifdef variableexpense_delete_object_v1_response_MAIN

void test_variableexpense_delete_object_v1_response(int include_optional) {
    variableexpense_delete_object_v1_response_t* variableexpense_delete_object_v1_response_1 = instantiate_variableexpense_delete_object_v1_response(include_optional);

	cJSON* jsonvariableexpense_delete_object_v1_response_1 = variableexpense_delete_object_v1_response_convertToJSON(variableexpense_delete_object_v1_response_1);
	printf("variableexpense_delete_object_v1_response :\n%s\n", cJSON_Print(jsonvariableexpense_delete_object_v1_response_1));
	variableexpense_delete_object_v1_response_t* variableexpense_delete_object_v1_response_2 = variableexpense_delete_object_v1_response_parseFromJSON(jsonvariableexpense_delete_object_v1_response_1);
	cJSON* jsonvariableexpense_delete_object_v1_response_2 = variableexpense_delete_object_v1_response_convertToJSON(variableexpense_delete_object_v1_response_2);
	printf("repeating variableexpense_delete_object_v1_response:\n%s\n", cJSON_Print(jsonvariableexpense_delete_object_v1_response_2));
}

int main() {
  test_variableexpense_delete_object_v1_response(1);
  test_variableexpense_delete_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // variableexpense_delete_object_v1_response_MAIN
#endif // variableexpense_delete_object_v1_response_TEST
