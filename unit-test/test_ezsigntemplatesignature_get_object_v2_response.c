#ifndef ezsigntemplatesignature_get_object_v2_response_TEST
#define ezsigntemplatesignature_get_object_v2_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_get_object_v2_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_get_object_v2_response.h"
ezsigntemplatesignature_get_object_v2_response_t* instantiate_ezsigntemplatesignature_get_object_v2_response(int include_optional);

#include "test_ezsigntemplatesignature_get_object_v2_response_m_payload.c"
#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"


ezsigntemplatesignature_get_object_v2_response_t* instantiate_ezsigntemplatesignature_get_object_v2_response(int include_optional) {
  ezsigntemplatesignature_get_object_v2_response_t* ezsigntemplatesignature_get_object_v2_response = NULL;
  if (include_optional) {
    ezsigntemplatesignature_get_object_v2_response = ezsigntemplatesignature_get_object_v2_response_create(
       // false, not to have infinite recursion
      instantiate_ezsigntemplatesignature_get_object_v2_response_m_payload(0),
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  } else {
    ezsigntemplatesignature_get_object_v2_response = ezsigntemplatesignature_get_object_v2_response_create(
      NULL,
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]}
    );
  }

  return ezsigntemplatesignature_get_object_v2_response;
}


#ifdef ezsigntemplatesignature_get_object_v2_response_MAIN

void test_ezsigntemplatesignature_get_object_v2_response(int include_optional) {
    ezsigntemplatesignature_get_object_v2_response_t* ezsigntemplatesignature_get_object_v2_response_1 = instantiate_ezsigntemplatesignature_get_object_v2_response(include_optional);

	cJSON* jsonezsigntemplatesignature_get_object_v2_response_1 = ezsigntemplatesignature_get_object_v2_response_convertToJSON(ezsigntemplatesignature_get_object_v2_response_1);
	printf("ezsigntemplatesignature_get_object_v2_response :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_get_object_v2_response_1));
	ezsigntemplatesignature_get_object_v2_response_t* ezsigntemplatesignature_get_object_v2_response_2 = ezsigntemplatesignature_get_object_v2_response_parseFromJSON(jsonezsigntemplatesignature_get_object_v2_response_1);
	cJSON* jsonezsigntemplatesignature_get_object_v2_response_2 = ezsigntemplatesignature_get_object_v2_response_convertToJSON(ezsigntemplatesignature_get_object_v2_response_2);
	printf("repeating ezsigntemplatesignature_get_object_v2_response:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_get_object_v2_response_2));
}

int main() {
  test_ezsigntemplatesignature_get_object_v2_response(1);
  test_ezsigntemplatesignature_get_object_v2_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_get_object_v2_response_MAIN
#endif // ezsigntemplatesignature_get_object_v2_response_TEST
