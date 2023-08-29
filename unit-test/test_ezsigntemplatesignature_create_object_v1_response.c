#ifndef ezsigntemplatesignature_create_object_v1_response_TEST
#define ezsigntemplatesignature_create_object_v1_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define ezsigntemplatesignature_create_object_v1_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/ezsigntemplatesignature_create_object_v1_response.h"
ezsigntemplatesignature_create_object_v1_response_t* instantiate_ezsigntemplatesignature_create_object_v1_response(int include_optional);

#include "test_common_response_obj_debug_payload.c"
#include "test_common_response_obj_debug.c"
#include "test_ezsigntemplatesignature_create_object_v1_response_m_payload.c"


ezsigntemplatesignature_create_object_v1_response_t* instantiate_ezsigntemplatesignature_create_object_v1_response(int include_optional) {
  ezsigntemplatesignature_create_object_v1_response_t* ezsigntemplatesignature_create_object_v1_response = NULL;
  if (include_optional) {
    ezsigntemplatesignature_create_object_v1_response = ezsigntemplatesignature_create_object_v1_response_create(
       // false, not to have infinite recursion
      instantiate_common_response_obj_debug_payload(0),
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
       // false, not to have infinite recursion
      instantiate_ezsigntemplatesignature_create_object_v1_response_m_payload(0)
    );
  } else {
    ezsigntemplatesignature_create_object_v1_response = ezsigntemplatesignature_create_object_v1_response_create(
      NULL,
      {"sMemoryUsage":"11,923MB","sRunTime":"0.6084s","iSQLSelects":3,"iSQLQueries":6,"a_objSQLQuery":[{"sQuery":"SELECT * FROM table","fDuration":1.0E-4},{"sQuery":"SELECT * FROM table","fDuration":1.0E-4}]},
      NULL
    );
  }

  return ezsigntemplatesignature_create_object_v1_response;
}


#ifdef ezsigntemplatesignature_create_object_v1_response_MAIN

void test_ezsigntemplatesignature_create_object_v1_response(int include_optional) {
    ezsigntemplatesignature_create_object_v1_response_t* ezsigntemplatesignature_create_object_v1_response_1 = instantiate_ezsigntemplatesignature_create_object_v1_response(include_optional);

	cJSON* jsonezsigntemplatesignature_create_object_v1_response_1 = ezsigntemplatesignature_create_object_v1_response_convertToJSON(ezsigntemplatesignature_create_object_v1_response_1);
	printf("ezsigntemplatesignature_create_object_v1_response :\n%s\n", cJSON_Print(jsonezsigntemplatesignature_create_object_v1_response_1));
	ezsigntemplatesignature_create_object_v1_response_t* ezsigntemplatesignature_create_object_v1_response_2 = ezsigntemplatesignature_create_object_v1_response_parseFromJSON(jsonezsigntemplatesignature_create_object_v1_response_1);
	cJSON* jsonezsigntemplatesignature_create_object_v1_response_2 = ezsigntemplatesignature_create_object_v1_response_convertToJSON(ezsigntemplatesignature_create_object_v1_response_2);
	printf("repeating ezsigntemplatesignature_create_object_v1_response:\n%s\n", cJSON_Print(jsonezsigntemplatesignature_create_object_v1_response_2));
}

int main() {
  test_ezsigntemplatesignature_create_object_v1_response(1);
  test_ezsigntemplatesignature_create_object_v1_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // ezsigntemplatesignature_create_object_v1_response_MAIN
#endif // ezsigntemplatesignature_create_object_v1_response_TEST
