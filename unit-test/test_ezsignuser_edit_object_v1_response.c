#ifndef ezsignuser_edit_object_v1_response_TEST
#define ezsignuser_edit_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignuser_edit_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignuser_edit_object_v1_response.h"
ezsignuser_edit_object_v1_response_t* instantiate_ezsignuser_edit_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsignuser_edit_object_v1_response_t* instantiate_ezsignuser_edit_object_v1_response(int include_optional) {
  ezsignuser_edit_object_v1_response_t* ezsignuser_edit_object_v1_response = NULL;
  if (include_optional) {
    ezsignuser_edit_object_v1_response = ezsignuser_edit_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsignuser_edit_object_v1_response = ezsignuser_edit_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsignuser_edit_object_v1_response;
}


#ifdef ezsignuser_edit_object_v1_response_MAIN

void test_ezsignuser_edit_object_v1_response(int include_optional) {
    ezsignuser_edit_object_v1_response_t* ezsignuser_edit_object_v1_response_1 = instantiate_ezsignuser_edit_object_v1_response(include_optional);

	cJSON* jsonezsignuser_edit_object_v1_response_1 = ezsignuser_edit_object_v1_response_convertToJSON(ezsignuser_edit_object_v1_response_1);
	printf("ezsignuser_edit_object_v1_response :\n%s\n", cJSON_Print(jsonezsignuser_edit_object_v1_response_1));
	ezsignuser_edit_object_v1_response_t* ezsignuser_edit_object_v1_response_2 = ezsignuser_edit_object_v1_response_parseFromJSON(jsonezsignuser_edit_object_v1_response_1);
	cJSON* jsonezsignuser_edit_object_v1_response_2 = ezsignuser_edit_object_v1_response_convertToJSON(ezsignuser_edit_object_v1_response_2);
	printf("repeating ezsignuser_edit_object_v1_response:\n%s\n", cJSON_Print(jsonezsignuser_edit_object_v1_response_2));
}

int main() {
  test_ezsignuser_edit_object_v1_response(1);
  test_ezsignuser_edit_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignuser_edit_object_v1_response_MAIN
#endif // ezsignuser_edit_object_v1_response_TEST
