#ifndef ezsignuser_get_object_v2_response_TEST
#define ezsignuser_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsignuser_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsignuser_get_object_v2_response.h"
ezsignuser_get_object_v2_response_t* instantiate_ezsignuser_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsignuser_get_object_v2_response_m_payload.c"


ezsignuser_get_object_v2_response_t* instantiate_ezsignuser_get_object_v2_response(int include_optional) {
  ezsignuser_get_object_v2_response_t* ezsignuser_get_object_v2_response = NULL;
  if (include_optional) {
    ezsignuser_get_object_v2_response = ezsignuser_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsignuser_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsignuser_get_object_v2_response = ezsignuser_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsignuser_get_object_v2_response;
}


#ifdef ezsignuser_get_object_v2_response_MAIN

void test_ezsignuser_get_object_v2_response(int include_optional) {
    ezsignuser_get_object_v2_response_t* ezsignuser_get_object_v2_response_1 = instantiate_ezsignuser_get_object_v2_response(include_optional);

	cJSON* jsonezsignuser_get_object_v2_response_1 = ezsignuser_get_object_v2_response_convertToJSON(ezsignuser_get_object_v2_response_1);
	printf("ezsignuser_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsignuser_get_object_v2_response_1));
	ezsignuser_get_object_v2_response_t* ezsignuser_get_object_v2_response_2 = ezsignuser_get_object_v2_response_parseFromJSON(jsonezsignuser_get_object_v2_response_1);
	cJSON* jsonezsignuser_get_object_v2_response_2 = ezsignuser_get_object_v2_response_convertToJSON(ezsignuser_get_object_v2_response_2);
	printf("repeating ezsignuser_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsignuser_get_object_v2_response_2));
}

int main() {
  test_ezsignuser_get_object_v2_response(1);
  test_ezsignuser_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsignuser_get_object_v2_response_MAIN
#endif // ezsignuser_get_object_v2_response_TEST
