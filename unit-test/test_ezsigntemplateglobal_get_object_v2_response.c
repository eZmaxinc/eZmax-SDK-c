#ifndef ezsigntemplateglobal_get_object_v2_response_TEST
#define ezsigntemplateglobal_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplateglobal_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplateglobal_get_object_v2_response.h"
ezsigntemplateglobal_get_object_v2_response_t* instantiate_ezsigntemplateglobal_get_object_v2_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplateglobal_get_object_v2_response_m_payload.c"


ezsigntemplateglobal_get_object_v2_response_t* instantiate_ezsigntemplateglobal_get_object_v2_response(int include_optional) {
  ezsigntemplateglobal_get_object_v2_response_t* ezsigntemplateglobal_get_object_v2_response = NULL;
  if (include_optional) {
    ezsigntemplateglobal_get_object_v2_response = ezsigntemplateglobal_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplateglobal_get_object_v2_response_m_payload(0)
    );
  } else {
    ezsigntemplateglobal_get_object_v2_response = ezsigntemplateglobal_get_object_v2_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplateglobal_get_object_v2_response;
}


#ifdef ezsigntemplateglobal_get_object_v2_response_MAIN

void test_ezsigntemplateglobal_get_object_v2_response(int include_optional) {
    ezsigntemplateglobal_get_object_v2_response_t* ezsigntemplateglobal_get_object_v2_response_1 = instantiate_ezsigntemplateglobal_get_object_v2_response(include_optional);

	cJSON* jsonezsigntemplateglobal_get_object_v2_response_1 = ezsigntemplateglobal_get_object_v2_response_convertToJSON(ezsigntemplateglobal_get_object_v2_response_1);
	printf("ezsigntemplateglobal_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsigntemplateglobal_get_object_v2_response_1));
	ezsigntemplateglobal_get_object_v2_response_t* ezsigntemplateglobal_get_object_v2_response_2 = ezsigntemplateglobal_get_object_v2_response_parseFromJSON(jsonezsigntemplateglobal_get_object_v2_response_1);
	cJSON* jsonezsigntemplateglobal_get_object_v2_response_2 = ezsigntemplateglobal_get_object_v2_response_convertToJSON(ezsigntemplateglobal_get_object_v2_response_2);
	printf("repeating ezsigntemplateglobal_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsigntemplateglobal_get_object_v2_response_2));
}

int main() {
  test_ezsigntemplateglobal_get_object_v2_response(1);
  test_ezsigntemplateglobal_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplateglobal_get_object_v2_response_MAIN
#endif // ezsigntemplateglobal_get_object_v2_response_TEST
